// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 183 bytes in 2 exact ranges.
// Source symbol alias: FUN_58796c80.

// Ghidra body range 0x58796C80..0x58796D1C; 156 mapped bytes.
extern "C" __declspec(naked) void FUN_58796c80_segment_00() {
    __asm {
        // 0x58796C80: sub esp, 0x8c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796C86: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58796C8B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58796C8D: mov dword ptr [esp + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796C94: mov eax, dword ptr [esp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796C9B: push esi
        __asm _emit 0x56
        // 0x58796C9C: push edi
        __asm _emit 0x57
        // 0x58796C9D: push eax
        __asm _emit 0x50
        // 0x58796C9E: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58796CA2: push 0x58997fe0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x7F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796CA7: push eax
        __asm _emit 0x50
        // 0x58796CA8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58796CAA: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58796CB0: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58796CB3: push edi
        __asm _emit 0x57
        // 0x58796CB4: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796CB9: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58796CBB: push edi
        __asm _emit 0x57
        // 0x58796CBC: push edi
        __asm _emit 0x57
        // 0x58796CBD: push 0x80000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58796CC2: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58796CC6: push ecx
        __asm _emit 0x51
        // 0x58796CC7: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58796CCD: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58796CCF: cmp esi, -1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58796CD2: je 0x58796d24
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x58796CD4: push ebx
        __asm _emit 0x53
        // 0x58796CD5: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58796CD9: push edx
        __asm _emit 0x52
        // 0x58796CDA: push esi
        __asm _emit 0x56
        // 0x58796CDB: call dword ptr [0x5898c18c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58796CE1: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58796CE3: push edi
        __asm _emit 0x57
        // 0x58796CE4: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xA8
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x58796CE9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796CEC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58796CEE: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58796CF0: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58796CF4: push eax
        __asm _emit 0x50
        // 0x58796CF5: push edi
        __asm _emit 0x57
        // 0x58796CF6: push ebx
        __asm _emit 0x53
        // 0x58796CF7: push esi
        __asm _emit 0x56
        // 0x58796CF8: call dword ptr [0x5898c190]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58796CFE: push esi
        __asm _emit 0x56
        // 0x58796CFF: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58796D05: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58796D0B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58796D0D: push edi
        __asm _emit 0x57
        // 0x58796D0E: push ebx
        __asm _emit 0x53
        // 0x58796D0F: call 0x5875ba80
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x4D
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58796D14: push ebx
        __asm _emit 0x53
        // 0x58796D15: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58796D17: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x5F
        __asm _emit 0x1E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58796D24..0x58796D3F; 27 mapped bytes.
extern "C" __declspec(naked) void FUN_58796c80_segment_01() {
    __asm {
        // 0x58796D24: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58796D26: mov ecx, dword ptr [esp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796D2D: pop edi
        __asm _emit 0x5F
        // 0x58796D2E: pop esi
        __asm _emit 0x5E
        // 0x58796D2F: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58796D31: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x5E
        __asm _emit 0x1E
        __asm _emit 0x00
        // 0x58796D36: add esp, 0x8c
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796D3C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
