// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 244 bytes in 1 exact ranges.
// Source symbol alias: FUN_588dc830.

// Ghidra body range 0x588DC830..0x588DC924; 244 mapped bytes.
extern "C" __declspec(naked) void FUN_588dc830_segment_00() {
    __asm {
        // 0x588DC830: push esi
        __asm _emit 0x56
        // 0x588DC831: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588DC835: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588DC837: jle 0x588dc920
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC83D: push edi
        __asm _emit 0x57
        // 0x588DC83E: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588DC842: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588DC844: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x588DC847: mov edx, dword ptr [eax + ecx + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC84E: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588DC850: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC856: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC85C: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x588DC85E: jl 0x588dc888
        __asm _emit 0x7C
        __asm _emit 0x28
        // 0x588DC860: mov edx, dword ptr [eax + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC866: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC86C: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x588DC86E: xor edx, dword ptr [eax + 0x47c]
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC874: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC87A: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC880: xor dword ptr [eax + 0x47c], edx
        __asm _emit 0x31
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC886: jmp 0x588dc8a2
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x588DC888: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x588DC88A: mov edx, dword ptr [eax + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC890: and edx, 0xfffffcaa
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xAA
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DC896: or edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xCA
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC89C: mov dword ptr [eax + 0x47c], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC8A2: mov edx, dword ptr [eax + 0x47c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC8A8: xor edx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DC8AE: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x588DC8B1: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x588DC8B3: shl edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x0A
        // 0x588DC8B6: xor edx, dword ptr [eax + 0x47c]
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC8BC: xor edx, 0x2a800
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DC8C2: and edx, 0xffc00
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0xFC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588DC8C8: xor dword ptr [eax + 0x47c], edx
        __asm _emit 0x31
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC8CE: mov edx, dword ptr [eax + 0x87c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC8D4: xor edx, dword ptr [eax + 0x47c]
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC8DA: and edx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC8E0: xor dword ptr [eax + 0x87c], edx
        __asm _emit 0x31
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC8E6: mov edx, dword ptr [eax + 0x87c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC8EC: xor edx, dword ptr [eax + 0x47c]
        __asm _emit 0x33
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC8F2: and edx, 0xffc00
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0xFC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588DC8F8: xor dword ptr [eax + 0x87c], edx
        __asm _emit 0x31
        __asm _emit 0x90
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC8FE: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DC903: cmp dword ptr [eax + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588DC906: jne 0x588dc91f
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588DC908: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DC90D: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC912: mov dword ptr [eax + 0x3ac], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xAC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC918: mov dword ptr [eax + edi*4 + 0x3b0], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DC91F: pop edi
        __asm _emit 0x5F
        // 0x588DC920: pop esi
        __asm _emit 0x5E
        // 0x588DC921: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
