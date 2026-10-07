// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 336 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887bee0.

// Ghidra body range 0x5887BEE0..0x5887C030; 336 mapped bytes.
extern "C" __declspec(naked) void FUN_5887bee0_segment_00() {
    __asm {
        // 0x5887BEE0: cmp dword ptr [esp + 4], 1
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x5887BEE5: push esi
        __asm _emit 0x56
        // 0x5887BEE6: push edi
        __asm _emit 0x57
        // 0x5887BEE7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5887BEE9: jne 0x5887bf4c
        __asm _emit 0x75
        __asm _emit 0x61
        // 0x5887BEEB: mov edi, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BEF1: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5887BEF4: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BEF9: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5887BEFD: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5887BF01: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887BF03: je 0x5887bf0b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887BF05: push edi
        __asm _emit 0x57
        // 0x5887BF06: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BF0B: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5887BF0E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887BF10: je 0x5887bf18
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887BF12: push edi
        __asm _emit 0x57
        // 0x5887BF13: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x6F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BF18: push 0x5899f20c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0xF2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5887BF1D: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5887BF23: mov ecx, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BF29: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887BF2C: push eax
        __asm _emit 0x50
        // 0x5887BF2D: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x5D
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5887BF32: mov eax, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BF38: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5887BF3D: pop edi
        __asm _emit 0x5F
        // 0x5887BF3E: mov dword ptr [esi + 0x94], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BF48: pop esi
        __asm _emit 0x5E
        // 0x5887BF49: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5887BF4C: mov edi, dword ptr [esi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BF52: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x5887BF56: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x26
        // 0x5887BF5A: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5887BF5D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887BF5F: je 0x5887bf67
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887BF61: push edi
        __asm _emit 0x57
        // 0x5887BF62: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x6F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BF67: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5887BF6A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887BF6C: je 0x5887bf74
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887BF6E: push edi
        __asm _emit 0x57
        // 0x5887BF6F: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x6F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BF74: mov edi, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BF7A: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5887BF7D: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5887BF81: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5887BF85: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887BF87: je 0x5887bf8f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887BF89: push edi
        __asm _emit 0x57
        // 0x5887BF8A: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x6F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BF8F: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5887BF92: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887BF94: je 0x5887bf9c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887BF96: push edi
        __asm _emit 0x57
        // 0x5887BF97: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x6F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BF9C: mov edi, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BFA2: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5887BFA5: mov ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5887BFA9: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5887BFAD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887BFAF: je 0x5887bfb7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887BFB1: push edi
        __asm _emit 0x57
        // 0x5887BFB2: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x6F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BFB7: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5887BFBA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887BFBC: je 0x5887bfc4
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887BFBE: push edi
        __asm _emit 0x57
        // 0x5887BFBF: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x6F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BFC4: mov edi, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BFCA: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x26
        // 0x5887BFCE: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x26
        // 0x5887BFD2: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5887BFD5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887BFD7: je 0x5887bfdf
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887BFD9: push edi
        __asm _emit 0x57
        // 0x5887BFDA: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x6F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BFDF: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5887BFE2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887BFE4: je 0x5887bfec
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887BFE6: push edi
        __asm _emit 0x57
        // 0x5887BFE7: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x6E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BFEC: push 0x5899f1ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0xF1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5887BFF1: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5887BFF7: mov ecx, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BFFD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887C000: push eax
        __asm _emit 0x50
        // 0x5887C001: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x5C
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5887C006: mov eax, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887C00C: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887C011: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5887C015: mov eax, 0x7d
        __asm _emit 0xB8
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887C01A: pop edi
        __asm _emit 0x5F
        // 0x5887C01B: mov word ptr [esi + 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887C022: mov dword ptr [esi + 0x94], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887C02C: pop esi
        __asm _emit 0x5E
        // 0x5887C02D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
