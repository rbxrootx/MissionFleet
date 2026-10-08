// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 161 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e4180.

// Ghidra body range 0x587E4180..0x587E4221; 161 mapped bytes.
extern "C" __declspec(naked) void FUN_587e4180_segment_00() {
    __asm {
        // 0x587E4180: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587E4185: push edi
        __asm _emit 0x57
        // 0x587E4186: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587E4188: je 0x587e41c2
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x587E418A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E418E: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E4194: push esi
        __asm _emit 0x56
        // 0x587E4195: push eax
        __asm _emit 0x50
        // 0x587E4196: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xFE
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E419B: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587E419D: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587E419F: je 0x587e41bd
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587E41A1: mov ecx, dword ptr [esi + 0xa4c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E41A7: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587E41AD: push ecx
        __asm _emit 0x51
        // 0x587E41AE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E41B0: call 0x588e6530
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x23
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E41B5: push esi
        __asm _emit 0x56
        // 0x587E41B6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E41B8: call 0x587df580
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xB3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E41BD: pop esi
        __asm _emit 0x5E
        // 0x587E41BE: pop edi
        __asm _emit 0x5F
        // 0x587E41BF: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587E41C2: mov ax, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587E41C7: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587E41CB: jne 0x587e41e5
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587E41CD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E41CF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E41D1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E41D3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E41D5: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x79
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E41DA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E41DC: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x0B
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E41E1: pop edi
        __asm _emit 0x5F
        // 0x587E41E2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587E41E5: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587E41E9: jne 0x587e4203
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587E41EB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E41ED: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E41EF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E41F1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587E41F3: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x78
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E41F8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E41FA: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x0B
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E41FF: pop edi
        __asm _emit 0x5F
        // 0x587E4200: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587E4203: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587E4207: jne 0x587e41be
        __asm _emit 0x75
        __asm _emit 0xB5
        // 0x587E4209: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E420B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E420D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E420F: push 0x23
        __asm _emit 0x6A
        __asm _emit 0x23
        // 0x587E4211: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x78
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E4216: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587E4218: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x0B
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E421D: pop edi
        __asm _emit 0x5F
        // 0x587E421E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
