// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587944B0 .. +0x103 bytes.
extern "C" __declspec(naked) void FUN_587944b0() {
    __asm {
        // 0x587944B0: mov eax, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587944B3: push esi
        __asm _emit 0x56
        // 0x587944B4: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587944B6: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587944B8: je 0x587944c0
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587944BA: movzx edx, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587944BE: jmp 0x587944c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587944C0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587944C2: mov eax, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587944C5: inc eax
        __asm _emit 0x40
        // 0x587944C6: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587944C8: jne 0x58794598
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587944CE: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587944D2: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x587944D5: ja 0x58794579
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587944DB: je 0x5879450c
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x587944DD: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587944DF: je 0x58794506
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587944E1: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587944E4: jne 0x587945ad
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587944EA: test byte ptr [ecx + 0x70], 4
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587944EE: je 0x587945ad
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587944F4: mov eax, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587944FA: mov dword ptr [ecx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x587944FD: mov dword ptr [eax + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x50
        // 0x58794500: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58794502: pop esi
        __asm _emit 0x5E
        // 0x58794503: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58794506: test byte ptr [ecx + 0x70], 2
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x70
        __asm _emit 0x02
        // 0x5879450A: jmp 0x58794584
        __asm _emit 0xEB
        __asm _emit 0x78
        // 0x5879450C: cmp dword ptr [ecx + 0x5c], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x5C
        // 0x5879450F: je 0x58794528
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58794511: mov dword ptr [ecx + 0x64], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x64
        // 0x58794514: mov dword ptr [ecx + 0x60], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5879451B: mov dword ptr [ecx + 0x7c], 0x10
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x7C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794522: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58794524: pop esi
        __asm _emit 0x5E
        // 0x58794525: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58794528: cmp dword ptr [ecx + 0xa8], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879452E: je 0x5879456e
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58794530: test byte ptr [ecx + 0x70], 0x10
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58794534: je 0x58794542
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58794536: mov edx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879453C: mov dword ptr [ecx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x5879453F: mov dword ptr [edx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x50
        // 0x58794542: mov eax, dword ptr [ecx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794548: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5879454B: mov eax, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794551: mov dword ptr [ecx + 0x7c], 0x1000
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794558: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5879455A: je 0x587945ad
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x5879455C: mov ecx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794562: push eax
        __asm _emit 0x50
        // 0x58794563: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x58794568: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879456A: pop esi
        __asm _emit 0x5E
        // 0x5879456B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879456E: call 0x58794240
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58794573: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58794575: pop esi
        __asm _emit 0x5E
        // 0x58794576: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58794579: cmp eax, 0x1000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879457E: jne 0x587945ad
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x58794580: test byte ptr [ecx + 0x70], 0x10
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x70
        __asm _emit 0x10
        // 0x58794584: je 0x587945ad
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58794586: mov dword ptr [ecx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x58794589: mov ecx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879458F: mov dword ptr [ecx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x58794592: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58794594: pop esi
        __asm _emit 0x5E
        // 0x58794595: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58794598: cmp dword ptr [ecx + 0x64], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5879459F: jne 0x587945ad
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587945A1: mov edx, dword ptr [ecx + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587945A7: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587945AA: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587945AD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587945AF: pop esi
        __asm _emit 0x5E
        // 0x587945B0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
