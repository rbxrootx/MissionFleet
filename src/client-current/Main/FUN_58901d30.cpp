// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901D30 .. +0xAF bytes.
// Source symbol alias: FUN_58901d30.
extern "C" __declspec(naked) void FUN_58901d30() {
    __asm {
        // 0x58901D30: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58901D33: push ebx
        __asm _emit 0x53
        // 0x58901D34: push ebp
        __asm _emit 0x55
        // 0x58901D35: push esi
        __asm _emit 0x56
        // 0x58901D36: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58901D38: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58901D3B: push edi
        __asm _emit 0x57
        // 0x58901D3C: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58901D3F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58901D41: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x58901D43: test ecx, 0xfffffff8
        __asm _emit 0xF7
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901D49: jne 0x58901d4f
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58901D4B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58901D4D: jmp 0x58901d74
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x58901D4F: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58901D51: jbe 0x58901d58
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58901D53: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xAF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901D58: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58901D5C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58901D5E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58901D60: je 0x58901d66
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58901D62: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58901D64: je 0x58901d6b
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58901D66: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xAF
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901D6B: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58901D6F: sub ebx, edi
        __asm _emit 0x2B
        __asm _emit 0xDF
        // 0x58901D71: sar ebx, 3
        __asm _emit 0xC1
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x58901D74: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58901D78: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58901D7C: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58901D80: push edx
        __asm _emit 0x52
        // 0x58901D81: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58901D83: push eax
        __asm _emit 0x50
        // 0x58901D84: push ecx
        __asm _emit 0x51
        // 0x58901D85: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58901D87: call 0x58901ae0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901D8C: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58901D8F: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58901D92: jbe 0x58901d99
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58901D94: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xAE
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901D99: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58901D9B: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x58901D9D: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58901DA1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58901DA3: jne 0x58901dbc
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58901DA5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xAE
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901DAA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58901DAC: lea edi, [edi + ebx*8]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0xDF
        // 0x58901DAF: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58901DB2: ja 0x58901dc7
        __asm _emit 0x77
        __asm _emit 0x13
        // 0x58901DB4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58901DB6: je 0x58901dc0
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58901DB8: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58901DBA: jmp 0x58901dc2
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58901DBC: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58901DBE: jmp 0x58901dac
        __asm _emit 0xEB
        __asm _emit 0xEC
        // 0x58901DC0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58901DC2: cmp edi, dword ptr [esi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58901DC5: jae 0x58901dcc
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58901DC7: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xAE
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901DCC: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58901DD0: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x58901DD3: pop edi
        __asm _emit 0x5F
        // 0x58901DD4: pop esi
        __asm _emit 0x5E
        // 0x58901DD5: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x58901DD7: pop ebp
        __asm _emit 0x5D
        // 0x58901DD8: pop ebx
        __asm _emit 0x5B
        // 0x58901DD9: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58901DDC: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
