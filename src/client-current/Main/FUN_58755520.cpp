// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58755520 .. +0x9C bytes.
// Source symbol alias: FUN_58755520.
extern "C" __declspec(naked) void FUN_58755520() {
    __asm {
        // 0x58755520: push ebx
        __asm _emit 0x53
        // 0x58755521: push esi
        __asm _emit 0x56
        // 0x58755522: push edi
        __asm _emit 0x57
        // 0x58755523: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755527: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58755529: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x5875552C: cmp eax, dword ptr [esi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5875552F: ja 0x58755587
        __asm _emit 0x77
        __asm _emit 0x56
        // 0x58755531: mov ecx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x58755534: cmp dword ptr [ecx + edi*4], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xB9
        __asm _emit 0x00
        // 0x58755538: lea eax, [ecx + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB9
        // 0x5875553B: je 0x58755552
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5875553D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5875553F: push edx
        __asm _emit 0x52
        // 0x58755540: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x76
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58755545: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58755548: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875554B: mov dword ptr [eax + edi*4], 0
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755552: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58755555: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755559: push ebx
        __asm _emit 0x53
        // 0x5875555A: mov dword ptr [ecx + edi*4], 1
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755561: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xBF
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x58755566: mov edx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x58755569: mov dword ptr [edx + edi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x5875556C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755570: mov ecx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x58755573: mov edx, dword ptr [ecx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB9
        // 0x58755576: push ebx
        __asm _emit 0x53
        // 0x58755577: push eax
        __asm _emit 0x50
        // 0x58755578: push edx
        __asm _emit 0x52
        // 0x58755579: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x77
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875557E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58755581: pop edi
        __asm _emit 0x5F
        // 0x58755582: pop esi
        __asm _emit 0x5E
        // 0x58755583: pop ebx
        __asm _emit 0x5B
        // 0x58755584: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58755587: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x5875558A: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875558E: push ebx
        __asm _emit 0x53
        // 0x5875558F: mov dword ptr [eax + edi*4], 1
        __asm _emit 0xC7
        __asm _emit 0x04
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755596: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xBF
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5875559B: mov ecx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x5875559E: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587555A2: mov dword ptr [ecx + edi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xB9
        // 0x587555A5: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x587555A8: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x587555AB: push ebx
        __asm _emit 0x53
        // 0x587555AC: push edx
        __asm _emit 0x52
        // 0x587555AD: push ecx
        __asm _emit 0x51
        // 0x587555AE: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x77
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587555B3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587555B6: pop edi
        __asm _emit 0x5F
        // 0x587555B7: pop esi
        __asm _emit 0x5E
        // 0x587555B8: pop ebx
        __asm _emit 0x5B
        // 0x587555B9: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
