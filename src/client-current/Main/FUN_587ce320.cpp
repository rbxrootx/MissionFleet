// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 57 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ce320.

// Ghidra body range 0x587CE320..0x587CE359; 57 mapped bytes.
extern "C" __declspec(naked) void FUN_587ce320_segment_00() {
    __asm {
        // 0x587CE320: push esi
        __asm _emit 0x56
        // 0x587CE321: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CE323: cmp dword ptr [esi + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587CE327: push edi
        __asm _emit 0x57
        // 0x587CE328: je 0x587ce334
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587CE32A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CE32D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CE32F: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587CE332: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CE334: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x587CE337: mov edi, 2
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE33C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587CE340: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x587CE343: je 0x587ce34e
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587CE345: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587CE347: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CE349: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587CE34C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CE34E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587CE351: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587CE354: jne 0x587ce340
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x587CE356: pop edi
        __asm _emit 0x5F
        // 0x587CE357: pop esi
        __asm _emit 0x5E
        // 0x587CE358: ret
        __asm _emit 0xC3
    }
}
