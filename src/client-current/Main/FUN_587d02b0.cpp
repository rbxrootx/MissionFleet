// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 176 bytes in 1 exact ranges.
// Source symbol alias: FUN_587d02b0.

// Ghidra body range 0x587D02B0..0x587D0360; 176 mapped bytes.
extern "C" __declspec(naked) void FUN_587d02b0_segment_00() {
    __asm {
        // 0x587D02B0: movzx eax, word ptr [ecx + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D02B7: mov eax, dword ptr [eax*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D02BE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D02C0: je 0x587d035d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D02C6: movzx edx, word ptr [eax + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x02
        // 0x587D02CA: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D02CD: je 0x587d035d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D02D3: cmp dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x587D02D7: je 0x587d035d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D02DD: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587D02E1: je 0x587d035d
        __asm _emit 0x74
        __asm _emit 0x7A
        // 0x587D02E3: mov edx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587D02E9: cmp dword ptr [eax + 0x34], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x34
        // 0x587D02EC: je 0x587d02f6
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587D02EE: cmp dword ptr [eax + 0x14], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587D02F1: je 0x587d02f6
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x587D02F3: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x587D02F5: ret
        __asm _emit 0xC3
        // 0x587D02F6: movzx eax, word ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x00
        // 0x587D02F9: cmp eax, 0x551
        __asm _emit 0x3D
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D02FE: jg 0x587d0339
        __asm _emit 0x7F
        __asm _emit 0x39
        // 0x587D0300: je 0x587d0334
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x587D0302: cmp eax, 0x379
        __asm _emit 0x3D
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0307: jg 0x587d0328
        __asm _emit 0x7F
        __asm _emit 0x1F
        // 0x587D0309: je 0x587d0323
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587D030B: cmp eax, 0x1b1
        __asm _emit 0x3D
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0310: je 0x587d031e
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587D0312: cmp eax, 0x281
        __asm _emit 0x3D
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0317: jne 0x587d02f3
        __asm _emit 0x75
        __asm _emit 0xDA
        // 0x587D0319: jmp 0x587cf190
        __asm _emit 0xE9
        __asm _emit 0x72
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D031E: jmp 0x587cf0a0
        __asm _emit 0xE9
        __asm _emit 0x7D
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0323: jmp 0x587cf450
        __asm _emit 0xE9
        __asm _emit 0x28
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0328: cmp eax, 0x411
        __asm _emit 0x3D
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D032D: jne 0x587d02f3
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x587D032F: jmp 0x587cf280
        __asm _emit 0xE9
        __asm _emit 0x4C
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0334: jmp 0x587cf450
        __asm _emit 0xE9
        __asm _emit 0x17
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0339: cmp eax, 0x609
        __asm _emit 0x3D
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D033E: je 0x587d0358
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587D0340: cmp eax, 0x719
        __asm _emit 0x3D
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0345: je 0x587d0353
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587D0347: cmp eax, 0x829
        __asm _emit 0x3D
        __asm _emit 0x29
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D034C: jne 0x587d02f3
        __asm _emit 0x75
        __asm _emit 0xA5
        // 0x587D034E: jmp 0x587cf450
        __asm _emit 0xE9
        __asm _emit 0xFD
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0353: jmp 0x587cf280
        __asm _emit 0xE9
        __asm _emit 0x28
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0358: jmp 0x587cf370
        __asm _emit 0xE9
        __asm _emit 0x13
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D035D: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x587D035F: ret
        __asm _emit 0xC3
    }
}
