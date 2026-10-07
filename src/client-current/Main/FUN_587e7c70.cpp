// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 91 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e7c70.

// Ghidra body range 0x587E7C70..0x587E7CCB; 91 mapped bytes.
extern "C" __declspec(naked) void FUN_587e7c70_segment_00() {
    __asm {
        // 0x587E7C70: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E7C72: add ecx, 0x98
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7C78: cmp dword ptr [ecx], 1
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x01
        // 0x587E7C7B: je 0x587e7ca8
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x587E7C7D: inc eax
        __asm _emit 0x40
        // 0x587E7C7E: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587E7C81: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x587E7C84: jl 0x587e7c78
        __asm _emit 0x7C
        __asm _emit 0xF2
        // 0x587E7C86: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E7C8C: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x71
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587E7C91: cmp eax, 0x3f1
        __asm _emit 0x3D
        __asm _emit 0xF1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7C96: jne 0x587e7ca7
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x587E7C98: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E7C9E: mov eax, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x58
        // 0x587E7CA1: push eax
        __asm _emit 0x50
        // 0x587E7CA2: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x90
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587E7CA7: ret
        __asm _emit 0xC3
        // 0x587E7CA8: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E7CAE: call 0x5875ee20
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x71
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587E7CB3: cmp eax, 0x3f1
        __asm _emit 0x3D
        __asm _emit 0xF1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7CB8: je 0x587e7ca7
        __asm _emit 0x74
        __asm _emit 0xED
        // 0x587E7CBA: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E7CC0: push 0x3f1
        __asm _emit 0x68
        __asm _emit 0xF1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7CC5: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x90
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587E7CCA: ret
        __asm _emit 0xC3
    }
}
