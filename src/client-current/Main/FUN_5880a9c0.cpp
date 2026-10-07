// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1364 bytes in 4 discontiguous ranges.
// Source symbol alias: FUN_5880a9c0.

// Ghidra body range 0x5880A9C0..0x5880A9E7; 39 mapped bytes.
extern "C" __declspec(naked) void FUN_5880a9c0_segment_00() {
    __asm {
        // 0x5880A9C0: sub esp, 0x90
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A9C6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5880A9CB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5880A9CD: mov dword ptr [esp + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A9D4: push ebx
        __asm _emit 0x53
        // 0x5880A9D5: push ebp
        __asm _emit 0x55
        // 0x5880A9D6: push esi
        __asm _emit 0x56
        // 0x5880A9D7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5880A9D9: push edi
        __asm _emit 0x57
        // 0x5880A9DA: lea eax, [esi + 0x3c8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A9E0: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A9E5: jmp 0x5880a9f0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x5880A9F0..0x5880AA58; 104 mapped bytes.
extern "C" __declspec(naked) void FUN_5880a9c0_segment_01() {
    __asm {
        // 0x5880A9F0: mov ecx, dword ptr [eax - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xF0
        // 0x5880A9F3: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880A9F8: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5880A9FC: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5880A9FE: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5880AA02: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5880AA05: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5880AA09: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5880AA0C: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5880AA10: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5880AA13: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5880AA16: jne 0x5880a9f0
        __asm _emit 0x75
        __asm _emit 0xD8
        // 0x5880AA18: mov eax, dword ptr [esi + 0x3f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AA1E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5880AA20: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880AA24: mov eax, dword ptr [esi + 0x42c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AA2A: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AA2F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880AA33: mov eax, dword ptr [esi + 0x430]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AA39: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5880AA3B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880AA3F: mov eax, dword ptr [esi + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AA45: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5880AA47: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880AA4B: lea ecx, [esi + 0x2f4]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AA51: mov edx, 0x20
        __asm _emit 0xBA
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AA56: jmp 0x5880aa60
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x5880AA60..0x5880AE29; 969 mapped bytes.
extern "C" __declspec(naked) void FUN_5880a9c0_segment_02() {
    __asm {
        // 0x5880AA60: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5880AA62: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AA67: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5880AA6B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5880AA6E: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5880AA71: jne 0x5880aa60
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x5880AA73: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5880AA75: cmp dword ptr [esi + 0xd0], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AA7B: jle 0x5880aa96
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x5880AA7D: lea ebx, [esi + 0xd4]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AA83: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5880AA85: call 0x588c6510
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xBA
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880AA8A: inc edi
        __asm _emit 0x47
        // 0x5880AA8B: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5880AA8E: cmp edi, dword ptr [esi + 0xd0]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AA94: jl 0x5880aa83
        __asm _emit 0x7C
        __asm _emit 0xED
        // 0x5880AA96: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5880AA98: cmp dword ptr [esi + 0x74], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5880AA9B: jle 0x5880aab3
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5880AA9D: lea ebx, [esi + 0x2d4]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AAA3: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5880AAA5: call 0x588c6510
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xBA
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880AAAA: inc edi
        __asm _emit 0x47
        // 0x5880AAAB: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5880AAAE: cmp edi, dword ptr [esi + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5880AAB1: jl 0x5880aaa3
        __asm _emit 0x7C
        __asm _emit 0xF0
        // 0x5880AAB3: mov eax, dword ptr [esi + 0x374]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AAB9: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AABE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880AAC2: mov eax, dword ptr [esi + 0x378]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AAC8: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5880AACA: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880AACE: mov eax, dword ptr [esi + 0x37c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AAD4: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880AAD8: mov eax, dword ptr [esi + 0x380]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AADE: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880AAE2: mov eax, dword ptr [esi + 0x384]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AAE8: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880AAEC: mov eax, dword ptr [esi + 0x388]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AAF2: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880AAF6: mov eax, dword ptr [esi + 0x38c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AAFC: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880AB00: mov eax, dword ptr [esi + 0x390]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB06: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880AB0A: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880AB0F: movzx eax, word ptr [eax + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880AB16: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5880AB1A: je 0x5880abfd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB20: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5880AB24: je 0x5880abfd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB2A: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5880AB2E: je 0x5880abfd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB34: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5880AB38: je 0x5880abfd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB3E: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x5880AB42: je 0x5880abfd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB48: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x5880AB4C: je 0x5880abfd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB52: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x5880AB56: je 0x5880abfd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB5C: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x5880AB60: je 0x5880abfd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB66: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5880AB6A: je 0x5880abfd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB70: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x5880AB74: je 0x5880abfd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB7A: mov eax, dword ptr [0x58a2469c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880AB7F: cmp dword ptr [eax + 0x164], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5880AB86: jle 0x5880ab9c
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5880AB88: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB8F: je 0x5880ab9c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5880AB91: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AB97: mov eax, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x1C
        // 0x5880AB9A: jmp 0x5880ab9e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880AB9C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880AB9E: mov ecx, dword ptr [esi + 0x408]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880ABA4: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5880ABA7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880ABA9: je 0x5880abd3
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5880ABAB: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5880ABAE: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5880ABB1: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5880ABB4: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5880ABB7: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5880ABBA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5880ABBC: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5880ABBF: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5880ABC1: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5880ABC4: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5880ABC7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5880ABCA: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5880ABCD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5880ABD0: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5880ABD3: mov eax, dword ptr [0x58a2469c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880ABD8: cmp dword ptr [eax + 0x164], 8
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x5880ABDF: jle 0x5880ac78
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880ABE5: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880ABEC: je 0x5880ac78
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880ABF2: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880ABF8: mov eax, dword ptr [ecx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x20
        // 0x5880ABFB: jmp 0x5880ac7a
        __asm _emit 0xEB
        __asm _emit 0x7D
        // 0x5880ABFD: mov eax, dword ptr [0x58a2469c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880AC02: cmp dword ptr [eax + 0x164], 9
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        // 0x5880AC09: jle 0x5880ac1f
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5880AC0B: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AC12: je 0x5880ac1f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5880AC14: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AC1A: mov eax, dword ptr [ecx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5880AC1D: jmp 0x5880ac21
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880AC1F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880AC21: mov ecx, dword ptr [esi + 0x408]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AC27: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5880AC2A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880AC2C: je 0x5880ac56
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5880AC2E: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5880AC31: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5880AC34: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5880AC37: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5880AC3A: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5880AC3D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5880AC3F: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5880AC42: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5880AC44: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5880AC47: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5880AC4A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5880AC4D: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5880AC50: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5880AC53: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5880AC56: mov eax, dword ptr [0x58a2469c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880AC5B: cmp dword ptr [eax + 0x164], 0xa
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x5880AC62: jle 0x5880ac78
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5880AC64: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AC6B: je 0x5880ac78
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5880AC6D: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AC73: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x5880AC76: jmp 0x5880ac7a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880AC78: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880AC7A: mov ecx, dword ptr [esi + 0x40c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AC80: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5880AC83: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880AC85: je 0x5880acb0
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5880AC87: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5880AC8A: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5880AC8D: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5880AC90: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5880AC93: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5880AC96: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5880AC99: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5880AC9C: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5880AC9E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5880ACA1: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5880ACA4: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5880ACA7: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5880ACAA: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5880ACAD: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5880ACB0: mov eax, dword ptr [esi + 0x904]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880ACB6: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880ACBB: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880ACBF: mov eax, dword ptr [esi + 0x908]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880ACC5: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5880ACC7: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5880ACCB: mov eax, dword ptr [0x5899b2e0]
        __asm _emit 0xA1
        __asm _emit 0xE0
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880ACD0: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880ACD4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880ACD6: movzx ecx, word ptr [0x5899b2e4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880ACDD: mov dword ptr [esp + 0x22], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x5880ACE1: mov dword ptr [esp + 0x26], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x26
        // 0x5880ACE5: mov word ptr [esp + 0x2a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2A
        // 0x5880ACEA: movzx eax, word ptr [0x5899b2dc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x05
        __asm _emit 0xDC
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880ACF1: mov edx, dword ptr [0x5899b2d8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD8
        __asm _emit 0xB2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880ACF7: mov word ptr [esp + 0x30], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5880ACFC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880ACFE: mov dword ptr [esp + 0x32], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x32
        // 0x5880AD02: mov dword ptr [esp + 0x36], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x36
        // 0x5880AD06: mov word ptr [esp + 0x3a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3A
        // 0x5880AD0B: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5880AD0F: mov dword ptr [esp + 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5880AD13: mov eax, dword ptr [0x5899d63c]
        __asm _emit 0xA1
        __asm _emit 0x3C
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880AD18: mov dword ptr [esp + 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5880AD1C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880AD1E: mov dword ptr [esp + 0x52], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x52
        // 0x5880AD22: mov dword ptr [esp + 0x56], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x56
        // 0x5880AD26: mov word ptr [esp + 0x5a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5A
        // 0x5880AD2B: mov al, byte ptr [0x5899d638]
        __asm _emit 0xA0
        __asm _emit 0x38
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880AD30: mov byte ptr [esp + 0x60], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x5880AD34: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880AD36: mov dword ptr [esp + 0x61], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x61
        // 0x5880AD3A: mov dword ptr [esp + 0x65], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x65
        // 0x5880AD3E: mov word ptr [esp + 0x69], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x69
        // 0x5880AD43: mov byte ptr [esp + 0x6b], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6B
        // 0x5880AD47: mov dword ptr [esp + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x5880AD4B: mov dword ptr [esp + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x5880AD4F: mov eax, dword ptr [0x5899d62c]
        __asm _emit 0xA1
        __asm _emit 0x2C
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880AD54: mov dword ptr [esp + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5880AD58: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880AD5A: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5880AD5E: mov edx, dword ptr [0x5899d628]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880AD64: mov word ptr [esp + 0x20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5880AD69: mov ecx, dword ptr [0x5899d624]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x24
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880AD6F: mov dword ptr [esp + 0x81], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AD76: mov dword ptr [esp + 0x85], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AD7D: mov word ptr [esp + 0x89], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AD85: mov byte ptr [esp + 0x8b], al
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AD8C: movzx eax, word ptr [0x5899d620]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880AD93: mov dword ptr [esp + 0x40], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5880AD97: mov edx, dword ptr [0x5899d634]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880AD9D: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5880ADA1: movzx ecx, word ptr [0x5899d640]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880ADA8: mov dword ptr [esp + 0x5c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x5880ADAC: mov edx, dword ptr [0x5899d618]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880ADB2: mov word ptr [esp + 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880ADBA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880ADBC: mov word ptr [esp + 0x50], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5880ADC1: mov ecx, dword ptr [0x5899d614]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880ADC7: mov dword ptr [esp + 0x70], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x5880ADCB: mov edx, dword ptr [0x5899d61c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880ADD1: mov dword ptr [esp + 0x92], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880ADD8: mov dword ptr [esp + 0x96], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880ADDF: mov word ptr [esp + 0x9a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880ADE7: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880ADEB: mov ebp, 0x21f10
        __asm _emit 0xBD
        __asm _emit 0x10
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880ADF0: mov eax, 0x58a0b1c4
        __asm _emit 0xB8
        __asm _emit 0xC4
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880ADF5: mov dword ptr [esp + 0x6c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x5880ADF9: mov cl, byte ptr [0x5899d630]
        __asm _emit 0x8A
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0xD6
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880ADFF: mov dword ptr [esp + 0x8c], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AE06: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5880AE0A: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x5880AE0C: mov byte ptr [esp + 0x80], cl
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AE13: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880AE17: lea ebx, [esi + 0x2d4]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AE1D: lea edi, [esi + 0x448]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AE23: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880AE27: jmp 0x5880ae30
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x5880AE30..0x5880AF2C; 252 mapped bytes.
extern "C" __declspec(naked) void FUN_5880a9c0_segment_03() {
    __asm {
        // 0x5880AE30: mov ecx, dword ptr [eax + ebp]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x28
        // 0x5880AE33: test byte ptr [ecx + 0x64], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x01
        // 0x5880AE37: je 0x5880aefa
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AE3D: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880AE43: movzx eax, word ptr [ecx + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880AE4A: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5880AE4E: je 0x5880ae91
        __asm _emit 0x74
        __asm _emit 0x41
        // 0x5880AE50: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5880AE54: je 0x5880ae91
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x5880AE56: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5880AE5A: je 0x5880ae91
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5880AE5C: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5880AE60: je 0x5880ae91
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5880AE62: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x5880AE66: je 0x5880ae91
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x5880AE68: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x5880AE6C: je 0x5880ae91
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5880AE6E: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x5880AE72: je 0x5880ae91
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5880AE74: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x5880AE78: je 0x5880ae91
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5880AE7A: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5880AE7E: je 0x5880ae91
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5880AE80: cmp ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x5880AE84: je 0x5880ae91
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5880AE86: mov eax, dword ptr [ecx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x29
        // 0x5880AE89: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880AE8B: push eax
        __asm _emit 0x50
        // 0x5880AE8C: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5880AE8F: jmp 0x5880ae9a
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5880AE91: mov eax, dword ptr [ecx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x29
        // 0x5880AE94: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880AE96: push eax
        __asm _emit 0x50
        // 0x5880AE97: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5880AE9A: mov ecx, dword ptr [ecx + ebp - 0x11444]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x29
        __asm _emit 0xBC
        __asm _emit 0xEB
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5880AEA1: push eax
        __asm _emit 0x50
        // 0x5880AEA2: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5880AEA4: push ecx
        __asm _emit 0x51
        // 0x5880AEA5: movzx ecx, byte ptr [edi - 9]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4F
        __asm _emit 0xF7
        // 0x5880AEA9: push eax
        __asm _emit 0x50
        // 0x5880AEAA: movzx eax, byte ptr [edi - 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0xF6
        // 0x5880AEAE: push ecx
        __asm _emit 0x51
        // 0x5880AEAF: movzx ecx, byte ptr [edi - 0xb]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4F
        __asm _emit 0xF5
        // 0x5880AEB3: push eax
        __asm _emit 0x50
        // 0x5880AEB4: movzx eax, byte ptr [edi - 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0xF4
        // 0x5880AEB8: push ecx
        __asm _emit 0x51
        // 0x5880AEB9: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5880AEBB: push eax
        __asm _emit 0x50
        // 0x5880AEBC: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880AEC1: push edx
        __asm _emit 0x52
        // 0x5880AEC2: call 0x588c66c0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xB7
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880AEC7: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5880AEC9: push 0xa
        __asm _emit 0x6A
        __asm _emit 0x0A
        // 0x5880AECB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880AECD: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5880AECF: call 0x588c6830
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xB9
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5880AED4: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5880AED7: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880AEDB: lea eax, [ecx + edx + 0xbf]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AEE2: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5880AEE4: push eax
        __asm _emit 0x50
        // 0x5880AEE5: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x84
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880AEEA: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880AEEE: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880AEF2: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5880AEF5: add dword ptr [esp + 0x10], 0xe
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x0E
        // 0x5880AEFA: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5880AEFD: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x5880AF00: add edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x18
        // 0x5880AF03: cmp ebp, 0x21f30
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0x30
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880AF09: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880AF0D: jl 0x5880ae30
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x1D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880AF13: mov ecx, dword ptr [esp + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AF1A: pop edi
        __asm _emit 0x5F
        // 0x5880AF1B: pop esi
        __asm _emit 0x5E
        // 0x5880AF1C: pop ebp
        __asm _emit 0x5D
        // 0x5880AF1D: pop ebx
        __asm _emit 0x5B
        // 0x5880AF1E: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5880AF20: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x1C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5880AF25: add esp, 0x90
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880AF2B: ret
        __asm _emit 0xC3
    }
}
