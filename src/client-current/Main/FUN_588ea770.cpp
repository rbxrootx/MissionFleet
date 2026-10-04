// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EA770 .. +0xDC bytes.
// Source symbol alias: FUN_588ea770.
extern "C" __declspec(naked) void FUN_588ea770() {
    __asm {
        // 0x588EA770: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x588EA773: push ebx
        __asm _emit 0x53
        // 0x588EA774: push ebp
        __asm _emit 0x55
        // 0x588EA775: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588EA777: mov eax, dword ptr [ebx + 0x4820]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA77D: push esi
        __asm _emit 0x56
        // 0x588EA77E: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588EA780: push edi
        __asm _emit 0x57
        // 0x588EA781: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EA785: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x588EA787: je 0x588ea796
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588EA789: push eax
        __asm _emit 0x50
        // 0x588EA78A: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EA790: mov dword ptr [ebx + 0x4820], esi
        __asm _emit 0x89
        __asm _emit 0xB3
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA796: mov dword ptr [ebx + 0x482c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EA7A0: mov dword ptr [ebx + 0x4828], esi
        __asm _emit 0x89
        __asm _emit 0xB3
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA7A6: lea edi, [ebx + 0x808]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA7AC: add ebx, 0x1830
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x30
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA7B2: mov dword ptr [esp + 0x10], 0x200
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA7BA: jmp 0x588ea7c2
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588EA7BC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588EA7C0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588EA7C2: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588EA7C4: mov dword ptr [edi - 0x800], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EA7CA: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x588EA7CC: je 0x588ea7d8
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588EA7CE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EA7D0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EA7D2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EA7D4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EA7D6: mov dword ptr [edi], esi
        __asm _emit 0x89
        __asm _emit 0x37
        // 0x588EA7D8: mov ecx, dword ptr [edi + 0x800]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA7DE: cmp ecx, esi
        __asm _emit 0x3B
        __asm _emit 0xCE
        // 0x588EA7E0: je 0x588ea7f0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EA7E2: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588EA7E4: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EA7E6: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EA7E8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EA7EA: mov dword ptr [edi + 0x800], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA7F0: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588EA7F2: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EA7F6: cmp dword ptr [ebx - 4], eax
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0xFC
        // 0x588EA7F9: jbe 0x588ea800
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EA7FB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA800: mov ebp, dword ptr [ebx - 4]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0xFC
        // 0x588EA803: mov eax, dword ptr [ebx - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0xF0
        // 0x588EA806: lea esi, [ebx - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x73
        __asm _emit 0xF0
        // 0x588EA809: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EA80D: cmp ebp, dword ptr [ebx]
        __asm _emit 0x3B
        __asm _emit 0x2B
        // 0x588EA80F: jbe 0x588ea816
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588EA811: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EA816: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EA81A: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EA81E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588EA820: push ecx
        __asm _emit 0x51
        // 0x588EA821: push edx
        __asm _emit 0x52
        // 0x588EA822: push ebp
        __asm _emit 0x55
        // 0x588EA823: push eax
        __asm _emit 0x50
        // 0x588EA824: lea eax, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588EA828: push eax
        __asm _emit 0x50
        // 0x588EA829: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EA82B: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588EA830: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588EA833: add ebx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x18
        // 0x588EA836: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x588EA83B: jne 0x588ea7c0
        __asm _emit 0x75
        __asm _emit 0x83
        // 0x588EA83D: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EA841: pop edi
        __asm _emit 0x5F
        // 0x588EA842: pop esi
        __asm _emit 0x5E
        // 0x588EA843: pop ebp
        __asm _emit 0x5D
        // 0x588EA844: mov dword ptr [ecx + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA84B: pop ebx
        __asm _emit 0x5B
    }
}
