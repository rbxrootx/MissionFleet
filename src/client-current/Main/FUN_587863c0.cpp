// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 112 bytes in 1 exact ranges.
// Source symbol alias: FUN_587863c0.

// Ghidra body range 0x587863C0..0x58786430; 112 mapped bytes.
extern "C" __declspec(naked) void FUN_587863c0_segment_00() {
    __asm {
        // 0x587863C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587863C2: mov word ptr [ecx + 0x42], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x42
        // 0x587863C6: cmp dword ptr [ecx + 8], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587863C9: je 0x5878642f
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x587863CB: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587863CE: push esi
        __asm _emit 0x56
        // 0x587863CF: mov esi, 8
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587863D4: add eax, 0x1e2
        __asm _emit 0x05
        __asm _emit 0xE2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587863D9: lea edx, [esi - 7]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0xF9
        // 0x587863DC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587863E0: cmp byte ptr [eax - 2], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xFE
        __asm _emit 0x00
        // 0x587863E4: je 0x587863f0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587863E6: cmp word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x587863EA: je 0x587863f0
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587863EC: add word ptr [ecx + 0x42], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x42
        // 0x587863F0: cmp byte ptr [eax + 2], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587863F4: je 0x58786401
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587863F6: cmp word ptr [eax + 4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587863FB: je 0x58786401
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587863FD: add word ptr [ecx + 0x42], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x42
        // 0x58786401: cmp byte ptr [eax + 6], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58786405: je 0x58786412
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58786407: cmp word ptr [eax + 8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5878640C: je 0x58786412
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5878640E: add word ptr [ecx + 0x42], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x42
        // 0x58786412: cmp byte ptr [eax + 0xa], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58786416: je 0x58786423
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58786418: cmp word ptr [eax + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5878641D: je 0x58786423
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5878641F: add word ptr [ecx + 0x42], dx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x42
        // 0x58786423: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x58786426: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x58786428: jne 0x587863e0
        __asm _emit 0x75
        __asm _emit 0xB6
        // 0x5878642A: mov ax, word ptr [ecx + 0x42]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x42
        // 0x5878642E: pop esi
        __asm _emit 0x5E
        // 0x5878642F: ret
        __asm _emit 0xC3
    }
}
