// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E98A0 .. +0xD8 bytes.
// Source symbol alias: FUN_587e98a0.
extern "C" __declspec(naked) void FUN_587e98a0() {
    __asm {
        // 0x587E98A0: push ebp
        __asm _emit 0x55
        // 0x587E98A1: push esi
        __asm _emit 0x56
        // 0x587E98A2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E98A4: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587E98A6: push edi
        __asm _emit 0x57
        // 0x587E98A7: cmp dword ptr [esi + 0x218c4], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xC4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E98AD: jne 0x587e98b9
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587E98AF: cmp word ptr [esi + 0x105f0], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x587E98B7: jne 0x587e98c4
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587E98B9: mov ecx, dword ptr [esi + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E98BF: call 0x58788620
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xED
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587E98C4: mov edi, dword ptr [esi + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E98CA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E98CC: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x93
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E98D1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E98D3: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x93
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E98D8: cmp dword ptr [esi + 0x218a4], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xA4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E98DE: je 0x587e993c
        __asm _emit 0x74
        __asm _emit 0x5C
        // 0x587E98E0: push ebx
        __asm _emit 0x53
        // 0x587E98E1: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587E98E3: cmp dword ptr [esi + 0x2179c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x9C
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E98E9: jle 0x587e9926
        __asm _emit 0x7E
        __asm _emit 0x3B
        // 0x587E98EB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587E98ED: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587E98F0: mov eax, dword ptr [esi + 0x218a4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E98F6: mov eax, dword ptr [eax + edi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E98FD: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587E98FF: je 0x587e9917
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587E9901: push eax
        __asm _emit 0x50
        // 0x587E9902: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x33
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E9907: mov ecx, dword ptr [esi + 0x218a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E990D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E9910: mov dword ptr [ecx + edi + 0xcc], ebp
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x39
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E9917: inc ebx
        __asm _emit 0x43
        // 0x587E9918: add edi, 0xd4
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E991E: cmp ebx, dword ptr [esi + 0x2179c]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9924: jl 0x587e98f0
        __asm _emit 0x7C
        __asm _emit 0xCA
        // 0x587E9926: mov edx, dword ptr [esi + 0x218a4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E992C: push edx
        __asm _emit 0x52
        // 0x587E992D: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x33
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E9932: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E9935: mov dword ptr [esi + 0x218a4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xA4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E993B: pop ebx
        __asm _emit 0x5B
        // 0x587E993C: mov eax, dword ptr [esi + 0x218a8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9942: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x587E9944: je 0x587e9955
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587E9946: push eax
        __asm _emit 0x50
        // 0x587E9947: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x32
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587E994C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587E994F: mov dword ptr [esi + 0x218a8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xA8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E9955: mov eax, dword ptr [esi + 0x104f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E995B: mov ecx, dword ptr [eax + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x3C
        // 0x587E995E: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x587E9960: je 0x587e9982
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587E9962: mov edx, dword ptr [esi + 0x104f8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E9968: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x587E996B: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E996D: cmp edi, dword ptr [edx + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7A
        __asm _emit 0x3C
        // 0x587E9970: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587E9972: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E9974: je 0x587e9980
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587E9976: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
    }
}
