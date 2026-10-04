// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B7D90 .. +0xDC bytes.
// Source symbol alias: FUN_587b7d90.
extern "C" __declspec(naked) void FUN_587b7d90() {
    __asm {
        // 0x587B7D90: sub esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7D96: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587B7D9B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587B7D9D: mov dword ptr [esp + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7DA4: push ebx
        __asm _emit 0x53
        // 0x587B7DA5: push esi
        __asm _emit 0x56
        // 0x587B7DA6: push 0x48
        __asm _emit 0x6A
        __asm _emit 0x48
        // 0x587B7DA8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B7DAC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7DAE: push eax
        __asm _emit 0x50
        // 0x587B7DAF: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587B7DB1: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x4E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B7DB6: mov esi, dword ptr [esp + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7DBD: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B7DC0: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B7DC2: je 0x587b7e37
        __asm _emit 0x74
        __asm _emit 0x73
        // 0x587B7DC4: lea eax, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B7DC8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B7DCA: mov edx, 0x18
        __asm _emit 0xBA
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7DCF: sub esi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF1
        // 0x587B7DD1: lea ecx, [edx + 0x7fffffe6]
        __asm _emit 0x8D
        __asm _emit 0x8A
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587B7DD7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B7DD9: je 0x587b7dec
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587B7DDB: mov cl, byte ptr [esi + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x587B7DDE: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587B7DE0: je 0x587b7dec
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587B7DE2: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x587B7DE4: inc eax
        __asm _emit 0x40
        // 0x587B7DE5: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587B7DE8: jne 0x587b7dd1
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587B7DEA: jmp 0x587b7df0
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587B7DEC: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587B7DEE: jne 0x587b7df1
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587B7DF0: dec eax
        __asm _emit 0x48
        // 0x587B7DF1: push edi
        __asm _emit 0x57
        // 0x587B7DF2: push 0x49
        __asm _emit 0x6A
        __asm _emit 0x49
        // 0x587B7DF4: lea edx, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587B7DF8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7DFA: push edx
        __asm _emit 0x52
        // 0x587B7DFB: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7DFE: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x4E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B7E03: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B7E06: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7E08: push 0x48
        __asm _emit 0x6A
        __asm _emit 0x48
        // 0x587B7E0A: mov ecx, 0x12
        __asm _emit 0xB9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7E0F: lea esi, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B7E13: lea edi, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587B7E17: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587B7E19: mov ecx, dword ptr [esp + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7E20: lea eax, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587B7E24: push eax
        __asm _emit 0x50
        // 0x587B7E25: push ecx
        __asm _emit 0x51
        // 0x587B7E26: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7E28: push 0x8001b111
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B7E2D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587B7E2F: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x8E
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B7E34: pop edi
        __asm _emit 0x5F
        // 0x587B7E35: jmp 0x587b7e53
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x587B7E37: mov edx, dword ptr [esp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7E3E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7E40: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7E42: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7E44: push edx
        __asm _emit 0x52
        // 0x587B7E45: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B7E47: push 0x8001b111
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B7E4C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587B7E4E: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x8E
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B7E53: mov ecx, dword ptr [esp + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7E5A: pop esi
        __asm _emit 0x5E
        // 0x587B7E5B: pop ebx
        __asm _emit 0x5B
        // 0x587B7E5C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587B7E5E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x4D
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B7E63: add esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7E69: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
