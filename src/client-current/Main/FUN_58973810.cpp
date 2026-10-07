// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 77 bytes in 1 exact ranges.
// Source symbol alias: FUN_58973810.

// Ghidra body range 0x58973810..0x5897385D; 77 mapped bytes.
extern "C" __declspec(naked) void FUN_58973810_segment_00() {
    __asm {
        // 0x58973810: push esi
        __asm _emit 0x56
        // 0x58973811: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58973813: call 0x58973790
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58973818: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5897381B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5897381D: je 0x58973859
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x5897381F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58973821: je 0x58973859
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x58973823: mov esi, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x28
        // 0x58973826: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58973828: je 0x58973859
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5897382A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5897382C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5897382E: jbe 0x58973855
        __asm _emit 0x76
        __asm _emit 0x25
        // 0x58973830: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58973833: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58973835: mov dl, byte ptr [eax - 2]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0xFE
        // 0x58973838: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5897383A: jne 0x58973859
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5897383C: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5897383E: mov dl, byte ptr [eax - 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0xFF
        // 0x58973841: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58973843: jne 0x58973859
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58973845: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58973847: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58973849: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5897384B: jne 0x58973859
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5897384D: inc ecx
        __asm _emit 0x41
        // 0x5897384E: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58973851: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x58973853: jb 0x58973833
        __asm _emit 0x72
        __asm _emit 0xDE
        // 0x58973855: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58973857: pop esi
        __asm _emit 0x5E
        // 0x58973858: ret
        __asm _emit 0xC3
        // 0x58973859: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5897385B: pop esi
        __asm _emit 0x5E
        // 0x5897385C: ret
        __asm _emit 0xC3
    }
}
