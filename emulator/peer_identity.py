"""Peer IPv4/port extraction recovered from login routine 0x00410820."""

from __future__ import annotations

from dataclasses import dataclass


@dataclass(frozen=True, slots=True)
class PeerIdentity:
    address: str
    port: int


@dataclass(frozen=True, slots=True)
class PeerIdentityOutcome:
    success: bool
    identity: PeerIdentity
    assign_address: bool = False
    assign_port: bool = False


def resolve_peer_identity(
    current: PeerIdentity,
    *,
    getpeername_result: int,
    sockaddr: bytes,
) -> PeerIdentityOutcome:
    """Apply the getpeername success test and sockaddr_in field extraction."""
    if getpeername_result == -1:
        return PeerIdentityOutcome(False, current)
    if len(sockaddr) < 8:
        raise ValueError("successful getpeername requires sockaddr_in bytes")

    port = int.from_bytes(sockaddr[2:4], "big")
    address = ".".join(str(byte) for byte in sockaddr[4:8])
    return PeerIdentityOutcome(
        True,
        PeerIdentity(address, port),
        assign_address=True,
        assign_port=True,
    )
