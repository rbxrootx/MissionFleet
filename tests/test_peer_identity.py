import unittest

from emulator.peer_identity import PeerIdentity, resolve_peer_identity


class PeerIdentityTests(unittest.TestCase):
    def test_success_extracts_network_order_port_and_ipv4_text(self):
        current = PeerIdentity("old", 1)
        sockaddr = bytes.fromhex("02001f4a7f0000010000000000000000")
        outcome = resolve_peer_identity(
            current, getpeername_result=0, sockaddr=sockaddr
        )
        self.assertTrue(outcome.success)
        self.assertEqual(outcome.identity, PeerIdentity("127.0.0.1", 8010))
        self.assertTrue(outcome.assign_address)
        self.assertTrue(outcome.assign_port)

    def test_only_exact_minus_one_is_failure(self):
        outcome = resolve_peer_identity(
            PeerIdentity("old", 1),
            getpeername_result=-2,
            sockaddr=bytes.fromhex("0200ffffc00002010000000000000000"),
        )
        self.assertTrue(outcome.success)
        self.assertEqual(outcome.identity, PeerIdentity("192.0.2.1", 65535))

    def test_failure_preserves_both_outputs(self):
        current = PeerIdentity("unchanged", 0x1234)
        outcome = resolve_peer_identity(
            current, getpeername_result=-1, sockaddr=b""
        )
        self.assertFalse(outcome.success)
        self.assertEqual(outcome.identity, current)
        self.assertFalse(outcome.assign_address)
        self.assertFalse(outcome.assign_port)

    def test_success_requires_returned_sockaddr_storage(self):
        with self.assertRaisesRegex(ValueError, "sockaddr_in"):
            resolve_peer_identity(
                PeerIdentity("old", 1), getpeername_result=0, sockaddr=b"\0" * 7
            )


if __name__ == "__main__":
    unittest.main()
