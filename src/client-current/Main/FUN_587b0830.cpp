// FUN_587B0830: multiply two record-derived child scalars by 10 and store them.
// Verified FUN_587A6220/FUN_588D84D0 callers pass sign-extended record shorts.
// Field names and units remain unresolved; the mapped instruction stream is exact.
// See docs/current-main-child-record-scalar-update.md.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B0830 .. +0x21 bytes.
// Source symbol alias: FUN_587b0830.
extern "C" __declspec(naked) void FUN_587b0830() {
    __asm {
        // 0x587B0830: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B0834: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x587B0837: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587B0839: mov dword ptr [ecx + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B083F: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B0843: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x587B0846: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587B0848: mov dword ptr [ecx + 0xbc], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B084E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
