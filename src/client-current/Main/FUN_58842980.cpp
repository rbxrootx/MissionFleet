// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 111 bytes in 1 exact ranges.
// Source symbol alias: FUN_58842980.

// Ghidra body range 0x58842980..0x588429EF; 111 mapped bytes.
extern "C" __declspec(naked) void FUN_58842980_segment_00() {
    __asm {
        // 0x58842980: mov eax, dword ptr [ecx + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842986: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5884298A: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5884298E: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58842991: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x58842994: je 0x588429e3
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x58842996: mov eax, dword ptr [ecx + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884299C: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588429A0: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588429A4: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588429A7: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588429AA: je 0x588429e3
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588429AC: mov eax, dword ptr [ecx + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588429B2: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588429B6: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588429BA: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588429BD: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x588429C0: je 0x588429d8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588429C2: mov eax, dword ptr [ecx + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588429C8: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588429CC: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x588429D0: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588429D3: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588429D6: jne 0x588429ee
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x588429D8: mov ecx, dword ptr [ecx + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588429DE: jmp 0x58824610
        __asm _emit 0xE9
        __asm _emit 0x2D
        __asm _emit 0x1C
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x588429E3: mov ecx, dword ptr [ecx + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588429E9: jmp 0x5874ddd0
        __asm _emit 0xE9
        __asm _emit 0xE2
        __asm _emit 0xB3
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588429EE: ret
        __asm _emit 0xC3
    }
}
