// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 112 bytes in 1 exact ranges.
// Source symbol alias: FUN_588faab0.

// Ghidra body range 0x588FAAB0..0x588FAB20; 112 mapped bytes.
extern "C" __declspec(naked) void FUN_588faab0_segment_00() {
    __asm {
        // 0x588FAAB0: push esi
        __asm _emit 0x56
        // 0x588FAAB1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FAAB3: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588FAAB5: push edi
        __asm _emit 0x57
        // 0x588FAAB6: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x588FAAB9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FAABB: jne 0x588faac8
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588FAABD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x21
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FAAC2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588FAAC4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FAAC6: je 0x588faacc
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588FAAC8: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588FAACA: jmp 0x588faace
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FAACC: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FAACE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FAAD0: je 0x588faad6
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588FAAD2: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588FAAD4: jmp 0x588faad8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FAAD6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FAAD8: mov eax, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x1C
        // 0x588FAADB: add eax, dword ptr [ecx + 0x18]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x18
        // 0x588FAADE: cmp dword ptr [esi + 4], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588FAAE1: jb 0x588faae8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FAAE3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x21
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FAAE8: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x588FAAEA: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588FAAEC: je 0x588faaf2
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588FAAEE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588FAAF0: jmp 0x588faaf4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FAAF2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FAAF4: cmp dword ptr [eax + 0x14], edi
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x588FAAF7: ja 0x588fab06
        __asm _emit 0x77
        __asm _emit 0x0D
        // 0x588FAAF9: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588FAAFB: je 0x588fab01
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588FAAFD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588FAAFF: jmp 0x588fab03
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FAB01: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FAB03: sub edi, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x78
        __asm _emit 0x14
        // 0x588FAB06: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588FAB08: je 0x588fab15
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FAB0A: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x588FAB0C: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588FAB0F: mov eax, dword ptr [ecx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB9
        // 0x588FAB12: pop edi
        __asm _emit 0x5F
        // 0x588FAB13: pop esi
        __asm _emit 0x5E
        // 0x588FAB14: ret
        __asm _emit 0xC3
        // 0x588FAB15: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FAB17: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588FAB1A: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588FAB1D: pop edi
        __asm _emit 0x5F
        // 0x588FAB1E: pop esi
        __asm _emit 0x5E
        // 0x588FAB1F: ret
        __asm _emit 0xC3
    }
}
