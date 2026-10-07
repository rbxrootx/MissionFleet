// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 108 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ce360.

// Ghidra body range 0x587CE360..0x587CE3CC; 108 mapped bytes.
extern "C" __declspec(naked) void FUN_587ce360_segment_00() {
    __asm {
        // 0x587CE360: push ebx
        __asm _emit 0x53
        // 0x587CE361: push esi
        __asm _emit 0x56
        // 0x587CE362: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CE364: push edi
        __asm _emit 0x57
        // 0x587CE365: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587CE368: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CE36A: je 0x587ce390
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587CE36C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CE36E: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x48
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CE373: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CE375: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x48
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CE37A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587CE37D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CE37F: je 0x587ce390
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587CE381: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CE383: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CE385: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE387: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CE389: mov dword ptr [esi + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE390: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x587CE393: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE398: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x587CE39A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587CE39C: je 0x587ce3c0
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587CE39E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CE3A0: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x48
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CE3A5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587CE3A7: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x48
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CE3AC: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587CE3AE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587CE3B0: je 0x587ce3c0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587CE3B2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587CE3B4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CE3B6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CE3B8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587CE3BA: mov dword ptr [esi], 0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CE3C0: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x587CE3C3: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x587CE3C6: jne 0x587ce398
        __asm _emit 0x75
        __asm _emit 0xD0
        // 0x587CE3C8: pop edi
        __asm _emit 0x5F
        // 0x587CE3C9: pop esi
        __asm _emit 0x5E
        // 0x587CE3CA: pop ebx
        __asm _emit 0x5B
        // 0x587CE3CB: ret
        __asm _emit 0xC3
    }
}
