// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A0D3 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_5885a0d3() {
    __asm {
        // 0x5885A0D3: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x5885A0D5: push 0x588ed1c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xD1
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x5885A0DA: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x86
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885A0DF: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A0E2: mov dword ptr [ebp - 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xDC
        // 0x5885A0E5: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885A0E7: jne 0x5885a101
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885A0E9: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A0EE: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A0F4: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x6E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A0F9: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885A0FC: jmp 0x5885a1ce
        __asm _emit 0xE9
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A101: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5885A103: mov dword ptr [ebp - 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xE0
        // 0x5885A106: push esi
        __asm _emit 0x56
        // 0x5885A107: call 0x58859d02
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A10C: pop ecx
        __asm _emit 0x59
        // 0x5885A10D: mov dword ptr [ebp - 4], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xFC
        // 0x5885A110: mov dword ptr [ebp - 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5885A113: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5885A116: nop
        __asm _emit 0x90
        // 0x5885A117: shr eax, 0xc
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0C
        // 0x5885A11A: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885A11C: jne 0x5885a185
        __asm _emit 0x75
        __asm _emit 0x67
        // 0x5885A11E: push esi
        __asm _emit 0x56
        // 0x5885A11F: call 0x5886cc56
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x2B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A124: pop ecx
        __asm _emit 0x59
        // 0x5885A125: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885A128: je 0x5885a14d
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5885A12A: cmp eax, -2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFE
        // 0x5885A12D: je 0x5885a14d
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5885A12F: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5885A131: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5885A134: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5885A136: and ebx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x3F
        // 0x5885A139: imul ecx, ebx, 0x38
        __asm _emit 0x6B
        __asm _emit 0xCB
        __asm _emit 0x38
        // 0x5885A13C: add ecx, dword ptr [edx*4 + 0x589699b0]
        __asm _emit 0x03
        __asm _emit 0x0C
        __asm _emit 0x95
        __asm _emit 0xB0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5885A143: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE4
        // 0x5885A146: mov ecx, 0x58907530
        __asm _emit 0xB9
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885A14B: jmp 0x5885a15f
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5885A14D: mov ecx, 0x58907530
        __asm _emit 0xB9
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885A152: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE4
        // 0x5885A155: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5885A157: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5885A15A: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5885A15C: and ebx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x3F
        // 0x5885A15F: mov esi, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5885A162: cmp byte ptr [esi + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x5885A166: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A169: jne 0x5885a188
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5885A16B: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885A16E: je 0x5885a17f
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5885A170: cmp eax, -2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFE
        // 0x5885A173: je 0x5885a17f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885A175: imul ecx, ebx, 0x38
        __asm _emit 0x6B
        __asm _emit 0xCB
        __asm _emit 0x38
        // 0x5885A178: add ecx, dword ptr [edx*4 + 0x589699b0]
        __asm _emit 0x03
        __asm _emit 0x0C
        __asm _emit 0x95
        __asm _emit 0xB0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5885A17F: test byte ptr [ecx + 0x2d], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x2D
        __asm _emit 0x01
        // 0x5885A183: jne 0x5885a188
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x5885A185: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5885A187: inc edi
        __asm _emit 0x47
        // 0x5885A188: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885A18A: jne 0x5885a1b4
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x5885A18C: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A191: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A197: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x6E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A19C: push -2
        __asm _emit 0x6A
        __asm _emit 0xFE
        // 0x5885A19E: lea eax, [ebp - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885A1A1: push eax
        __asm _emit 0x50
        // 0x5885A1A2: push 0x58906040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885A1A7: call 0x58850750
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x65
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A1AC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885A1AF: jmp 0x5885a0f9
        __asm _emit 0xE9
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A1B4: push esi
        __asm _emit 0x56
        // 0x5885A1B5: call 0x5885a08c
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A1BA: pop ecx
        __asm _emit 0x59
        // 0x5885A1BB: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885A1BD: mov dword ptr [ebp - 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xE0
        // 0x5885A1C0: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A1C7: call 0x5885a1e4
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A1CC: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5885A1CE: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x5885A1D1: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A1D8: pop ecx
        __asm _emit 0x59
        // 0x5885A1D9: pop edi
        __asm _emit 0x5F
        // 0x5885A1DA: pop esi
        __asm _emit 0x5E
        // 0x5885A1DB: pop ebx
        __asm _emit 0x5B
        // 0x5885A1DC: leave
        __asm _emit 0xC9
        // 0x5885A1DD: ret
        __asm _emit 0xC3
    }
}
