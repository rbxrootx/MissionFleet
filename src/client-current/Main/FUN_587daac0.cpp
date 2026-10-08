// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 268 bytes in 1 exact ranges.
// Source symbol alias: FUN_587daac0.

// Ghidra body range 0x587DAAC0..0x587DABCC; 268 mapped bytes.
extern "C" __declspec(naked) void FUN_587daac0_segment_00() {
    __asm {
        // 0x587DAAC0: movzx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587DAAC5: dec eax
        __asm _emit 0x48
        // 0x587DAAC6: push esi
        __asm _emit 0x56
        // 0x587DAAC7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587DAAC9: cmp eax, 0x2f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x2F
        // 0x587DAACC: ja 0x587daba6
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAAD2: movzx eax, byte ptr [eax + 0x587dabe4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0xAB
        __asm _emit 0x7D
        __asm _emit 0x58
        // 0x587DAAD9: jmp dword ptr [eax*4 + 0x587dabcc]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0xAB
        __asm _emit 0x7D
        __asm _emit 0x58
        // 0x587DAAE0: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587DAAE4: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DAAE7: je 0x587dab1f
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x587DAAE9: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587DAAED: jne 0x587dab04
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x587DAAEF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DAAF1: call 0x587d8610
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DAAF6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DAAF8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DAAFA: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x6B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DAAFF: jmp 0x587daba6
        __asm _emit 0xE9
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAB04: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587DAB08: jne 0x587dab11
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587DAB0A: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587DAB0C: call 0x587d8610
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DAB11: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DAB13: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DAB15: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x6B
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DAB1A: jmp 0x587daba6
        __asm _emit 0xE9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAB1F: mov ecx, dword ptr [esi + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAB25: call 0x58797460
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xC9
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587DAB2A: jmp 0x587daba6
        __asm _emit 0xEB
        __asm _emit 0x7A
        // 0x587DAB2C: cmp word ptr [esp + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587DAB32: je 0x587dab42
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587DAB34: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DAB36: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x6A
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x587DAB3B: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587DAB40: jmp 0x587daba6
        __asm _emit 0xEB
        __asm _emit 0x64
        // 0x587DAB42: mov ecx, dword ptr [esi + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAB48: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAB4A: call 0x58797470
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xC9
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587DAB4F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAB51: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAB53: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAB55: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x587DAB57: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x0F
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587DAB5C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DAB5E: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DAB63: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587DAB68: jmp 0x587daba6
        __asm _emit 0xEB
        __asm _emit 0x3C
        // 0x587DAB6A: mov ecx, dword ptr [esi + 0xdc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAB70: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAB72: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DAB74: call 0x58817800
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xCC
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587DAB79: jmp 0x587daba6
        __asm _emit 0xEB
        __asm _emit 0x2B
        // 0x587DAB7B: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587DAB7F: push ecx
        __asm _emit 0x51
        // 0x587DAB80: mov ecx, dword ptr [esi + 0xdc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAB86: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAB88: call 0x58817800
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xCC
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587DAB8D: jmp 0x587daba6
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587DAB8F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAB91: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAB93: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAB95: push 0x48f
        __asm _emit 0x68
        __asm _emit 0x8F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAB9A: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x0F
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587DAB9F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DABA1: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DABA6: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587DABAA: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DABB0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587DABB2: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587DABB8: push edx
        __asm _emit 0x52
        // 0x587DABB9: call 0x5888cc70
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x20
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587DABBE: mov dword ptr [0x58a248d8], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DABC8: pop esi
        __asm _emit 0x5E
        // 0x587DABC9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
