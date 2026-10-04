// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58754770 .. +0x105 bytes.
// Source symbol alias: FUN_58754770.
extern "C" __declspec(naked) void FUN_58754770() {
    __asm {
        // 0x58754770: push ebp
        __asm _emit 0x55
        // 0x58754771: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58754773: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58754775: push 0x5897e840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5875477A: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754780: push eax
        __asm _emit 0x50
        // 0x58754781: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58754784: push ebx
        __asm _emit 0x53
        // 0x58754785: push esi
        __asm _emit 0x56
        // 0x58754786: push edi
        __asm _emit 0x57
        // 0x58754787: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5875478C: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x5875478E: push eax
        __asm _emit 0x50
        // 0x5875478F: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58754792: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754798: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x5875479B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875479D: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x587547A0: cmp edi, 0x1fe01f
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x1F
        __asm _emit 0xE0
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587547A6: jbe 0x587547ad
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587547A8: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x1E
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587547AD: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587547B0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587547B2: je 0x587547ca
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587547B4: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587547B7: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587547B9: mov eax, 0x7f807f81
        __asm _emit 0xB8
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x80
        __asm _emit 0x7F
        // 0x587547BE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587547C0: sar edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x587547C3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587547C5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587547C8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587547CA: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587547CC: jae 0x58754864
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587547D2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587547D4: push edi
        __asm _emit 0x57
        // 0x587547D5: call 0x587533c0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587547DA: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587547DD: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587547E0: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x587547E3: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587547EA: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587547ED: jbe 0x587547f4
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587547EF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587547F4: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587547F7: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587547FA: jbe 0x58754801
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587547FC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754801: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58754804: mov byte ptr [ebp - 0x18], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x58754808: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xE8
        // 0x5875480B: push eax
        __asm _emit 0x50
        // 0x5875480C: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x5875480F: push ecx
        __asm _emit 0x51
        // 0x58754810: lea edx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58754813: push edx
        __asm _emit 0x52
        // 0x58754814: push eax
        __asm _emit 0x50
        // 0x58754815: push edi
        __asm _emit 0x57
        // 0x58754816: push ebx
        __asm _emit 0x53
        // 0x58754817: call 0x587535c0
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875481C: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5875481F: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58754822: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58754824: mov eax, 0x7f807f81
        __asm _emit 0xB8
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x80
        __asm _emit 0x7F
        // 0x58754829: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5875482B: sar edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x5875482E: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58754830: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58754833: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58754836: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58754838: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5875483A: je 0x58754845
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5875483C: push ebx
        __asm _emit 0x53
        // 0x5875483D: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754842: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58754845: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58754848: imul edi, edi, 0x808
        __asm _emit 0x69
        __asm _emit 0xFF
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875484E: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x58754851: imul eax, eax, 0x808
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754857: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58754859: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x5875485B: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5875485E: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58754861: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58754864: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58754867: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875486E: pop ecx
        __asm _emit 0x59
        // 0x5875486F: pop edi
        __asm _emit 0x5F
        // 0x58754870: pop esi
        __asm _emit 0x5E
        // 0x58754871: pop ebx
        __asm _emit 0x5B
        // 0x58754872: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58754874: pop ebp
        __asm _emit 0x5D
    }
}
