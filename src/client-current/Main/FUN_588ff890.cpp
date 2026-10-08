// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 173 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ff890.

// Ghidra body range 0x588FF890..0x588FF93D; 173 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff890_segment_00() {
    __asm {
        // 0x588FF890: push esi
        __asm _emit 0x56
        // 0x588FF891: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FF893: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588FF897: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x588FF899: je 0x588ff93b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF89F: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588FF8A2: push edi
        __asm _emit 0x57
        // 0x588FF8A3: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FF8A5: je 0x588ff8c0
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588FF8A7: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x588FF8AA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588FF8AC: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588FF8AF: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588FF8B2: je 0x588ff8be
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588FF8B4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FF8B6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FF8B8: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588FF8BA: jne 0x588ff8a7
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588FF8BC: jmp 0x588ff8c0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FF8BE: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FF8C0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FF8C2: call 0x588ff080
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF8C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF8C9: je 0x588ff8d8
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588FF8CB: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF8D1: pop edi
        __asm _emit 0x5F
        // 0x588FF8D2: pop esi
        __asm _emit 0x5E
        // 0x588FF8D3: jmp 0x588f9c00
        __asm _emit 0xE9
        __asm _emit 0x28
        __asm _emit 0xA3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF8D8: cmp dword ptr [esi + 0x90], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF8DF: jne 0x588ff930
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x588FF8E1: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FF8E7: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588FF8EA: push ecx
        __asm _emit 0x51
        // 0x588FF8EB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FF8ED: call 0x588fefe0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF8F2: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FF8F4: cmp edi, -1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF8F7: je 0x588ff930
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588FF8F9: cmp dword ptr [esi + 0x94], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF8FF: jne 0x588ff91f
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x588FF901: inc dword ptr [esi + 0x8c]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF907: cmp dword ptr [esi + 0x8c], 0xa
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0A
        // 0x588FF90E: jne 0x588ff93a
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x588FF910: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF916: push edi
        __asm _emit 0x57
        // 0x588FF917: call 0x588f9fd0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xA6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF91C: pop edi
        __asm _emit 0x5F
        // 0x588FF91D: pop esi
        __asm _emit 0x5E
        // 0x588FF91E: ret
        __asm _emit 0xC3
        // 0x588FF91F: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF925: call 0x588f9c00
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xA2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF92A: mov dword ptr [esi + 0x94], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF930: mov dword ptr [esi + 0x8c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF93A: pop edi
        __asm _emit 0x5F
        // 0x588FF93B: pop esi
        __asm _emit 0x5E
        // 0x588FF93C: ret
        __asm _emit 0xC3
    }
}
