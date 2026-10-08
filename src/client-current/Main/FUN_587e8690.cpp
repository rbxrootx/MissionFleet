// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 63 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e8690.

// Ghidra body range 0x587E8690..0x587E86CF; 63 mapped bytes.
extern "C" __declspec(naked) void FUN_587e8690_segment_00() {
    __asm {
        // 0x587E8690: push esi
        __asm _emit 0x56
        // 0x587E8691: push edi
        __asm _emit 0x57
        // 0x587E8692: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587E8696: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E8698: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587E869A: je 0x587e86ca
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x587E869C: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E86A1: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587E86A4: cmp dword ptr [esp + 0xc], ecx
        __asm _emit 0x39
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587E86A8: jne 0x587e86ca
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x587E86AA: call 0x588d66d0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xE0
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x587E86AF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E86B1: je 0x587e86ca
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587E86B3: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587E86B7: mov edx, dword ptr [edi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E86BD: push ecx
        __asm _emit 0x51
        // 0x587E86BE: mov ecx, dword ptr [esi + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E86C4: push edx
        __asm _emit 0x52
        // 0x587E86C5: call 0x587a5670
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xCF
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587E86CA: pop edi
        __asm _emit 0x5F
        // 0x587E86CB: pop esi
        __asm _emit 0x5E
        // 0x587E86CC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
