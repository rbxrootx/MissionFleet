# Current Main source-built image

`tools/build_source_image.py` rebuilds the installed `Main.dll` `.text`
section from the checked-in sources:

1. Compile every catalog source with its recorded compiler and flags.
2. Extract each function or segment from the COFF object.
3. Resolve COFF and catalog relocations against the original RVAs.
4. Place the bytes at the recorded addresses in the template `.text`.
5. Write a new PE.

Result for Main.dll:

- 8,474 catalog functions / 9,214 segments
- 8,441 functions written into `.text`; 33 small functions live in `.vmp1`
- 2,354,390 `.text` bytes from source
- 0 byte mismatches
- output SHA-256 equals the captured image:
  `4e928f0077ed3ff3877ec12ee9a35811b415afb3ce43a6377f21ad17fe9181b8`

The build is reproducible with:

```powershell
python tools/build_source_image.py --component main --workers 12
```

It writes `build/rebuild/Main.rebuilt.dll` and a mismatch report.

## Exact overrides

Most sources compile directly to the original bytes. Forty segments needed the
assembler/linker to preserve exact encodings or resolve calls. Their exact
instruction streams are checked in under
`src/client-current/Main/overrides/<address>.cpp`. The builder prefers an
override when present. With these overrides the `.text` build has zero byte
mismatches.

## Limits

- The `.text` section is source-built. Headers, `.rdata`, `.data`, `.rsrc`,
  imports, relocations, and the VMProtect `.vmp0`/`.vmp1` sections still come
  from the template image.
- The 33 `.vmp1` functions remain template-backed.
- This is a source-built code section, not yet a fully reconstructed PE or a
  playable client.
- A runtime load proof used a temporary entrypoint stub; the real Main CRT/VM
  initialization is still open.
