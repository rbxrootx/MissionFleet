// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588338E0 .. +0x45 bytes.
// Source symbol alias: FUN_588338e0.
extern "C" __declspec(naked) void FUN_588338e0() {
    __asm {
        // 0x588338E0: push esi
        __asm _emit 0x56
        // 0x588338E1: push edi
        __asm _emit 0x57
        // 0x588338E2: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588338E6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588338E8: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588338EB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588338ED: je 0x58833909
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588338EF: lea eax, [edi + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x2D
        // 0x588338F2: push eax
        __asm _emit 0x50
        // 0x588338F3: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588338F8: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588338FB: add edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x0C
        // 0x588338FE: push edi
        __asm _emit 0x57
        // 0x588338FF: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833904: pop edi
        __asm _emit 0x5F
        // 0x58833905: pop esi
        __asm _emit 0x5E
        // 0x58833906: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58833909: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883390E: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833913: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58833916: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883391B: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833920: pop edi
        __asm _emit 0x5F
        // 0x58833921: pop esi
        __asm _emit 0x5E
        // 0x58833922: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
