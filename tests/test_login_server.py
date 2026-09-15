import asyncio
import unittest

from emulator.login_server import create_server
from emulator.protocol import Frame, FrameDecoder, HEADER_SIZE


class MemoryLog:
    def __init__(self):
        self.events = []

    def write(self, event):
        self.events.append(event)


class LoginServerIntegrationTests(unittest.IsolatedAsyncioTestCase):
    async def asyncSetUp(self):
        self.log = MemoryLog()
        self.server = await create_server("127.0.0.1", 0, self.log)
        self.host, self.port = self.server.sockets[0].getsockname()[:2]
        await self.server.start_serving()

    async def asyncTearDown(self):
        self.server.close()
        await self.server.wait_closed()

    async def test_tcp_probe_gets_verified_reply(self):
        reader, writer = await asyncio.open_connection(self.host, self.port)
        writer.write(Frame(0x8001000F, 0, 0).encode())
        await writer.drain()

        reply_bytes = await asyncio.wait_for(reader.readexactly(HEADER_SIZE), 1)
        self.assertEqual(
            FrameDecoder().feed(reply_bytes),
            [Frame(0x8002000F, 0, 0)],
        )

        writer.close()
        await writer.wait_closed()
        await asyncio.sleep(0)
        self.assertIn("sent_frame", [event["event"] for event in self.log.events])

    async def test_bad_magic_frame_is_consumed_before_following_probe(self):
        reader, writer = await asyncio.open_connection(self.host, self.port)
        invalid = bytearray(Frame(1, 2, 3, b"bad").encode())
        invalid[0] ^= 1
        writer.write(bytes(invalid) + Frame(0x8001000F, 0, 0).encode())
        await writer.drain()
        reply_bytes = await asyncio.wait_for(reader.readexactly(HEADER_SIZE), 1)
        self.assertEqual(
            FrameDecoder().feed(reply_bytes),
            [Frame(0x8002000F, 0, 0)],
        )
        writer.close()
        await writer.wait_closed()
        await asyncio.sleep(0)
        self.assertIn("invalid_magic", [event["event"] for event in self.log.events])


if __name__ == "__main__":
    unittest.main()
