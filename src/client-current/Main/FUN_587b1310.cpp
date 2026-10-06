// Child-context pointer propagation helper called by verified FUN_587A6220
// and FUN_588D84D0. It stores the input pointer at receiver +0x88, then, if
// receiver +0x168 is nonnull, copies input +0x6060 to child +0xA4. The field
// meanings and input-validity contract are unresolved; see
// docs/current-main-child-context-propagation.md.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B1310 .. +0x23 bytes.
// Source symbol alias: FUN_587b1310.
extern "C" __declspec(naked) void FUN_587b1310() {
    __asm {
        // 0x587B1310: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B1314: mov dword ptr [ecx + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B131A: mov ecx, dword ptr [ecx + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1320: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B1322: je 0x587b1330
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587B1324: mov eax, dword ptr [eax + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B132A: mov dword ptr [ecx + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1330: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
