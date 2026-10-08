// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 264 bytes in 1 exact ranges.
// Source symbol alias: FUN_58869cf0.

// Ghidra body range 0x58869CF0..0x58869DF8; 264 mapped bytes.
extern "C" __declspec(naked) void FUN_58869cf0_segment_00() {
    __asm {
        // 0x58869CF0: push ebx
        __asm _emit 0x53
        // 0x58869CF1: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58869CF3: mov ecx, dword ptr [ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x6C
        // 0x58869CF6: mov dword ptr [ebx + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869CFD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58869CFF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58869D02: push esi
        __asm _emit 0x56
        // 0x58869D03: push edi
        __asm _emit 0x57
        // 0x58869D04: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58869D06: mov ecx, dword ptr [ebx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x70
        // 0x58869D09: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58869D0B: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58869D0E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58869D10: mov cx, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x24
        // 0x58869D14: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58869D18: mov dword ptr [ebx + 0x24c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D1E: mov edx, 0xe1ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D23: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58869D26: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D2B: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58869D2E: mov word ptr [ebx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x24
        // 0x58869D32: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D37: or word ptr [ebx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x58869D3B: or word ptr [ebx + 0x24], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4B
        __asm _emit 0x24
        __asm _emit 0x06
        // 0x58869D40: mov esi, dword ptr [ebx + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D46: mov dword ptr [ebx + 0x2c8], 0
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D50: mov dword ptr [ebx + 0x2cc], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D56: mov dword ptr [ebx + 0x2d0], 0
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D60: add esi, 0x50
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x50
        // 0x58869D63: lea edi, [ebx + 0xcc]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D69: mov ecx, 0x60
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D6E: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58869D70: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58869D72: call 0x58868110
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58869D77: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58869D7C: mov esi, 0x28
        __asm _emit 0xBE
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D81: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D87: jle 0x58869da0
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58869D89: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D90: je 0x58869da0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58869D92: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D98: mov ecx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869D9E: jmp 0x58869da2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58869DA0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58869DA2: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58869DA8: push edx
        __asm _emit 0x52
        // 0x58869DA9: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xDB
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58869DAE: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58869DB3: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869DB9: jle 0x58869dd2
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58869DBB: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869DC2: je 0x58869dd2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58869DC4: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869DCA: mov ecx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869DD0: jmp 0x58869dd4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58869DD2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58869DD4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58869DD6: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58869DD9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58869DDB: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58869DDD: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58869DE3: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x58869DE6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58869DE8: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58869DEB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58869DED: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58869DEF: push ebx
        __asm _emit 0x53
        // 0x58869DF0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58869DF2: pop edi
        __asm _emit 0x5F
        // 0x58869DF3: pop esi
        __asm _emit 0x5E
        // 0x58869DF4: pop ebx
        __asm _emit 0x5B
        // 0x58869DF5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
