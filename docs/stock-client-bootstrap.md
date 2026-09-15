# NavyFIELD 2.062 client bootstrap

The supplied historical `ITNTL.dll` has SHA-256
`2e7b2363b348198282511a1851b542d9ca087c499b82aa847c201b7af094f037`.
At file offset `0x182370` it contains the only occurrence of
`shgame3.nf2.com.cn`. Code at virtual address `0x1002c74b` copies this hostname
into the selected-server record. The same routine pushes immediate `0x1f41`,
stores word `0x1f41`, passes it through the imported host/network byte-order
conversion, and invokes the connection method. The client-facing port is
therefore decimal **8001**.

`tools/patch_stock_client_endpoint.py` validates the complete DLL hash, the
unique hostname, and both port instructions before writing an equal-size copy
whose hostname defaults to `127.0.0.1`. It deliberately preserves port 8001.
Run `python -m emulator.login_server --stock-client` to bind the emulator to
that port.

This proves where the supplied client dials and provides a reproducible local
redirect. It does not yet prove that the subsequent ITNTL wire protocol is the
same as the recovered login-server transport. The capture produced by the first
connection is the evidence required for that next subsystem.
