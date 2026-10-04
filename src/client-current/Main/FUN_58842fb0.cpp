// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58842FB0 .. +0x45 bytes.
// Source symbol alias: FUN_58842fb0.
extern "C" __declspec(naked) void FUN_58842fb0() {
    __asm {
        // 0x58842FB0: push esi
        __asm _emit 0x56
        // 0x58842FB1: mov esi, dword ptr [ecx + 0x130]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842FB7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58842FB9: jne 0x58842fc1
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58842FBB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58842FBD: pop esi
        __asm _emit 0x5E
        // 0x58842FBE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58842FC1: push ebx
        __asm _emit 0x53
        // 0x58842FC2: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58842FC8: push edi
        __asm _emit 0x57
        // 0x58842FC9: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58842FCD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58842FD0: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58842FD3: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58842FD6: push eax
        __asm _emit 0x50
        // 0x58842FD7: push edi
        __asm _emit 0x57
        // 0x58842FD8: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58842FDA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58842FDC: je 0x58842fed
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58842FDE: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x58842FE1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58842FE3: jne 0x58842fd0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58842FE5: pop edi
        __asm _emit 0x5F
        // 0x58842FE6: pop ebx
        __asm _emit 0x5B
        // 0x58842FE7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58842FE9: pop esi
        __asm _emit 0x5E
        // 0x58842FEA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58842FED: pop edi
        __asm _emit 0x5F
        // 0x58842FEE: pop ebx
        __asm _emit 0x5B
        // 0x58842FEF: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58842FF1: pop esi
        __asm _emit 0x5E
        // 0x58842FF2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
