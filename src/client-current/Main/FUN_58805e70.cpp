// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58805E70 .. +0x130 bytes.
// Source symbol alias: FUN_58805e70.
extern "C" __declspec(naked) void FUN_58805e70() {
    __asm {
        // 0x58805E70: movzx edx, word ptr [ecx + 0x110]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805E77: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58805E79: push esi
        __asm _emit 0x56
        // 0x58805E7A: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58805E7E: jne 0x58805e8f
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x58805E80: cmp dword ptr [ecx + 0x2f0], 2
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58805E87: jae 0x58805f49
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805E8D: pop esi
        __asm _emit 0x5E
        // 0x58805E8E: ret
        __asm _emit 0xC3
        // 0x58805E8F: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58805E93: jne 0x58805ea5
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58805E95: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805E9A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58805E9C: test byte ptr [eax + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58805EA3: jmp 0x58805eba
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58805EA5: cmp dx, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x58805EA9: jne 0x58805eec
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x58805EAB: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805EB1: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58805EB3: test byte ptr [ecx + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x81
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58805EBA: je 0x58805ecf
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58805EBC: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805EC2: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58805EC7: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x8F
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58805ECC: mov esi, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x6C
        // 0x58805ECF: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805ED5: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x40
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58805EDA: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x58805EDC: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x58805EDF: jl 0x58805f9c
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805EE5: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805EEA: pop esi
        __asm _emit 0x5E
        // 0x58805EEB: ret
        __asm _emit 0xC3
        // 0x58805EEC: cmp dx, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x58805EF0: jne 0x58805f43
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x58805EF2: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805EF8: movzx eax, word ptr [edx + 0x1b8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805EFF: mov esi, 2
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805F04: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58805F07: ja 0x58805f2a
        __asm _emit 0x77
        __asm _emit 0x21
        // 0x58805F09: jmp dword ptr [eax*4 + 0x58805fa0]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x5F
        __asm _emit 0x80
        __asm _emit 0x58
        // 0x58805F10: mov esi, 0xe
        __asm _emit 0xBE
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805F15: jmp 0x58805f2a
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x58805F17: mov esi, 8
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805F1C: jmp 0x58805f2a
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58805F1E: mov esi, 0xc
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805F23: jmp 0x58805f2a
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58805F25: mov esi, 0x10
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805F2A: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805F30: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x40
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58805F35: movzx ecx, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCE
        // 0x58805F38: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58805F3A: jl 0x58805f9c
        __asm _emit 0x7C
        __asm _emit 0x60
        // 0x58805F3C: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805F41: pop esi
        __asm _emit 0x5E
        // 0x58805F42: ret
        __asm _emit 0xC3
        // 0x58805F43: cmp dx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x58805F47: jne 0x58805f60
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58805F49: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805F4F: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x40
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58805F54: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x58805F57: jl 0x58805f9c
        __asm _emit 0x7C
        __asm _emit 0x43
        // 0x58805F59: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805F5E: pop esi
        __asm _emit 0x5E
        // 0x58805F5F: ret
        __asm _emit 0xC3
        // 0x58805F60: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58805F64: jne 0x58805f9e
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x58805F66: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805F6C: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58805F6E: test byte ptr [edx + 0x1bc], 1
        __asm _emit 0xF6
        __asm _emit 0x82
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58805F75: je 0x58805f8a
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58805F77: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805F7D: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58805F82: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x8E
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58805F87: mov esi, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x6C
        // 0x58805F8A: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805F90: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x40
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58805F95: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x58805F97: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x58805F9A: jge 0x58805f59
        __asm _emit 0x7D
        __asm _emit 0xBD
        // 0x58805F9C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58805F9E: pop esi
        __asm _emit 0x5E
        // 0x58805F9F: ret
        __asm _emit 0xC3
    }
}
