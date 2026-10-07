// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 112 bytes in 1 exact ranges.
// Source symbol alias: FUN_58786340.

// Ghidra body range 0x58786340..0x587863B0; 112 mapped bytes.
extern "C" __declspec(naked) void FUN_58786340_segment_00() {
    __asm {
        // 0x58786340: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58786342: mov word ptr [ecx + 0x40], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x40
        // 0x58786346: cmp dword ptr [ecx + 8], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58786349: je 0x587863af
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x5878634B: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5878634E: push esi
        __asm _emit 0x56
        // 0x5878634F: mov esi, 8
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786354: add eax, 0x62
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x62
        // 0x58786357: lea edx, [esi - 7]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0xF9
        // 0x5878635A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58786360: cmp byte ptr [eax - 2], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xFE
        __asm _emit 0x00
        // 0x58786364: je 0x58786370
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58786366: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x5878636A: je 0x58786370
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5878636C: add word ptr [ecx + 0x40], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x40
        // 0x58786370: cmp byte ptr [eax + 2], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58786374: je 0x58786381
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58786376: cmp word ptr [eax + 4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5878637B: je 0x58786381
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5878637D: add word ptr [ecx + 0x40], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x40
        // 0x58786381: cmp byte ptr [eax + 6], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58786385: je 0x58786392
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58786387: cmp word ptr [eax + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5878638C: je 0x58786392
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5878638E: add word ptr [ecx + 0x40], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x40
        // 0x58786392: cmp byte ptr [eax + 0xa], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58786396: je 0x587863a3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58786398: cmp word ptr [eax + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5878639D: je 0x587863a3
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5878639F: add word ptr [ecx + 0x40], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x40
        // 0x587863A3: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x587863A6: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x587863A8: jne 0x58786360
        __asm _emit 0x75
        __asm _emit 0xB6
        // 0x587863AA: mov ax, word ptr [ecx + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x40
        // 0x587863AE: pop esi
        __asm _emit 0x5E
        // 0x587863AF: ret
        __asm _emit 0xC3
    }
}
