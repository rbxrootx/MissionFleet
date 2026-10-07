// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 178 bytes in 2 exact ranges.
// Source symbol alias: FUN_58777650.

// Ghidra body range 0x58777650..0x5877768D; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_58777650_segment_00() {
    __asm {
        // 0x58777650: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58777655: sub esp, 0x100
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877765B: push ebx
        __asm _emit 0x53
        // 0x5877765C: push esi
        __asm _emit 0x56
        // 0x5877765D: push edi
        __asm _emit 0x57
        // 0x5877765E: mov edi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x58777661: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58777663: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58777665: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58777667: je 0x587776be
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x58777669: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777670: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58777672: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xF0
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58777677: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5877767C: jne 0x587776b7
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x5877767E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58777680: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58777682: jle 0x5877769e
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x58777684: movzx ecx, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8F
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877768B: jmp 0x58777690
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58777690..0x58777705; 117 mapped bytes.
extern "C" __declspec(naked) void FUN_58777650_segment_01() {
    __asm {
        // 0x58777690: cmp ecx, dword ptr [esp + eax*4 + 0x8c]
        __asm _emit 0x3B
        __asm _emit 0x8C
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777697: je 0x587776e9
        __asm _emit 0x74
        __asm _emit 0x50
        // 0x58777699: inc eax
        __asm _emit 0x40
        // 0x5877769A: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5877769C: jl 0x58777690
        __asm _emit 0x7C
        __asm _emit 0xF2
        // 0x5877769E: movzx ecx, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8F
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587776A5: mov edx, dword ptr [edi + 0x6070]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587776AB: mov dword ptr [esp + esi*4 + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0xB4
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587776B2: mov dword ptr [esp + esi*4 + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0xB4
        __asm _emit 0x0C
        // 0x587776B6: inc esi
        __asm _emit 0x46
        // 0x587776B7: mov edi, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x78
        // 0x587776BA: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587776BC: jne 0x58777670
        __asm _emit 0x75
        __asm _emit 0xB2
        // 0x587776BE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587776C0: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587776C2: jle 0x587776df
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x587776C4: cmp dword ptr [esp + edi*4 + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xBC
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587776C9: je 0x587776da
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587776CB: mov eax, dword ptr [esp + edi*4 + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587776D2: push eax
        __asm _emit 0x50
        // 0x587776D3: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587776D5: call 0x58776050
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587776DA: inc edi
        __asm _emit 0x47
        // 0x587776DB: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587776DD: jl 0x587776c4
        __asm _emit 0x7C
        __asm _emit 0xE5
        // 0x587776DF: pop edi
        __asm _emit 0x5F
        // 0x587776E0: pop esi
        __asm _emit 0x5E
        // 0x587776E1: pop ebx
        __asm _emit 0x5B
        // 0x587776E2: add esp, 0x100
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587776E8: ret
        __asm _emit 0xC3
        // 0x587776E9: cmp dword ptr [esp + eax*4 + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x84
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587776EE: lea eax, [esp + eax*4 + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x84
        __asm _emit 0x0C
        // 0x587776F2: jne 0x587776b7
        __asm _emit 0x75
        __asm _emit 0xC3
        // 0x587776F4: cmp dword ptr [edi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587776FB: je 0x587776b7
        __asm _emit 0x74
        __asm _emit 0xBA
        // 0x587776FD: mov dword ptr [eax], 1
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58777703: jmp 0x587776b7
        __asm _emit 0xEB
        __asm _emit 0xB2
    }
}
