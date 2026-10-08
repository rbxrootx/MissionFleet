// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 119 bytes in 1 exact ranges.
// Source symbol alias: FUN_587726a0.

// Ghidra body range 0x587726A0..0x58772717; 119 mapped bytes.
extern "C" __declspec(naked) void FUN_587726a0_segment_00() {
    __asm {
        // 0x587726A0: push ecx
        __asm _emit 0x51
        // 0x587726A1: push ebx
        __asm _emit 0x53
        // 0x587726A2: push esi
        __asm _emit 0x56
        // 0x587726A3: push edi
        __asm _emit 0x57
        // 0x587726A4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587726A6: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587726AB: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587726AD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587726AF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587726B1: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587726B6: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x587726B8: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587726BD: push eax
        __asm _emit 0x50
        // 0x587726BE: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587726C4: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587726C6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587726C8: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587726CA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587726CC: push esi
        __asm _emit 0x56
        // 0x587726CD: call dword ptr [0x5898c164]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587726D3: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587726D7: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587726DD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587726DF: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587726E3: push eax
        __asm _emit 0x50
        // 0x587726E4: push edi
        __asm _emit 0x57
        // 0x587726E5: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587726E7: push eax
        __asm _emit 0x50
        // 0x587726E8: push edi
        __asm _emit 0x57
        // 0x587726E9: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587726EF: push esi
        __asm _emit 0x56
        // 0x587726F0: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587726F2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587726F4: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587726F8: push ecx
        __asm _emit 0x51
        // 0x587726F9: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587726FE: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58772700: push eax
        __asm _emit 0x50
        // 0x58772701: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772706: push esi
        __asm _emit 0x56
        // 0x58772707: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58772709: push esi
        __asm _emit 0x56
        // 0x5877270A: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772710: pop edi
        __asm _emit 0x5F
        // 0x58772711: pop esi
        __asm _emit 0x5E
        // 0x58772712: pop ebx
        __asm _emit 0x5B
        // 0x58772713: pop ecx
        __asm _emit 0x59
        // 0x58772714: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
