// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58752830 .. +0xA0 bytes.
// Source symbol alias: FUN_58752830.
extern "C" __declspec(naked) void FUN_58752830() {
    __asm {
        // 0x58752830: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58752834: push esi
        __asm _emit 0x56
        // 0x58752835: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58752837: cmp edx, 0x3fffffff
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x3F
        // 0x5875283D: jbe 0x58752844
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5875283F: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x3E
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58752844: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58752847: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58752849: jne 0x5875284f
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5875284B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875284D: jmp 0x58752857
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5875284F: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58752852: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58752854: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58752857: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58752859: jae 0x587528cf
        __asm _emit 0x73
        __asm _emit 0x74
        // 0x5875285B: push ebx
        __asm _emit 0x53
        // 0x5875285C: push edi
        __asm _emit 0x57
        // 0x5875285D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875285F: push edx
        __asm _emit 0x52
        // 0x58752860: call 0x587ab430
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x8B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58752865: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58752868: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5875286B: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5875286D: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58752870: jbe 0x58752877
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58752872: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xA3
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58752877: push ebp
        __asm _emit 0x55
        // 0x58752878: mov ebp, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x5875287B: cmp ebp, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x5875287E: jbe 0x58752885
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58752880: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xA3
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58752885: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x58752887: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5875288A: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5875288C: jbe 0x587528a1
        __asm _emit 0x76
        __asm _emit 0x13
        // 0x5875288E: lea eax, [edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58752895: push eax
        __asm _emit 0x50
        // 0x58752896: push ebp
        __asm _emit 0x55
        // 0x58752897: push eax
        __asm _emit 0x50
        // 0x58752898: push ebx
        __asm _emit 0x53
        // 0x58752899: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xA3
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875289E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587528A1: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587528A4: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587528A7: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587528A9: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x587528AC: pop ebp
        __asm _emit 0x5D
        // 0x587528AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587528AF: je 0x587528ba
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587528B1: push eax
        __asm _emit 0x50
        // 0x587528B2: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xA3
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587528B7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587528BA: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587528BE: lea edx, [ebx + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xBB
        // 0x587528C1: lea ecx, [ebx + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x83
        // 0x587528C4: pop edi
        __asm _emit 0x5F
        // 0x587528C5: mov dword ptr [esi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587528C8: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587528CB: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x587528CE: pop ebx
        __asm _emit 0x5B
        // 0x587528CF: pop esi
        __asm _emit 0x5E
    }
}
