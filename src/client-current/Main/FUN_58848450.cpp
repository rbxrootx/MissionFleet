// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58848450 .. +0xD7 bytes.
// Source symbol alias: FUN_58848450.
extern "C" __declspec(naked) void FUN_58848450() {
    __asm {
        // 0x58848450: push esi
        __asm _emit 0x56
        // 0x58848451: push edi
        __asm _emit 0x57
        // 0x58848452: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58848454: mov esi, dword ptr [edi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x6C
        // 0x58848457: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58848459: je 0x58848522
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884845F: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58848462: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58848465: push ebx
        __asm _emit 0x53
        // 0x58848466: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884846A: push ebp
        __asm _emit 0x55
        // 0x5884846B: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58848471: push ebx
        __asm _emit 0x53
        // 0x58848472: push eax
        __asm _emit 0x50
        // 0x58848473: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58848475: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848477: je 0x58848499
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58848479: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848480: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x54
        // 0x58848483: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58848485: je 0x58848520
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884848B: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5884848E: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x58848491: push ebx
        __asm _emit 0x53
        // 0x58848492: push eax
        __asm _emit 0x50
        // 0x58848493: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58848495: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58848497: jne 0x58848480
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58848499: cmp esi, dword ptr [edi + 0x6c]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x6C
        // 0x5884849C: jne 0x588484a4
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5884849E: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588484A1: mov dword ptr [edi + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x6C
        // 0x588484A4: cmp esi, dword ptr [edi + 0x70]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x70
        // 0x588484A7: jne 0x588484af
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x588484A9: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588484AC: mov dword ptr [edi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x70
        // 0x588484AF: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588484B2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588484B4: je 0x588484bc
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588484B6: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588484B9: mov dword ptr [eax + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x588484BC: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588484BF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588484C1: je 0x588484c9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588484C3: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x588484C6: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588484C9: mov eax, dword ptr [edi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588484CF: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588484D1: jne 0x588484dc
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588484D3: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x588484D6: mov dword ptr [edi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588484DC: cmp dword ptr [edi + 0x108], 0
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588484E3: jne 0x588484ee
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588484E5: mov ecx, dword ptr [edi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x6C
        // 0x588484E8: mov dword ptr [edi + 0x108], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588484EE: cmp dword ptr [esi + 0xa4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588484F5: je 0x588484fe
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588484F7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588484F9: call 0x5875a100
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x1C
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588484FE: cmp esi, dword ptr [edi + 0x100]
        __asm _emit 0x3B
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848504: jne 0x5884850f
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58848506: mov edx, dword ptr [edi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x6C
        // 0x58848509: mov dword ptr [edi + 0x100], edx
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884850F: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58848511: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58848513: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58848515: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58848517: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58848519: dec word ptr [edi + 0xf2]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x8F
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58848520: pop ebp
        __asm _emit 0x5D
        // 0x58848521: pop ebx
        __asm _emit 0x5B
        // 0x58848522: pop edi
        __asm _emit 0x5F
        // 0x58848523: pop esi
        __asm _emit 0x5E
        // 0x58848524: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
