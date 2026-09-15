import unittest

from emulator.connection_manager import ConnectionManager, ManagedConnection, MembershipResult


class ConnectionManagerTests(unittest.TestCase):
    def test_attach_appends_and_writes_native_membership_fields(self):
        manager = ConnectionManager(maximum_count=2, notification_slot=4)
        first = ManagedConnection(1)
        second = ManagedConnection(2)
        self.assertEqual(manager.attach(first, 0xFFFFFFF0), MembershipResult(True, True))
        self.assertEqual(manager.attach(second, 0x100000005), MembershipResult(True, True))
        self.assertEqual(manager.connections(), (first, second))
        self.assertIs(manager.head, first)
        self.assertIs(manager.tail, second)
        self.assertIs(first.next, second)
        self.assertIs(second.previous, first)
        self.assertIs(first.owner, manager)
        self.assertEqual(second.last_activity_tick, 5)
        self.assertEqual(manager.count, 2)

    def test_capacity_and_duplicate_attach_fail_without_mutation(self):
        manager = ConnectionManager(maximum_count=1)
        first = ManagedConnection(1)
        second = ManagedConnection(2)
        self.assertTrue(manager.attach(first, 10).succeeded)
        self.assertEqual(manager.attach(first, 20), MembershipResult(False))
        self.assertEqual(manager.attach(second, 20), MembershipResult(False))
        self.assertEqual(manager.connections(), (first,))
        self.assertEqual(first.last_activity_tick, 10)

    def test_unlimited_manager_transfers_connection_from_old_owner(self):
        old = ConnectionManager(maximum_count=-1, notification_slot=1)
        new = ConnectionManager(maximum_count=-1, notification_slot=-1)
        connection = ManagedConnection(7)
        old.attach(connection, 100)
        self.assertEqual(new.attach(connection, 200), MembershipResult(True, False))
        self.assertEqual(old.connections(), ())
        self.assertEqual(old.count, 0)
        self.assertEqual(new.connections(), (connection,))
        self.assertIs(connection.owner, new)
        self.assertEqual(connection.last_activity_tick, 200)
        self.assertEqual(old.notifications_posted, 2)
        self.assertEqual(new.notifications_posted, 0)

    def test_remove_repairs_head_middle_and_tail_links(self):
        manager = ConnectionManager(notification_slot=9)
        nodes = [ManagedConnection(value) for value in range(3)]
        for node in nodes:
            manager.attach(node, 0)
        self.assertEqual(manager.remove(nodes[1]), MembershipResult(True, True))
        self.assertEqual(manager.connections(), (nodes[0], nodes[2]))
        self.assertIs(nodes[0].next, nodes[2])
        self.assertIs(nodes[2].previous, nodes[0])
        self.assertIsNone(nodes[1].owner)
        self.assertIsNone(nodes[1].previous)
        self.assertIsNone(nodes[1].next)
        manager.remove(nodes[0])
        manager.remove(nodes[2])
        self.assertIsNone(manager.head)
        self.assertIsNone(manager.tail)
        self.assertEqual(manager.count, 0)

    def test_remove_rejects_null_and_foreign_connection(self):
        first = ConnectionManager()
        second = ConnectionManager()
        connection = ManagedConnection(3)
        first.attach(connection, 0)
        self.assertEqual(second.remove(connection), MembershipResult(False))
        self.assertEqual(first.remove(None), MembershipResult(False))
        self.assertEqual(first.connections(), (connection,))


if __name__ == "__main__":
    unittest.main()
