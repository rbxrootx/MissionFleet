// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5896C9A0 .. +0x13A bytes.
extern "C" __declspec(naked) void FUN_5896c9a0() {
    __asm {
        // 0x5896C9A0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5896C9A2: push 0x5897e8ab
        __asm _emit 0x68
        __asm _emit 0xAB
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5896C9A7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C9AD: push eax
        __asm _emit 0x50
        // 0x5896C9AE: push esi
        __asm _emit 0x56
        // 0x5896C9AF: push edi
        __asm _emit 0x57
        // 0x5896C9B0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5896C9B5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5896C9B7: push eax
        __asm _emit 0x50
        // 0x5896C9B8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5896C9BC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C9C2: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5896C9C6: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5896C9C8: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x5896C9CA: je 0x5896cac6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C9D0: cmp dword ptr [0x58a28534], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896C9D6: jne 0x5896ca6f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C9DC: cmp dword ptr [esp + 0x24], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5896C9E1: jne 0x5896ca30
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x5896C9E3: push edi
        __asm _emit 0x57
        // 0x5896C9E4: push 0x58a28534
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896C9E9: push edi
        __asm _emit 0x57
        // 0x5896C9EA: call 0x5897daba
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5896C9EF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896C9F1: jge 0x5896c9fb
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5896C9F3: mov dword ptr [0x58a28534], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896C9F9: jmp 0x5896ca30
        __asm _emit 0xEB
        __asm _emit 0x35
        // 0x5896C9FB: mov eax, dword ptr [0x58a28534]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896CA00: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5896CA02: je 0x5896ca30
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5896CA04: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5896CA06: mov edx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x5896CA09: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5896CA0B: push esi
        __asm _emit 0x56
        // 0x5896CA0C: push eax
        __asm _emit 0x50
        // 0x5896CA0D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5896CA0F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896CA11: jge 0x5896ca28
        __asm _emit 0x7D
        __asm _emit 0x15
        // 0x5896CA13: mov eax, dword ptr [0x58a28534]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896CA18: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5896CA1A: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5896CA1D: push eax
        __asm _emit 0x50
        // 0x5896CA1E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5896CA20: mov dword ptr [0x58a28534], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896CA26: jmp 0x5896ca30
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5896CA28: cmp dword ptr [0x58a28534], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896CA2E: jne 0x5896ca6f
        __asm _emit 0x75
        __asm _emit 0x3F
        // 0x5896CA30: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5896CA34: push edi
        __asm _emit 0x57
        // 0x5896CA35: push 0x58a28538
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896CA3A: push eax
        __asm _emit 0x50
        // 0x5896CA3B: call 0x5897dab4
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5896CA40: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896CA42: jl 0x5896ca69
        __asm _emit 0x7C
        __asm _emit 0x25
        // 0x5896CA44: mov eax, dword ptr [0x58a28538]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896CA49: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5896CA4B: je 0x5896ca6f
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5896CA4D: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5896CA4F: mov edx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x5896CA52: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5896CA54: push esi
        __asm _emit 0x56
        // 0x5896CA55: push eax
        __asm _emit 0x50
        // 0x5896CA56: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5896CA58: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896CA5A: jge 0x5896ca6f
        __asm _emit 0x7D
        __asm _emit 0x13
        // 0x5896CA5C: mov eax, dword ptr [0x58a28538]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896CA61: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5896CA63: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5896CA66: push eax
        __asm _emit 0x50
        // 0x5896CA67: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5896CA69: mov dword ptr [0x58a28538], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896CA6F: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x5896CA71: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5896CA76: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5896CA79: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5896CA7D: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5896CA81: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5896CA83: je 0x5896caa8
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5896CA85: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5896CA87: call 0x5890b5e0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xEB
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5896CA8C: mov dword ptr [0x58a2853c], eax
        __asm _emit 0xA3
        __asm _emit 0x3C
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896CA91: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896CA96: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5896CA9A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896CAA1: pop ecx
        __asm _emit 0x59
        // 0x5896CAA2: pop edi
        __asm _emit 0x5F
        // 0x5896CAA3: pop esi
        __asm _emit 0x5E
        // 0x5896CAA4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5896CAA7: ret
        __asm _emit 0xC3
        // 0x5896CAA8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5896CAAA: mov dword ptr [0x58a2853c], eax
        __asm _emit 0xA3
        __asm _emit 0x3C
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896CAAF: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896CAB4: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5896CAB8: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896CABF: pop ecx
        __asm _emit 0x59
        // 0x5896CAC0: pop edi
        __asm _emit 0x5F
        // 0x5896CAC1: pop esi
        __asm _emit 0x5E
        // 0x5896CAC2: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5896CAC5: ret
        __asm _emit 0xC3
        // 0x5896CAC6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5896CAC8: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5896CACC: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896CAD3: pop ecx
        __asm _emit 0x59
        // 0x5896CAD4: pop edi
        __asm _emit 0x5F
        // 0x5896CAD5: pop esi
        __asm _emit 0x5E
        // 0x5896CAD6: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5896CAD9: ret
        __asm _emit 0xC3
    }
}
