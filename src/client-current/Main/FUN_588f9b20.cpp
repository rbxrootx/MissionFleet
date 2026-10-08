// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 86 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f9b20.

// Ghidra body range 0x588F9B20..0x588F9B76; 86 mapped bytes.
extern "C" __declspec(naked) void FUN_588f9b20_segment_00() {
    __asm {
        // 0x588F9B20: mov edx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F9B26: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9B2B: cmp dword ptr [edx + 0x90], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9B31: jne 0x588f9b5c
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x588F9B33: cmp dword ptr [esp + 4], 0xc
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x0C
        // 0x588F9B38: jg 0x588f9b3f
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x588F9B3A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F9B3C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F9B3F: cmp dword ptr [ecx + 0x6c], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x588F9B42: jle 0x588f9b6e
        __asm _emit 0x7E
        __asm _emit 0x2A
        // 0x588F9B44: mov cl, byte ptr [ecx + 0x68]
        __asm _emit 0x8A
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x588F9B47: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588F9B49: je 0x588f9b73
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588F9B4B: cmp cl, al
        __asm _emit 0x3A
        __asm _emit 0xC8
        // 0x588F9B4D: je 0x588f9b73
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588F9B4F: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588F9B52: je 0x588f9b73
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x588F9B54: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9B59: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F9B5C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x588F9B5F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F9B61: je 0x588f9b6e
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F9B63: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588F9B65: jne 0x588f9b54
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x588F9B67: cmp dword ptr [esp + 4], 0xc
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x0C
        // 0x588F9B6C: jle 0x588f9b54
        __asm _emit 0x7E
        __asm _emit 0xE6
        // 0x588F9B6E: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9B73: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
