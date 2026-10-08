// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 63 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b6ed0.

// Ghidra body range 0x587B6ED0..0x587B6F0F; 63 mapped bytes.
extern "C" __declspec(naked) void FUN_587b6ed0_segment_00() {
    __asm {
        // 0x587B6ED0: push edi
        __asm _emit 0x57
        // 0x587B6ED1: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587B6ED3: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x587B6ED7: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x587B6ED9: je 0x587b6f09
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x587B6EDB: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587B6EDD: mov eax, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x587B6EE0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587B6EE2: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x587B6EE4: mov eax, dword ptr [edx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x28
        // 0x587B6EE7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587B6EE9: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587B6EEB: mov ecx, dword ptr [edi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x3C
        // 0x587B6EEE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B6EF0: je 0x587b6f09
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587B6EF2: push esi
        __asm _emit 0x56
        // 0x587B6EF3: mov esi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x38
        // 0x587B6EF6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587B6EF8: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587B6EFB: cmp esi, dword ptr [edi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x3C
        // 0x587B6EFE: je 0x587b6f0b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587B6F00: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587B6F02: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6F04: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B6F06: jne 0x587b6ef3
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x587B6F08: pop esi
        __asm _emit 0x5E
        // 0x587B6F09: pop edi
        __asm _emit 0x5F
        // 0x587B6F0A: ret
        __asm _emit 0xC3
        // 0x587B6F0B: pop esi
        __asm _emit 0x5E
        // 0x587B6F0C: pop edi
        __asm _emit 0x5F
        // 0x587B6F0D: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
