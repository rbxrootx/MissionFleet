// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A6E30 .. +0x138 bytes.
// Source symbol alias: FUN_588a6e30.
extern "C" __declspec(naked) void FUN_588a6e30() {
    __asm {
        // 0x588A6E30: push esi
        __asm _emit 0x56
        // 0x588A6E31: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A6E33: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588A6E37: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6E3C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588A6E3F: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6E44: mov dword ptr [esi + 0xac], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6E4E: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588A6E51: jne 0x588a6f66
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6E57: mov ecx, dword ptr [0x58a24810]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6E5D: call 0x588eb130
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588A6E62: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A6E64: je 0x588a6f5c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6E6A: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6E6F: cmp dword ptr [eax + 0x170], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588A6E76: jle 0x588a6e8c
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588A6E78: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6E7F: je 0x588a6e8c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A6E81: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6E87: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588A6E8A: jmp 0x588a6e8e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A6E8C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A6E8E: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6E94: push edx
        __asm _emit 0x52
        // 0x588A6E95: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x0A
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A6E9A: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6E9F: cmp dword ptr [eax + 0x170], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588A6EA6: jle 0x588a6ebc
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588A6EA8: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6EAF: je 0x588a6ebc
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A6EB1: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6EB7: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588A6EBA: jmp 0x588a6ebe
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A6EBC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A6EBE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6EC0: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A6EC3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A6EC5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6EC7: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6ECC: cmp dword ptr [eax + 0x170], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588A6ED3: jle 0x588a6ee9
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588A6ED5: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6EDC: je 0x588a6ee9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A6EDE: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6EE4: mov ecx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x1C
        // 0x588A6EE7: jmp 0x588a6eeb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A6EE9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A6EEB: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6EF1: push edx
        __asm _emit 0x52
        // 0x588A6EF2: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x0A
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A6EF7: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6EFC: cmp dword ptr [eax + 0x170], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x588A6F03: jle 0x588a6f19
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588A6F05: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6F0C: je 0x588a6f19
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A6F0E: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6F14: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x588A6F17: jmp 0x588a6f1b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A6F19: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A6F1B: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6F1D: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A6F20: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A6F22: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6F24: movzx ecx, word ptr [esi + 0x94]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6F2B: movzx edx, word ptr [esi + 0x96]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6F32: push ecx
        __asm _emit 0x51
        // 0x588A6F33: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A6F39: push edx
        __asm _emit 0x52
        // 0x588A6F3A: call 0x587b9600
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x26
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588A6F3F: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6F45: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6F4A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A6F4E: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6F54: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6F56: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588A6F59: pop esi
        __asm _emit 0x5E
        // 0x588A6F5A: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x588A6F5C: mov dword ptr [esi + 0xac], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6F66: pop esi
        __asm _emit 0x5E
        // 0x588A6F67: ret
        __asm _emit 0xC3
    }
}
