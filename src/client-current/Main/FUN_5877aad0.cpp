// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877AAD0 .. +0xCE bytes.
// Source symbol alias: FUN_5877aad0.
extern "C" __declspec(naked) void FUN_5877aad0() {
    __asm {
        // 0x5877AAD0: push esi
        __asm _emit 0x56
        // 0x5877AAD1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877AAD3: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AAD9: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5877AADB: mov dword ptr [esi + 0x25c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AAE5: cmp eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x50
        // 0x5877AAE8: je 0x5877ab15
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5877AAEA: cmp eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x54
        // 0x5877AAED: je 0x5877ab15
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5877AAEF: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AAF5: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AAFA: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877AAFE: mov eax, dword ptr [esi + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AB04: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5877AB09: mov eax, dword ptr [esi + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AB0F: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877AB13: jmp 0x5877ab3d
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x5877AB15: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AB1B: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AB20: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877AB24: mov eax, dword ptr [esi + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AB2A: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AB2F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5877AB33: mov eax, dword ptr [esi + 0x238]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AB39: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877AB3D: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5877AB40: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5877AB43: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AB49: add edx, 0x55
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x55
        // 0x5877AB4C: push edx
        __asm _emit 0x52
        // 0x5877AB4D: add eax, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x2C
        // 0x5877AB50: push eax
        __asm _emit 0x50
        // 0x5877AB51: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877AB56: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5877AB59: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5877AB5C: add ecx, 0x55
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x55
        // 0x5877AB5F: push ecx
        __asm _emit 0x51
        // 0x5877AB60: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AB66: add edx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x18
        // 0x5877AB69: push edx
        __asm _emit 0x52
        // 0x5877AB6A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877AB6F: mov eax, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AB75: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AB7A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877AB7E: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5877AB81: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5877AB84: mov ecx, dword ptr [esi + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AB8A: add edx, 0x55
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x55
        // 0x5877AB8D: push edx
        __asm _emit 0x52
        // 0x5877AB8E: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5877AB91: push eax
        __asm _emit 0x50
        // 0x5877AB92: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877AB97: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5877AB9C: pop esi
        __asm _emit 0x5E
        // 0x5877AB9D: ret
        __asm _emit 0xC3
    }
}
