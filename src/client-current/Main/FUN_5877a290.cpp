// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 148 bytes in 1 exact ranges.
// Source symbol alias: FUN_5877a290.

// Ghidra body range 0x5877A290..0x5877A324; 148 mapped bytes.
extern "C" __declspec(naked) void FUN_5877a290_segment_00() {
    __asm {
        // 0x5877A290: push esi
        __asm _emit 0x56
        // 0x5877A291: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877A293: cmp dword ptr [esi + 0x24c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A29A: je 0x5877a2c9
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x5877A29C: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A2A2: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5877A2A4: cmp eax, 0x50
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x50
        // 0x5877A2A7: je 0x5877a2c9
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x5877A2A9: cmp eax, 0x51
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x51
        // 0x5877A2AC: je 0x5877a2c9
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5877A2AE: cmp eax, 0x52
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x52
        // 0x5877A2B1: je 0x5877a2c9
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5877A2B3: cmp eax, 0x53
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x53
        // 0x5877A2B6: je 0x5877a2c9
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5877A2B8: cmp eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x54
        // 0x5877A2BB: je 0x5877a2c9
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5877A2BD: cmp eax, 0x56
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x56
        // 0x5877A2C0: je 0x5877a2c9
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5877A2C2: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5877A2C4: call 0x58731650
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x73
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877A2C9: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A2CF: and eax, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0xFE
        // 0x5877A2D2: mov dword ptr [esi + 0x24c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A2DC: cmp eax, 0xa0
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A2E1: je 0x5877a304
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x5877A2E3: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A2E9: mov edx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A2EF: mov ecx, dword ptr [edx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A2F5: cmp dword ptr [ecx + 0x84], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A2FB: jne 0x5877a304
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5877A2FD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5877A2FF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5877A302: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5877A304: mov eax, dword ptr [esi + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A30A: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A30F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5877A313: mov esi, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A319: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A31E: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5877A322: pop esi
        __asm _emit 0x5E
        // 0x5877A323: ret
        __asm _emit 0xC3
    }
}
