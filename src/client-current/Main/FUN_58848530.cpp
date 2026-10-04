// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58848530 .. +0xD7 bytes.
// Source symbol alias: FUN_58848530.
extern "C" __declspec(naked) void FUN_58848530() {
    __asm {
        // 0x58848530: push esi
        __asm _emit 0x56
        // 0x58848531: push edi
        __asm _emit 0x57
        // 0x58848532: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58848534: mov esi, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x58848537: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58848539: je 0x58848602
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884853F: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58848542: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58848545: push ebx
        __asm _emit 0x53
        // 0x58848546: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884854A: push ebp
        __asm _emit 0x55
        // 0x5884854B: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58848551: push ebx
        __asm _emit 0x53
        // 0x58848552: push eax
        __asm _emit 0x50
        // 0x58848553: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58848555: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848557: je 0x58848579
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58848559: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848560: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x58848563: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58848565: je 0x58848600
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884856B: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5884856E: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x58848571: push ebx
        __asm _emit 0x53
        // 0x58848572: push eax
        __asm _emit 0x50
        // 0x58848573: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58848575: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848577: jne 0x58848560
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58848579: cmp esi, dword ptr [edi + 0x64]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x64
        // 0x5884857C: jne 0x58848584
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5884857E: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58848581: mov dword ptr [edi + 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x64
        // 0x58848584: cmp esi, dword ptr [edi + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x58848587: jne 0x5884858f
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58848589: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5884858C: mov dword ptr [edi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x68
        // 0x5884858F: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58848592: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848594: je 0x5884859c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58848596: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58848599: mov dword ptr [eax + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x5884859C: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5884859F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588485A1: je 0x588485a9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588485A3: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x588485A6: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588485A9: mov eax, dword ptr [edi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588485AF: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588485B1: jne 0x588485bc
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588485B3: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x588485B6: mov dword ptr [edi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588485BC: cmp dword ptr [edi + 0x10c], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588485C3: jne 0x588485ce
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588485C5: mov ecx, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x64
        // 0x588485C8: mov dword ptr [edi + 0x10c], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588485CE: cmp dword ptr [esi + 0xa4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588485D5: je 0x588485de
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588485D7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588485D9: call 0x5875a100
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x1B
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588485DE: cmp esi, dword ptr [edi + 0xfc]
        __asm _emit 0x3B
        __asm _emit 0xB7
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588485E4: jne 0x588485ef
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588485E6: mov edx, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x64
        // 0x588485E9: mov dword ptr [edi + 0xfc], edx
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588485EF: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588485F1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588485F3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588485F5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588485F7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588485F9: dec word ptr [edi + 0xf0]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x8F
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848600: pop ebp
        __asm _emit 0x5D
        // 0x58848601: pop ebx
        __asm _emit 0x5B
        // 0x58848602: pop edi
        __asm _emit 0x5F
        // 0x58848603: pop esi
        __asm _emit 0x5E
        // 0x58848604: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
