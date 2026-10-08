// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 122 bytes in 1 exact ranges.
// Source symbol alias: FUN_58876710.

// Ghidra body range 0x58876710..0x5887678A; 122 mapped bytes.
extern "C" __declspec(naked) void FUN_58876710_segment_00() {
    __asm {
        // 0x58876710: push esi
        __asm _emit 0x56
        // 0x58876711: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58876713: cmp word ptr [esi + 0xcc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887671B: je 0x58876724
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5887671D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5887671F: call 0x58875830
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876724: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58876727: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5887672C: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5887672F: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58876734: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x58876737: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887673C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xC5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58876741: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x58876744: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876749: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xC5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887674E: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58876753: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58876757: mov ecx, 0xe2ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887675C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5887675F: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876764: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58876767: cmp word ptr [esi + 0xcc], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5887676F: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58876773: mov dword ptr [esi + 0xc8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887677D: jne 0x58876788
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5887677F: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58876781: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58876783: call 0x58875830
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876788: pop esi
        __asm _emit 0x5E
        // 0x58876789: ret
        __asm _emit 0xC3
    }
}
