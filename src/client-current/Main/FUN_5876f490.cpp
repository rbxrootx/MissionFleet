// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 194 bytes in 1 exact ranges.
// Source symbol alias: FUN_5876f490.

// Ghidra body range 0x5876F490..0x5876F552; 194 mapped bytes.
extern "C" __declspec(naked) void FUN_5876f490_segment_00() {
    __asm {
        // 0x5876F490: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x5876F493: push ebx
        __asm _emit 0x53
        // 0x5876F494: push esi
        __asm _emit 0x56
        // 0x5876F495: push edi
        __asm _emit 0x57
        // 0x5876F496: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5876F498: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876F49A: je 0x5876f4ad
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5876F49C: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x5876F49F: movzx esi, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x5876F4A3: mov eax, 0x168
        __asm _emit 0xB8
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F4A8: cdq
        __asm _emit 0x99
        // 0x5876F4A9: idiv esi
        __asm _emit 0xF7
        __asm _emit 0xFE
        // 0x5876F4AB: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5876F4AD: lea esi, [ecx + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x5C
        // 0x5876F4B0: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F4B5: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5876F4B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876F4BA: je 0x5876f542
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F4C0: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x5876F4C3: je 0x5876f542
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x5876F4C5: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F4CB: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5876F4CE: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x5876F4D1: push edx
        __asm _emit 0x52
        // 0x5876F4D2: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876F4D5: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5876F4D8: push ecx
        __asm _emit 0x51
        // 0x5876F4D9: push edx
        __asm _emit 0x52
        // 0x5876F4DA: push eax
        __asm _emit 0x50
        // 0x5876F4DB: call 0x5876c010
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xCB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876F4E0: mov ecx, 0x10e
        __asm _emit 0xB9
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F4E5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5876F4E8: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5876F4EA: jns 0x5876f4f2
        __asm _emit 0x79
        __asm _emit 0x06
        // 0x5876F4EC: add ecx, 0x168
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F4F2: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5876F4F4: cdq
        __asm _emit 0x99
        // 0x5876F4F5: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5876F4F7: cmp dword ptr [0x589ba84c], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x4C
        __asm _emit 0xA8
        __asm _emit 0x9B
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5876F4FE: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5876F501: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5876F504: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5876F506: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5876F509: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5876F50B: mov eax, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x28
        // 0x5876F50E: je 0x5876f526
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5876F510: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x5876F513: cmp eax, 0xfa
        __asm _emit 0x3D
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F518: jle 0x5876f53a
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5876F51A: mov dword ptr [0x589ba84c], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x4C
        __asm _emit 0xA8
        __asm _emit 0x9B
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F524: jmp 0x5876f542
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x5876F526: add eax, -0xa
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF6
        // 0x5876F529: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x64
        // 0x5876F52C: jge 0x5876f53a
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x5876F52E: mov dword ptr [0x589ba84c], 1
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x4C
        __asm _emit 0xA8
        __asm _emit 0x9B
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F538: jmp 0x5876f542
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5876F53A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5876F53C: push eax
        __asm _emit 0x50
        // 0x5876F53D: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x37
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876F542: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5876F545: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5876F548: jne 0x5876f4b5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x67
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876F54E: pop edi
        __asm _emit 0x5F
        // 0x5876F54F: pop esi
        __asm _emit 0x5E
        // 0x5876F550: pop ebx
        __asm _emit 0x5B
        // 0x5876F551: ret
        __asm _emit 0xC3
    }
}
