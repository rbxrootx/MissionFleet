"""NavyFIELD login connection list recovered from routines 0x00411320/0x004113e0."""

from __future__ import annotations

from dataclasses import dataclass


UINT32_MASK = 0xFFFFFFFF


@dataclass(slots=True, eq=False)
class ManagedConnection:
    """Fields embedded in each native connection at offsets 0x4c, 0x54, 0x58, 0x64."""

    identifier: int
    owner: ConnectionManager | None = None
    previous: ManagedConnection | None = None
    next: ManagedConnection | None = None
    last_activity_tick: int = 0


@dataclass(frozen=True, slots=True)
class MembershipResult:
    succeeded: bool
    notified: bool = False


class ConnectionManager:
    """Intrusive doubly linked list with the native membership semantics."""

    def __init__(self, maximum_count: int = -1, notification_slot: int = -1):
        self.maximum_count = maximum_count
        self.notification_slot = notification_slot
        self.count = 0
        self.head: ManagedConnection | None = None
        self.tail: ManagedConnection | None = None
        self.notifications_posted = 0

    def attach(
        self,
        connection: ManagedConnection | None,
        tick_milliseconds: int,
    ) -> MembershipResult:
        if connection is None:
            return MembershipResult(False)
        if self.maximum_count != -1 and self.count >= self.maximum_count:
            return MembershipResult(False)
        if connection.owner is self:
            return MembershipResult(False)
        if connection.owner is not None:
            connection.owner.remove(connection)

        connection.previous = self.tail
        if self.tail is None:
            self.head = connection
        else:
            self.tail.next = connection
        self.tail = connection
        connection.owner = self
        connection.next = None
        connection.last_activity_tick = tick_milliseconds & UINT32_MASK
        self.count += 1
        notified = self.notification_slot != -1
        self.notifications_posted += int(notified)
        return MembershipResult(True, notified)

    def remove(self, connection: ManagedConnection | None) -> MembershipResult:
        if connection is None or connection.owner is not self:
            return MembershipResult(False)

        if connection.previous is None:
            self.head = connection.next
        else:
            connection.previous.next = connection.next
        if connection.next is None:
            self.tail = connection.previous
        else:
            connection.next.previous = connection.previous

        self.count -= 1
        connection.owner = None
        connection.previous = None
        connection.next = None
        notified = self.notification_slot != -1
        self.notifications_posted += int(notified)
        return MembershipResult(True, notified)

    def connections(self) -> tuple[ManagedConnection, ...]:
        current = self.head
        result: list[ManagedConnection] = []
        while current is not None:
            result.append(current)
            current = current.next
        return tuple(result)
