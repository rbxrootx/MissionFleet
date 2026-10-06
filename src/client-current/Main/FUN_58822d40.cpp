// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58822D40 .. +0x172 bytes.
// Source symbol alias: FUN_58822d40.
extern "C" __declspec(naked) void FUN_58822d40() {
    __asm {
        // 0x58822D40: sub esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822D46: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58822D4B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58822D4D: mov dword ptr [esp + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822D54: push ebp
        __asm _emit 0x55
        // 0x58822D55: push esi
        __asm _emit 0x56
        // 0x58822D56: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58822D58: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822D5D: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6E
        __asm _emit 0x24
        // 0x58822D61: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58822D66: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58822D6A: push edi
        __asm _emit 0x57
        // 0x58822D6B: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822D70: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58822D73: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822D78: push 0x14a
        __asm _emit 0x68
        __asm _emit 0x4A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822D7D: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58822D80: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58822D84: push 0x130
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822D89: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58822D8B: mov dword ptr [esi + 0x58], 0xdc
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822D92: mov dword ptr [esi + 0x50], 0x130
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822D99: mov dword ptr [esi + 0x54], 0x14a
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x4A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822DA0: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x04
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58822DA5: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58822DA8: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58822DAC: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58822DAF: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x58822DB3: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58822DB6: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822DBB: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58822DBF: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58822DC2: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0xCB
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58822DC7: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58822DCE: je 0x58822e29
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x58822DD0: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x06
        // 0x58822DD8: jne 0x58822e29
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x58822DDA: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x58822DDD: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822DE2: push 0x5899db80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xDB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58822DE7: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x58822DEA: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58822DF0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58822DF3: push eax
        __asm _emit 0x50
        // 0x58822DF4: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58822DF8: push eax
        __asm _emit 0x50
        // 0x58822DF9: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58822DFF: mov edi, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x58822E02: mov edx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822E08: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58822E0B: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58822E0F: push ecx
        __asm _emit 0x51
        // 0x58822E10: push edx
        __asm _emit 0x52
        // 0x58822E11: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58822E17: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822E1D: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58822E20: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58822E22: inc eax
        __asm _emit 0x40
        // 0x58822E23: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58822E25: jne 0x58822e20
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58822E27: jmp 0x58822e67
        __asm _emit 0xEB
        __asm _emit 0x3E
        // 0x58822E29: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58822E2C: push 0x5899316c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x31
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58822E31: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822E38: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58822E3E: mov edi, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x58822E41: mov ecx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822E47: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58822E4A: push eax
        __asm _emit 0x50
        // 0x58822E4B: push ecx
        __asm _emit 0x51
        // 0x58822E4C: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58822E52: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822E58: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58822E5B: jmp 0x58822e60
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58822E5D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58822E60: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58822E62: inc eax
        __asm _emit 0x40
        // 0x58822E63: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58822E65: jne 0x58822e60
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58822E67: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58822E69: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822E6F: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822E75: mov dword ptr [esi + 0x84], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822E7B: mov dword ptr [esi + 0x88], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822E85: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58822E8B: mov ecx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x30
        // 0x58822E8E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58822E90: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58822E93: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58822E95: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58822E97: push esi
        __asm _emit 0x56
        // 0x58822E98: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58822E9A: mov ecx, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822EA1: pop edi
        __asm _emit 0x5F
        // 0x58822EA2: pop esi
        __asm _emit 0x5E
        // 0x58822EA3: pop ebp
        __asm _emit 0x5D
        // 0x58822EA4: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58822EA6: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x9D
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58822EAB: add esp, 0x84
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822EB1: ret
        __asm _emit 0xC3
    }
}
