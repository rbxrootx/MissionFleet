// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888D390 .. +0x209 bytes.
// Source symbol alias: FUN_5888d390.
extern "C" __declspec(naked) void FUN_5888d390() {
    __asm {
        // 0x5888D390: sub esp, 0x404
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D396: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5888D39B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5888D39D: mov dword ptr [esp + 0x400], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D3A4: movzx eax, word ptr [esp + 0x40c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D3AC: mov edx, dword ptr [esp + 0x410]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D3B3: push ebx
        __asm _emit 0x53
        // 0x5888D3B4: mov ebx, dword ptr [esp + 0x40c]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D3BB: push ebp
        __asm _emit 0x55
        // 0x5888D3BC: push esi
        __asm _emit 0x56
        // 0x5888D3BD: push edi
        __asm _emit 0x57
        // 0x5888D3BE: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5888D3C0: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5888D3C3: ja 0x5888d56d
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D3C9: jmp dword ptr [eax*4 + 0x5888d59c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0xD5
        __asm _emit 0x88
        __asm _emit 0x58
        // 0x5888D3D0: push ebx
        __asm _emit 0x53
        // 0x5888D3D1: push 0x5899fda0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xFD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888D3D6: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D3DC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888D3DF: push eax
        __asm _emit 0x50
        // 0x5888D3E0: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888D3E4: push eax
        __asm _emit 0x50
        // 0x5888D3E5: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D3EB: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888D3EE: jmp 0x5888d56d
        __asm _emit 0xE9
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D3F3: lea edi, [ebp + 0x198]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D3F9: mov ecx, 0x19
        __asm _emit 0xB9
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D3FE: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x5888D400: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5888D402: mov esi, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D408: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5888D40A: je 0x5888d422
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5888D40C: push edx
        __asm _emit 0x52
        // 0x5888D40D: push ebx
        __asm _emit 0x53
        // 0x5888D40E: lea ecx, [esp + 0x218]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D415: push 0x5899fd98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xFD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888D41A: push ecx
        __asm _emit 0x51
        // 0x5888D41B: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5888D41D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5888D420: jmp 0x5888d435
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5888D422: push ebx
        __asm _emit 0x53
        // 0x5888D423: lea edx, [esp + 0x214]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D42A: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D42F: push edx
        __asm _emit 0x52
        // 0x5888D430: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5888D432: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888D435: mov ecx, dword ptr [ebp + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D43B: lea eax, [esp + 0x210]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D442: push eax
        __asm _emit 0x50
        // 0x5888D443: call 0x588d28a0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888D448: mov ecx, dword ptr [ebp + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D44E: call 0x588d2820
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888D453: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D459: push ebx
        __asm _emit 0x53
        // 0x5888D45A: push 0x5899fd78
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xFD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888D45F: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5888D461: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888D464: push eax
        __asm _emit 0x50
        // 0x5888D465: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888D469: push ecx
        __asm _emit 0x51
        // 0x5888D46A: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5888D46C: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D472: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888D475: cmp word ptr [edx + 0x204], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x5888D47D: jne 0x5888d56d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D483: push 0x5899fd58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0xFD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888D488: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5888D48A: push eax
        __asm _emit 0x50
        // 0x5888D48B: lea eax, [esp + 0x118]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D492: push eax
        __asm _emit 0x50
        // 0x5888D493: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5888D495: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888D498: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5888D49D: lea ecx, [esp + 0x114]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D4A4: push ecx
        __asm _emit 0x51
        // 0x5888D4A5: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5888D4A7: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888D4AC: jmp 0x5888d56d
        __asm _emit 0xE9
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D4B1: push 0x5899fd38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xFD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888D4B6: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D4BC: push eax
        __asm _emit 0x50
        // 0x5888D4BD: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888D4C1: push edx
        __asm _emit 0x52
        // 0x5888D4C2: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D4C8: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888D4CB: jmp 0x5888d56d
        __asm _emit 0xE9
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D4D0: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x5888D4D2: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5888D4D4: push 0x5899fd18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0xFD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888D4D9: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D4DF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888D4E2: push eax
        __asm _emit 0x50
        // 0x5888D4E3: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5888D4E7: push eax
        __asm _emit 0x50
        // 0x5888D4E8: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D4EE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5888D4F1: jmp 0x5888d56d
        __asm _emit 0xEB
        __asm _emit 0x7A
        // 0x5888D4F3: push 0x5899fcf8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xFC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888D4F8: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D4FE: push eax
        __asm _emit 0x50
        // 0x5888D4FF: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888D503: push ecx
        __asm _emit 0x51
        // 0x5888D504: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D50A: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D510: movzx eax, word ptr [ecx + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D517: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888D51A: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5888D51E: je 0x5888d526
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888D520: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x5888D524: jne 0x5888d537
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x5888D526: mov ecx, dword ptr [ecx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D52C: call 0x588a6e30
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5888D531: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D537: mov ecx, dword ptr [ecx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D53D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888D53F: jmp 0x5888d568
        __asm _emit 0xEB
        __asm _emit 0x27
        // 0x5888D541: push 0x5899fcd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0xFC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888D546: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D54C: push eax
        __asm _emit 0x50
        // 0x5888D54D: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5888D551: push edx
        __asm _emit 0x52
        // 0x5888D552: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D558: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D55D: mov ecx, dword ptr [eax + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D563: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888D566: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888D568: call 0x588a5390
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5888D56D: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5888D572: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5888D576: push ecx
        __asm _emit 0x51
        // 0x5888D577: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5888D579: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888D57E: mov ecx, dword ptr [esp + 0x410]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D585: pop edi
        __asm _emit 0x5F
        // 0x5888D586: pop esi
        __asm _emit 0x5E
        // 0x5888D587: pop ebp
        __asm _emit 0x5D
        // 0x5888D588: pop ebx
        __asm _emit 0x5B
        // 0x5888D589: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5888D58B: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xF6
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5888D590: add esp, 0x404
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D596: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
