// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 101 bytes in 1 exact ranges.
// Source symbol alias: FUN_58834120.

// Ghidra body range 0x58834120..0x58834185; 101 mapped bytes.
extern "C" __declspec(naked) void FUN_58834120_segment_00() {
    __asm {
        // 0x58834120: push esi
        __asm _emit 0x56
        // 0x58834121: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58834123: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834129: push edi
        __asm _emit 0x57
        // 0x5883412A: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883412F: cmp dword ptr [esp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58834134: je 0x58834145
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58834136: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58834138: jle 0x58834180
        __asm _emit 0x7E
        __asm _emit 0x46
        // 0x5883413A: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834140: lea edi, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0xFF
        // 0x58834143: jmp 0x5883415b
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58834145: mov ecx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883414B: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834151: sub edx, 5
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x58834154: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58834156: jge 0x58834180
        __asm _emit 0x7D
        __asm _emit 0x28
        // 0x58834158: lea edi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x5883415B: push edi
        __asm _emit 0x57
        // 0x5883415C: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834161: mov ecx, dword ptr [esi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834167: push edi
        __asm _emit 0x57
        // 0x58834168: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883416D: mov ecx, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834173: push edi
        __asm _emit 0x57
        // 0x58834174: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834179: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883417B: call 0x58834030
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58834180: pop edi
        __asm _emit 0x5F
        // 0x58834181: pop esi
        __asm _emit 0x5E
        // 0x58834182: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
