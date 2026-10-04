// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901A80 .. +0x29 bytes.
// Source symbol alias: FUN_58901a80.
extern "C" __declspec(naked) void FUN_58901a80() {
    __asm {
        // 0x58901A80: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58901A84: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58901A86: jbe 0x58901aa8
        __asm _emit 0x76
        __asm _emit 0x20
        // 0x58901A88: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58901A8C: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58901A90: push esi
        __asm _emit 0x56
        // 0x58901A91: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58901A93: je 0x58901a9f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58901A95: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x58901A97: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58901A99: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x58901A9C: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x58901A9F: dec ecx
        __asm _emit 0x49
        // 0x58901AA0: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x58901AA3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58901AA5: ja 0x58901a91
        __asm _emit 0x77
        __asm _emit 0xEA
        // 0x58901AA7: pop esi
        __asm _emit 0x5E
        // 0x58901AA8: ret
        __asm _emit 0xC3
    }
}
