// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58865B3B .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_58865b3b() {
    __asm {
        // 0x58865B3B: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58865B3D: push ebp
        __asm _emit 0x55
        // 0x58865B3E: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58865B40: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x58865B43: push ebx
        __asm _emit 0x53
        // 0x58865B44: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58865B46: push edi
        __asm _emit 0x57
        // 0x58865B47: mov dword ptr [ebp - 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xEC
        // 0x58865B4A: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58865B4C: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x58865B4E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58865B50: jne 0x58865b5a
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58865B52: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58865B55: jmp 0x58865c11
        __asm _emit 0xE9
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58865B5A: mov edx, dword ptr [0x58906040]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58865B60: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58865B62: push esi
        __asm _emit 0x56
        // 0x58865B63: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x58865B65: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58865B68: mov edi, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x58865B6B: xor esi, edx
        __asm _emit 0x33
        __asm _emit 0xF2
        // 0x58865B6D: xor edi, edx
        __asm _emit 0x33
        __asm _emit 0xFA
        // 0x58865B6F: ror esi, cl
        __asm _emit 0xD3
        __asm _emit 0xCE
        // 0x58865B71: ror edi, cl
        __asm _emit 0xD3
        __asm _emit 0xCF
        // 0x58865B73: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58865B75: je 0x58865c0e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58865B7B: cmp esi, -1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58865B7E: je 0x58865c0e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58865B84: mov dword ptr [ebp - 4], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xFC
        // 0x58865B87: mov dword ptr [ebp - 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0xF4
        // 0x58865B8A: mov dword ptr [ebp - 8], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x58865B8D: sub edi, 4
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x04
        // 0x58865B90: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x58865B92: jb 0x58865be8
        __asm _emit 0x72
        __asm _emit 0x54
        // 0x58865B94: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58865B96: cmp eax, dword ptr [ebp - 4]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0xFC
        // 0x58865B99: je 0x58865b8d
        __asm _emit 0x74
        __asm _emit 0xF2
        // 0x58865B9B: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58865B9D: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xFC
        // 0x58865BA0: ror eax, cl
        __asm _emit 0xD3
        __asm _emit 0xC8
        // 0x58865BA2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58865BA4: mov dword ptr [edi], edx
        __asm _emit 0x89
        __asm _emit 0x17
        // 0x58865BA6: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x58865BA9: call dword ptr [0x5889459c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58865BAF: call dword ptr [ebp - 0x10]
        __asm _emit 0xFF
        __asm _emit 0x55
        __asm _emit 0xF0
        // 0x58865BB2: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58865BB4: mov edx, dword ptr [0x58906040]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58865BBA: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58865BBC: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58865BBF: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58865BC1: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x58865BC3: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58865BC6: xor ebx, edx
        __asm _emit 0x33
        __asm _emit 0xDA
        // 0x58865BC8: ror ebx, cl
        __asm _emit 0xD3
        __asm _emit 0xCB
        // 0x58865BCA: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x58865BCC: ror eax, cl
        __asm _emit 0xD3
        __asm _emit 0xC8
        // 0x58865BCE: cmp ebx, dword ptr [ebp - 8]
        __asm _emit 0x3B
        __asm _emit 0x5D
        __asm _emit 0xF8
        // 0x58865BD1: mov dword ptr [ebp - 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xF0
        // 0x58865BD4: mov ebx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0xEC
        // 0x58865BD7: jne 0x58865bde
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58865BD9: cmp eax, dword ptr [ebp - 0xc]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58865BDC: je 0x58865b8d
        __asm _emit 0x74
        __asm _emit 0xAF
        // 0x58865BDE: mov esi, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58865BE1: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58865BE3: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58865BE6: jmp 0x58865b8a
        __asm _emit 0xEB
        __asm _emit 0xA2
        // 0x58865BE8: cmp esi, -1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58865BEB: je 0x58865bfa
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58865BED: push esi
        __asm _emit 0x56
        // 0x58865BEE: call 0x5886cc10
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58865BF3: mov edx, dword ptr [0x58906040]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58865BF9: pop ecx
        __asm _emit 0x59
        // 0x58865BFA: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58865BFC: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58865BFE: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58865C00: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58865C02: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58865C04: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58865C07: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58865C09: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58865C0B: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58865C0E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58865C10: pop esi
        __asm _emit 0x5E
        // 0x58865C11: pop edi
        __asm _emit 0x5F
        // 0x58865C12: pop ebx
        __asm _emit 0x5B
        // 0x58865C13: leave
        __asm _emit 0xC9
        // 0x58865C14: ret
        __asm _emit 0xC3
    }
}
