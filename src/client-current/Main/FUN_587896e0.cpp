// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587896E0 .. +0x28 bytes.
// Source symbol alias: FUN_587896e0.
extern "C" __declspec(naked) void FUN_587896e0() {
    __asm {
        // 0x587896E0: push esi
        __asm _emit 0x56
        // 0x587896E1: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x587896E4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587896E6: je 0x58789704
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587896E8: push ebx
        __asm _emit 0x53
        // 0x587896E9: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587896ED: push edi
        __asm _emit 0x57
        // 0x587896EE: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587896F2: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587896F5: push edi
        __asm _emit 0x57
        // 0x587896F6: push ebx
        __asm _emit 0x53
        // 0x587896F7: call 0x5874a7d0
        __asm _emit 0xE8
        __asm _emit 0xD4
        __asm _emit 0x10
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587896FC: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587896FE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58789700: jne 0x587896f2
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58789702: pop edi
        __asm _emit 0x5F
        // 0x58789703: pop ebx
        __asm _emit 0x5B
        // 0x58789704: pop esi
        __asm _emit 0x5E
        // 0x58789705: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
