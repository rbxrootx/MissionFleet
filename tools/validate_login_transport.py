"""Validate documented login transport facts against the recovered NF2 2.062 bytes."""

from __future__ import annotations

from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
REGION = ROOT / "private-inputs/decompilation/regions/login-server.bin"
MEMORY_BASE = 0x00401000


def function_bytes(image: bytes, address: int, size: int) -> bytes:
    start = address - MEMORY_BASE
    return image[start : start + size]


def require(body: bytes, needle: bytes, claim: str) -> None:
    if needle not in body:
        raise AssertionError(f"original-byte evidence missing for {claim}: {needle.hex()}")


def main() -> None:
    image = REGION.read_bytes()

    send = function_bytes(image, 0x00410000, 696)
    require(send, bytes.fromhex("c744242804030201"), "0x01020304 header magic")
    require(send, bytes.fromhex("3d0f000180"), "0x8001000f checksum exemption")
    require(send, bytes.fromhex("0fbe44142883c0070fafc2"), "signed header byte plus 7")
    require(send, bytes.fromhex("0fbe043283c00b0fafc2"), "signed payload byte plus 11")
    require(send, bytes.fromhex("81f1d01ca9f3"), "stateless XOR 0xf3a91cd0")
    require(send, bytes.fromhex("83c70d"), "stateful table index step of 13")
    require(send, bytes.fromhex("c744241014000000"), "20-byte header buffer")
    require(send, bytes.fromhex("c744241804000000"), "four-byte checksum buffer")

    dispatch = function_bytes(image, 0x0040B4F3, 3156)
    require(dispatch, bytes.fromhex("0f000180"), "initial probe dispatch ID")
    require(dispatch, bytes.fromhex("0f000280"), "initial probe reply ID")

    heartbeat = function_bytes(image, 0x00411520, 272)
    require(heartbeat, bytes.fromhex("680f000180"), "periodic initial probe send")
    require(heartbeat, bytes.fromhex("399eac0000000f84"), "inactive connection skip")
    require(heartbeat, bytes.fromhex("8b46648bcd2bc8"), "unsigned elapsed tick subtraction")
    require(heartbeat, bytes.fromhex("8b87740c00003bc876"), "strict timeout comparison")
    require(heartbeat, bytes.fromhex("395e0c741d"), "one-shot probe armed test")
    require(heartbeat, bytes.fromhex("992bc2d1f83bc876"), "signed half-timeout comparison")
    require(heartbeat, bytes.fromhex("895e0c"), "probe disarm write")
    require(heartbeat, bytes.fromhex("68cc040000"), "timeout window notification 0x4cc")

    close_request = function_bytes(image, 0x0040FFC0, 64)
    require(close_request, bytes.fromhex("8b464885c0742e"), "close registry-owner guard")
    require(close_request, bytes.fromhex("8b86ac00000085c07424"), "close active-state guard")
    require(close_request, bytes.fromhex("c786ac00000000000000"), "active-state clear")
    require(close_request, bytes.fromhex("6a0150"), "receive-side socket shutdown")
    require(close_request, bytes.fromhex("6a2051"), "queued socket close event 0x20")

    receive_completion = function_bytes(image, 0x004102C0, 128)
    require(
        receive_completion,
        bytes.fromhex("ff1580c543008b4b04894364"),
        "receive completion activity timestamp before result inspection",
    )
    require(
        receive_completion,
        bytes.fromhex("c7430c01000000"),
        "receive completion probe rearm",
    )
    require(
        receive_completion,
        bytes.fromhex("ff15dcc543008b44241885c0"),
        "overlapped result inspection after activity writes",
    )
    receive_pump = function_bytes(image, 0x004102C0, 320)
    require(receive_pump, bytes.fromhex("687f660440"), "FIONREAD query code")
    require(receive_pump, bytes.fromhex("8b44241885c00f84"), "zero available-byte return")
    require(receive_pump, bytes.fromhex("03433c8be88b43383be8"), "required capacity calculation")
    require(receive_pump, bytes.fromhex("3d0080000076"), "32 KiB shrink capacity threshold")
    require(receive_pump, bytes.fromhex("81fd0040000073"), "16 KiB strict low-water threshold")
    require(receive_pump, bytes.fromhex("6800800000"), "32 KiB replacement allocation")
    require(receive_pump, bytes.fromhex("2bc88d1406"), "receive tail offset and capacity")
    require(receive_pump, bytes.fromhex("ff15d8c5430083f8ff"), "WSARecv and failure comparison")

    unprotected_parse = function_bytes(image, 0x004105D3, 170)
    require(unprotected_parse, bytes.fromhex("83f8140f82"), "20-byte header completeness test")
    require(unprotected_parse, bytes.fromhex("8b4e1083c0ec3bc10f82"), "payload completeness test")
    require(unprotected_parse, bytes.fromhex("813e04030201752f"), "unprotected magic branch")
    require(unprotected_parse, bytes.fromhex("ff521085c07438"), "owner dispatch gate")
    require(unprotected_parse, bytes.fromhex("68c9040000"), "invalid magic notification 0x4c9")
    require(unprotected_parse, bytes.fromhex("b8ecffffff2bc203c8"), "20-plus-payload consumption")
    require(unprotected_parse, bytes.fromhex("8d740e140f856cffffff"), "next-frame parse loop")

    protected_parse = function_bytes(image, 0x0041040B, 422)
    require(protected_parse, bytes.fromhex("83f8140f82"), "protected header completeness")
    require(protected_parse, bytes.fromhex("8d57043bc20f82"), "payload-plus-checksum completeness")
    require(protected_parse, bytes.fromhex("3d0f0002800f84"), "probe-reply checksum bypass")
    require(protected_parse, bytes.fromhex("8b83d000000085c07435"), "active table-mode branch")
    require(protected_parse, bytes.fromhex("83c5118b3c9089abdc000000"), "active table cursor advance")
    require(protected_parse, bytes.fromhex("81f106a18b7c"), "stateless receive checksum XOR")
    require(protected_parse, bytes.fromhex("817e040e0302807548"), "table transition response gate")
    require(protected_parse, bytes.fromhex("c783d000000001000000"), "table-mode activation")
    require(protected_parse, bytes.fromhex("ff12"), "checksum mismatch callback")
    require(protected_parse, bytes.fromhex("b9e8ffffff2bcf03d1"), "protected frame consumption")

    receive_failure = function_bytes(image, 0x00410691, 108)
    require(receive_failure, bytes.fromhex("8b43483bc57438"), "optional statistics owner")
    require(
        receive_failure,
        bytes.fromhex("8b88e00b00008b90180c000003cf8988e00b0000"),
        "first receive-failure counter low-word increment",
    )
    require(
        receive_failure,
        bytes.fromhex("8bb0e40b000013f503d78990180c0000"),
        "carry and second receive-failure counter increment",
    )
    require(receive_failure, bytes.fromhex("68ca040000"), "receive failure notification 0x4ca")
    require(receive_failure, bytes.fromhex("83c8ff"), "receive failure return value -1")
    if bytes.fromhex("ff15d0c54300") in receive_failure:
        raise AssertionError("receive failure branch unexpectedly calls WSAGetLastError")

    socket_events = function_bytes(image, 0x00410700, 229)
    require(socket_events, bytes.fromhex("488bf183f81f77"), "event-minus-one switch range")
    require(socket_events, bytes.fromhex("ff5208"), "read-event virtual callback")
    require(socket_events, bytes.fromhex("6a236864040000"), "connect async-select mask and message")
    require(socket_events, bytes.fromhex("83f8ff"), "async-select exact -1 failure")
    require(socket_events, bytes.fromhex("c786ac00000001000000"), "connect success activation")
    require(socket_events, bytes.fromhex("ff520c"), "connect-success virtual callback")
    require(socket_events, bytes.fromhex("8b464833c93bc174"), "connect-failure registry guard")
    require(socket_events, bytes.fromhex("398eac000000"), "connect-failure active guard")
    require(socket_events, bytes.fromhex("6a0150"), "connect-failure receive shutdown")
    require(socket_events, bytes.fromhex("6a2051"), "connect-failure queued close event")
    require(socket_events, bytes.fromhex("ff5010"), "close-event virtual callback")
    require(socket_events, bytes.fromhex("8b88d00b000003ca8988d00b0000"), "first close counter")
    require(socket_events, bytes.fromhex("8bb0080c000003f289b0080c0000"), "second close counter")
    require(socket_events, bytes.fromhex("83c8ff"), "close-event return value -1")

    peer_identity = function_bytes(image, 0x00410820, 116)
    require(peer_identity, bytes.fromhex("c744241010000000"), "16-byte peer name capacity")
    require(peer_identity, bytes.fromhex("ff15acc54300"), "peer getpeername call")
    require(peer_identity, bytes.fromhex("83f8ff0f95c2"), "peer exact -1 failure test")
    require(peer_identity, bytes.fromhex("8b44240a50ff15ccc54300"), "peer port ntohs conversion")
    require(peer_identity, bytes.fromhex("25ffff0000"), "peer port 16-bit mask")
    require(
        peer_identity,
        bytes.fromhex("8b54240c25ffff0000528901ff15c8c54300"),
        "peer IPv4 inet_ntoa conversion",
    )
    require(peer_identity, bytes.fromhex("e8a9d40100"), "peer address string assignment")
    require(peer_identity, bytes.fromhex("8bc6"), "peer success boolean return")

    receive = function_bytes(image, 0x00410340, 960)
    require(receive, bytes.fromhex("ff15d8c54300"), "WSARecv call")
    require(receive, bytes.fromhex("83f814"), "20-byte header boundary")
    require(receive, bytes.fromhex("813e04030201"), "receive magic comparison")
    require(receive, bytes.fromhex("3d0f000280"), "probe reply checksum exemption")
    require(receive, bytes.fromhex("0fbe043283c00d0fafc2"), "signed receive header byte plus 13")
    require(receive, bytes.fromhex("0fbe44161483c01d0fafc2"), "signed receive payload byte plus 29")
    require(receive, bytes.fromhex("81f106a18b7c"), "receive XOR 0x7c8ba106")
    require(receive, bytes.fromhex("817e040e030280"), "table-mode transition message")
    require(receive, bytes.fromhex("83c011"), "receive table index step of 17")

    table_setup = function_bytes(image, 0x00410E40, 453)
    require(table_setup, bytes.fromhex("6800080000"), "2,048-entry checksum table")
    require(table_setup, bytes.fromhex("8d04528d1482"), "initial send cursor multiplier 13")
    require(table_setup, bytes.fromhex("c1e00403c2"), "initial receive cursor multiplier 17")

    table_generator = function_bytes(image, 0x00411720, 157)
    require(table_generator, bytes.fromhex("e877dc0000"), "table generator seed call")
    require(
        table_generator,
        bytes.fromhex(
            "e877dc00008bd8e870dc00000fafd8e868dc00000fafd8e860dc00000fafd8"
        ),
        "four multiplied MSVC rand outputs",
    )
    require(table_generator, bytes.fromhex("81f306a18b7c"), "table value XOR")
    require(table_generator, bytes.fromhex("b8d01ca9f3f7f1"), "table quotient mixing")

    negotiation = function_bytes(image, 0x00411010, 329)
    require(negotiation, bytes.fromhex("ff15acc54300"), "negotiation getpeername")
    require(negotiation, bytes.fromhex("ff15ccc54300"), "negotiation ntohs")
    require(negotiation, bytes.fromhex("ff15c8c54300"), "negotiation inet_ntoa")
    require(
        negotiation,
        bytes.fromhex("0fbe041a8d2cc5000000002be88d0ca903c8"),
        "IPv4 text byte multiplier 29",
    )
    require(negotiation, bytes.fromhex("8bd5c1e2052bd5"), "peer port multiplier 31")
    require(negotiation, bytes.fromhex("35d01ca9f3"), "nonce request XOR")
    require(negotiation, bytes.fromhex("81f106a18b7c"), "peer request XOR")
    require(negotiation, bytes.fromhex("680d030280"), "protection request ID")

    require(
        table_setup,
        bytes.fromhex("8bc8c1e10403c8"),
        "connection nonce multiplier 17",
    )

    accept = function_bytes(image, 0x0040F6E8, 47)
    require(accept, bytes.fromhex("ff1580c54300"), "timeGetTime connection nonce")
    require(accept, bytes.fromhex("0faf86b40b0000"), "accepted-count nonce multiplier")
    require(accept, bytes.fromhex("8987d4000000"), "connection nonce field at 0xd4")

    bootstrap = function_bytes(image, 0x0040F560, 509)
    require(
        bootstrap,
        bytes.fromhex("8b86b40b00008b4e643bc17606"),
        "unsigned active-count <= maximum-count capacity gate",
    )
    require(bootstrap, bytes.fromhex("8b465485c0"), "accept-enabled flag gate")
    require(bootstrap, bytes.fromhex("8b8e280c0000"), "accept-policy callback object")
    require(bootstrap, bytes.fromhex("ff5004"), "accept-policy virtual call")
    require(bootstrap, bytes.fromhex("83f801"), "successful accept-policy result")
    require(bootstrap, bytes.fromhex("6809010180"), "connection announcement ID")
    require(bootstrap, bytes.fromhex("6802800000"), "login server role parameter")
    require(bootstrap, bytes.fromhex("c787ac00000001000000"), "connection active flag")
    require(bootstrap, bytes.fromhex("ff500c"), "receive activation virtual call")
    require(bootstrap, bytes.fromhex("8b87e000000085c0"), "protection-enabled branch")
    require(bootstrap, bytes.fromhex("6803000080"), "rejected connection message")

    teardown = function_bytes(image, 0x0040FEF0, 196)
    require(
        teardown,
        bytes.fromhex("8b4e4c3bcb74068b0156ff5008"),
        "pre-close hook presence test and virtual call",
    )
    require(teardown, bytes.fromhex("8b46045783cfff3bc7"), "open-socket sentinel test")
    require(teardown, bytes.fromhex("8b86b80000003bc7"), "window-slot sentinel test")
    require(teardown, bytes.fromhex("686a040000"), "window close notification 0x46a")
    require(teardown, bytes.fromhex("8b4e483bcb"), "async-select registration flag test")
    require(teardown, bytes.fromhex("ff15b0c54300"), "closesocket call")
    require(teardown, bytes.fromhex("89beb8000000"), "window-slot sentinel write")
    require(teardown, bytes.fromhex("897e04"), "closed socket sentinel write")
    require(teardown, bytes.fromhex("89bed4000000"), "connection nonce reset")
    require(
        teardown,
        bytes.fromhex("899ecc00000089bed4000000899ed0000000899ed8000000899edc000000"),
        "pending state and checksum cursor resets",
    )
    require(
        teardown,
        bytes.fromhex("8b4e505f3bcb74098b0156ff5008"),
        "owner remove-hook presence test and virtual call",
    )

    unregister = function_bytes(image, 0x0040F8B0, 114)
    require(unregister, bytes.fromhex("83faff"), "invalid-socket unregister rejection")
    require(
        unregister,
        bytes.fromhex("8b87b40b00005e85c07407488987b40b0000"),
        "nonzero active-count decrement after socket-map removal",
    )

    manager_attach = function_bytes(image, 0x00411320, 192)
    require(manager_attach, bytes.fromhex("8b860c01000083f8ff"), "unlimited manager sentinel")
    require(manager_attach, bytes.fromhex("3986100100000f8d"), "manager capacity comparison")
    require(manager_attach, bytes.fromhex("8b4f4c85c9740a3bce"), "existing owner and duplicate test")
    require(manager_attach, bytes.fromhex("8b0157ff5008"), "old-owner removal callback")
    require(manager_attach, bytes.fromhex("89774c"), "connection owner assignment")
    require(manager_attach, bytes.fromhex("ff1580c54300894764"), "activity timestamp assignment")
    require(manager_attach, bytes.fromhex("8b961001000042899610010000"), "manager count increment")
    require(manager_attach, bytes.fromhex("686b040000"), "membership notification 0x46b")

    manager_remove = function_bytes(image, 0x004113E0, 160)
    require(manager_remove, bytes.fromhex("39484c0f85"), "remove owner identity test")
    require(manager_remove, bytes.fromhex("8b5054573bd67420"), "remove head branch")
    require(manager_remove, bytes.fromhex("8b5054899118010000"), "remove tail branch")
    require(manager_remove, bytes.fromhex("8bb9100100004f89b910010000"), "manager count decrement")
    require(manager_remove, bytes.fromhex("89704c897054897058"), "cleared membership links")

    print(
        "validated login transport evidence at 0x0040b4f3, 0x0040f560, 0x00410000, "
        "0x0040f8b0, 0x0040fef0, 0x0040ffc0, 0x004102c0, 0x00410340, 0x004105d3, 0x00410700, 0x00410820, 0x00410e40, 0x00411010, 0x00411520, "
        "0x00411320, 0x004113e0, and 0x00411720"
    )


if __name__ == "__main__":
    main()
