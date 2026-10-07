// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58808080 .. +0x9E3 bytes.
// Source symbol alias: FUN_58808080.
extern "C" __declspec(naked) void FUN_58808080() {
    __asm {
        // 0x58808080: sub esp, 0x334
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808086: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5880808B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5880808D: mov dword ptr [esp + 0x330], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808094: push ebp
        __asm _emit 0x55
        // 0x58808095: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58808097: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5880809B: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5880809D: je 0x58808a4d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAA
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588080A3: push ebx
        __asm _emit 0x53
        // 0x588080A4: push esi
        __asm _emit 0x56
        // 0x588080A5: push edi
        __asm _emit 0x57
        // 0x588080A6: call 0x588075e0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588080AB: mov cx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x588080AF: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588080B5: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588080BA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588080BD: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588080C2: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588080C4: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588080C9: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588080CC: je 0x588080e3
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588080CE: mov cx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x588080D2: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588080D5: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588080DA: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588080DD: jne 0x588082c1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588080E3: mov eax, dword ptr [ebp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x5C
        // 0x588080E6: mov ecx, dword ptr [ebp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x2C
        // 0x588080E9: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588080EB: je 0x58808117
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588080ED: jle 0x58808100
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x588080EF: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588080F1: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x588080F3: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x588080F6: jg 0x588080fb
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x588080F8: push eax
        __asm _emit 0x50
        // 0x588080F9: jmp 0x58808110
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588080FB: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x588080FE: jmp 0x5880810f
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58808100: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58808102: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58808104: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58808107: jg 0x5880810c
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x58808109: push eax
        __asm _emit 0x50
        // 0x5880810A: jmp 0x58808110
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5880810C: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x5880810F: push ecx
        __asm _emit 0x51
        // 0x58808110: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58808112: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xAC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58808117: mov eax, dword ptr [ebp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x58
        // 0x5880811A: mov ecx, dword ptr [ebp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x28
        // 0x5880811D: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5880811F: je 0x5880814b
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58808121: jle 0x58808134
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x58808123: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58808125: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58808127: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x5880812A: jg 0x5880812f
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x5880812C: push eax
        __asm _emit 0x50
        // 0x5880812D: jmp 0x58808144
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5880812F: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x58808132: jmp 0x58808143
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x58808134: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58808136: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x58808138: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x5880813B: jg 0x58808140
        __asm _emit 0x7F
        __asm _emit 0x03
        // 0x5880813D: push eax
        __asm _emit 0x50
        // 0x5880813E: jmp 0x58808144
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58808140: add ecx, -0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xE0
        // 0x58808143: push ecx
        __asm _emit 0x51
        // 0x58808144: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58808146: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xAB
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880814B: mov eax, dword ptr [ebp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x58
        // 0x5880814E: cmp eax, dword ptr [ebp + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0x28
        // 0x58808151: jne 0x588082c1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808157: mov ecx, dword ptr [ebp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x5C
        // 0x5880815A: cmp ecx, dword ptr [ebp + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0x2C
        // 0x5880815D: jne 0x588082c1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808163: mov dx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x58808167: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880816C: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5880816F: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808174: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58808177: jne 0x58808271
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880817D: mov dx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x58808181: mov eax, 0xe2ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808186: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58808189: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880818E: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x58808191: mov word ptr [ebp + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x58808195: or word ptr [ebp + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4D
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5880819A: movzx eax, word ptr [ebp + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588081A1: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588081A5: je 0x588081ad
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588081A7: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588081AB: jne 0x588081c5
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588081AD: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588081B3: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588081B6: movzx ecx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588081BD: push ecx
        __asm _emit 0x51
        // 0x588081BE: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588081C0: call 0x58805790
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588081C5: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588081CB: call 0x58894820
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xC6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588081D0: movzx edx, byte ptr [ebp + 0x1b1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xB1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588081D7: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588081DC: mov ecx, dword ptr [eax + 0x49c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588081E2: and edx, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x7F
        // 0x588081E5: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x588081E7: push edx
        __asm _emit 0x52
        // 0x588081E8: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xF1
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588081ED: movzx ecx, word ptr [ebp + 0x1b6]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8D
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588081F4: mov edx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588081FA: mov dword ptr [edx + 0xac], ecx
        __asm _emit 0x89
        __asm _emit 0x8A
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808200: cmp word ptr [ebp + 0x1b6], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xBD
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808207: jne 0x588082c1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880820D: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808212: push 0x5899d5ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0xD5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58808217: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58808219: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880821F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58808222: push eax
        __asm _emit 0x50
        // 0x58808223: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58808228: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880822D: push 0x5899d58c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58808232: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58808234: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880823A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5880823D: push eax
        __asm _emit 0x50
        // 0x5880823E: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58808243: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808248: push 0x5899d56c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0xD5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880824D: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x5880824F: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58808255: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58808258: push eax
        __asm _emit 0x50
        // 0x58808259: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x4F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5880825E: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58808264: push ebx
        __asm _emit 0x53
        // 0x58808265: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880826A: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x4F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5880826F: jmp 0x588082c1
        __asm _emit 0xEB
        __asm _emit 0x50
        // 0x58808271: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x58808275: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880827A: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5880827D: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808282: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58808285: jne 0x588082c1
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x58808287: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58808289: call 0x58805b30
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880828E: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x58808292: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808297: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5880829A: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880829F: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588082A2: mov word ptr [ebp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x588082A6: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588082AB: and word ptr [ebp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x588082AF: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588082B4: and word ptr [ebp + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x588082B8: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588082BD: and word ptr [ebp + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x55
        __asm _emit 0x24
        // 0x588082C1: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x588082C5: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588082CA: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588082CD: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588082D2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588082D5: jne 0x5880830e
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x588082D7: mov ecx, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x60
        // 0x588082DA: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588082DC: je 0x5880830e
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588082DE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588082E0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588082E3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588082E5: mov eax, dword ptr [0x58a24780]
        __asm _emit 0xA1
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588082EA: cmp eax, dword ptr [ebp + 0x60]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0x60
        // 0x588082ED: jne 0x588082f5
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x588082EF: mov dword ptr [0x58a24780], ebx
        __asm _emit 0x89
        __asm _emit 0x1D
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588082F5: cmp dword ptr [0x589c9034], ebx
        __asm _emit 0x39
        __asm _emit 0x1D
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588082FB: je 0x5880830e
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588082FD: mov ecx, dword ptr [ebp + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x60
        // 0x58808300: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58808302: je 0x5880830b
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58808304: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58808306: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58808308: push edi
        __asm _emit 0x57
        // 0x58808309: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880830B: mov dword ptr [ebp + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x60
        // 0x5880830E: mov cx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x58808312: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808317: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5880831A: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880831F: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58808322: jne 0x58808a06
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDE
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808328: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880832E: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x58808331: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58808333: je 0x58808345
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58808335: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58808337: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5880833A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5880833C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880833E: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x58808341: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58808343: jne 0x58808335
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58808345: mov eax, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x6C
        // 0x58808348: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5880834A: jne 0x58808433
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808350: cmp dword ptr [ebp + 0x68], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x7D
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58808357: jne 0x5880842a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880835D: mov esi, dword ptr [ebp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808363: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x58808366: mov eax, dword ptr [ebp + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880836C: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5880836E: jne 0x5880838e
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58808370: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58808373: cmp edx, dword ptr [ebp + 0xec]
        __asm _emit 0x3B
        __asm _emit 0x95
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808379: jne 0x5880838e
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x5880837B: mov dword ptr [ebp + 0x68], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x68
        // 0x5880837E: mov ecx, dword ptr [0x58a24810]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58808384: call 0x587e8010
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xFC
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58808389: jmp 0x58808497
        __asm _emit 0xE9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880838E: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58808390: mov ecx, dword ptr [ebp + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808396: sub ecx, dword ptr [esi + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58808399: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x5880839C: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x5880839F: ja 0x588083c6
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x588083A1: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588083A4: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588083A7: ja 0x588083bd
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x588083A9: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588083AB: jge 0x588083b2
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588083AD: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x588083B0: jmp 0x588083d1
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x588083B2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588083B4: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588083B6: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x588083B9: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x588083BB: jmp 0x588083d1
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588083BD: cdq
        __asm _emit 0x99
        // 0x588083BE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588083C0: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588083C2: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x588083C4: jmp 0x588083d1
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588083C6: cdq
        __asm _emit 0x99
        // 0x588083C7: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588083CA: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588083CC: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588083CE: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x588083D1: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x588083D4: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x588083D7: ja 0x58808417
        __asm _emit 0x77
        __asm _emit 0x3E
        // 0x588083D9: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x588083DC: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588083DF: ja 0x58808405
        __asm _emit 0x77
        __asm _emit 0x24
        // 0x588083E1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588083E3: jge 0x588083f3
        __asm _emit 0x7D
        __asm _emit 0x0E
        // 0x588083E5: add dword ptr [esi + 0x50], edi
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x588083E8: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588083EB: add dword ptr [esi + 0x54], eax
        __asm _emit 0x01
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588083EE: jmp 0x58808497
        __asm _emit 0xE9
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588083F3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588083F5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588083F7: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x588083FA: add dword ptr [esi + 0x50], edi
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x588083FD: add dword ptr [esi + 0x54], eax
        __asm _emit 0x01
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58808400: jmp 0x58808497
        __asm _emit 0xE9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808405: add dword ptr [esi + 0x50], edi
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x58808408: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5880840A: cdq
        __asm _emit 0x99
        // 0x5880840B: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5880840D: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5880840F: add dword ptr [esi + 0x54], eax
        __asm _emit 0x01
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58808412: jmp 0x58808497
        __asm _emit 0xE9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808417: add dword ptr [esi + 0x50], edi
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5880841A: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5880841C: cdq
        __asm _emit 0x99
        // 0x5880841D: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58808420: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58808422: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58808425: add dword ptr [esi + 0x54], eax
        __asm _emit 0x01
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58808428: jmp 0x58808497
        __asm _emit 0xEB
        __asm _emit 0x6D
        // 0x5880842A: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5880842C: call 0x58805690
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xD2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58808431: jmp 0x58808497
        __asm _emit 0xEB
        __asm _emit 0x64
        // 0x58808433: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58808438: jne 0x58808497
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x5880843A: add dword ptr [ebp + 0xa8], edi
        __asm _emit 0x01
        __asm _emit 0xBD
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808440: mov eax, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808446: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58808448: mov ecx, dword ptr [ebp + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880844E: jle 0x5880847b
        __asm _emit 0x7E
        __asm _emit 0x2B
        // 0x58808450: cmp ecx, dword ptr [ebp + 0xac]
        __asm _emit 0x3B
        __asm _emit 0x8D
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808456: jl 0x58808497
        __asm _emit 0x7C
        __asm _emit 0x3F
        // 0x58808458: mov ecx, dword ptr [ebp + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880845E: dec eax
        __asm _emit 0x48
        // 0x5880845F: mov dword ptr [ebp + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808465: mov dword ptr [ebp + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880846B: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5880846E: mov ecx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808474: call 0x588a5580
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xD1
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x58808479: jmp 0x58808497
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x5880847B: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58808481: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58808484: movzx ecx, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880848B: push ecx
        __asm _emit 0x51
        // 0x5880848C: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58808492: call 0x587b9a90
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x15
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58808497: mov edx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880849D: movzx eax, word ptr [edx + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588084A4: add eax, -4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFC
        // 0x588084A7: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x588084AA: ja 0x58808507
        __asm _emit 0x77
        __asm _emit 0x5B
        // 0x588084AC: jmp dword ptr [eax*4 + 0x58808a64]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x8A
        __asm _emit 0x80
        __asm _emit 0x58
        // 0x588084B3: lea eax, [ebp + 0x2cc]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588084B9: push eax
        __asm _emit 0x50
        // 0x588084BA: jmp 0x58808500
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x588084BC: lea ecx, [ebp + 0x2d4]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588084C2: jmp 0x588084ff
        __asm _emit 0xEB
        __asm _emit 0x3B
        // 0x588084C4: lea edx, [ebp + 0x2d0]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588084CA: push edx
        __asm _emit 0x52
        // 0x588084CB: jmp 0x58808500
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x588084CD: lea eax, [ebp + 0x2d8]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588084D3: push eax
        __asm _emit 0x50
        // 0x588084D4: jmp 0x58808500
        __asm _emit 0xEB
        __asm _emit 0x2A
        // 0x588084D6: lea ecx, [ebp + 0x2e4]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588084DC: jmp 0x588084ff
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x588084DE: lea edx, [ebp + 0x2e8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588084E4: push edx
        __asm _emit 0x52
        // 0x588084E5: jmp 0x58808500
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x588084E7: cmp word ptr [ebp + 0x1b8], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588084EE: jne 0x58808507
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x588084F0: lea eax, [ebp + 0x2e0]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588084F6: push eax
        __asm _emit 0x50
        // 0x588084F7: jmp 0x58808500
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x588084F9: lea ecx, [ebp + 0x2ec]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588084FF: push ecx
        __asm _emit 0x51
        // 0x58808500: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58808502: call 0x588060f0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58808507: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880850D: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58808510: mov edi, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58808516: cmp dword ptr [eax + 0x6074], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x74
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880851C: je 0x58808840
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808522: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58808528: cmp word ptr [ecx + 0x204], 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x58808530: je 0x58808840
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808536: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58808538: call 0x58805e70
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880853D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880853F: je 0x58808572
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x58808541: mov esi, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808547: cmp dword ptr [esi + 0x200], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880854D: jne 0x58808572
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x5880854F: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58808551: call 0x58804680
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58808556: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58808558: je 0x58808572
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5880855A: cmp dword ptr [esi + 0xa4], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808560: jne 0x58808592
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x58808562: cmp dword ptr [esi + 0xa8], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808568: jne 0x58808592
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x5880856A: inc dword ptr [ebp + 0x2b0]
        __asm _emit 0xFF
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808570: jmp 0x58808592
        __asm _emit 0xEB
        __asm _emit 0x20
        // 0x58808572: mov dword ptr [ebp + 0x2f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808578: mov dword ptr [ebp + 0x2b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880857E: mov dword ptr [ebp + 0x300], 0x190
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808588: mov dword ptr [ebp + 0x308], 0xc8
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808592: mov edx, dword ptr [ebp + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808598: cmp edx, dword ptr [ebp + 0x308]
        __asm _emit 0x3B
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880859E: jbe 0x588087bc
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588085A4: cmp dword ptr [ebp + 0x2f8], ebx
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588085AA: jne 0x588087c8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588085B0: mov eax, dword ptr [ebp + 0x300]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588085B6: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588085B8: mov dword ptr [ebp + 0x2fc], 1
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588085C2: jle 0x5880876e
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588085C8: cdq
        __asm _emit 0x99
        // 0x588085C9: mov ecx, 0x19
        __asm _emit 0xB9
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588085CE: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588085D0: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588085D2: jne 0x58808766
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588085D8: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588085DE: push eax
        __asm _emit 0x50
        // 0x588085DF: push 0x5899d538
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xD5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588085E4: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588085E6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588085E9: push eax
        __asm _emit 0x50
        // 0x588085EA: lea edx, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588085EE: push edx
        __asm _emit 0x52
        // 0x588085EF: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x588085F1: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588085F7: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588085FA: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588085FF: lea eax, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58808603: push eax
        __asm _emit 0x50
        // 0x58808604: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x4C
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58808609: mov ecx, dword ptr [ebp + 0x300]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880860F: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58808614: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58808616: sar edx, 3
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x58808619: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5880861B: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5880861E: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58808620: push ecx
        __asm _emit 0x51
        // 0x58808621: push 0x5899d504
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xD5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58808626: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58808628: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5880862B: push eax
        __asm _emit 0x50
        // 0x5880862C: lea edx, [esp + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58808630: push edx
        __asm _emit 0x52
        // 0x58808631: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58808633: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x58808635: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58808639: push ebx
        __asm _emit 0x53
        // 0x5880863A: push eax
        __asm _emit 0x50
        // 0x5880863B: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58808640: mov eax, dword ptr [0x58a0b458]
        __asm _emit 0xA1
        __asm _emit 0x58
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58808645: mov ecx, dword ptr [0x58a0b450]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880864B: mov edx, dword ptr [0x58a0b454]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58808651: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58808655: mov eax, dword ptr [0x58a0b464]
        __asm _emit 0xA1
        __asm _emit 0x64
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880865A: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5880865E: mov ecx, dword ptr [0x58a0b45c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x5C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58808664: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58808668: mov edx, dword ptr [0x58a0b460]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5880866E: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58808672: lea eax, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58808676: mov dword ptr [esp + 0x34], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5880867A: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5880867D: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58808681: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x58808684: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58808686: inc eax
        __asm _emit 0x40
        // 0x58808687: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58808689: jne 0x58808684
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5880868B: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5880868D: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808692: lea ecx, [esp + 0x144]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808699: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880869B: push ecx
        __asm _emit 0x51
        // 0x5880869C: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5880869E: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x45
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x588086A3: mov ecx, 0xc
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588086A8: lea esi, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588086AC: lea edi, [esp + 0x14c]
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588086B3: lea eax, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588086B7: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x588086B9: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588086BC: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x588086BF: nop
        __asm _emit 0x90
        // 0x588086C0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588086C2: inc eax
        __asm _emit 0x40
        // 0x588086C3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588086C5: jne 0x588086c0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588086C7: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x588086C9: push eax
        __asm _emit 0x50
        // 0x588086CA: lea edx, [esp + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588086CE: push edx
        __asm _emit 0x52
        // 0x588086CF: lea eax, [esp + 0x178]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588086D6: push eax
        __asm _emit 0x50
        // 0x588086D7: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x46
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x588086DC: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588086DF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588086E1: add ebx, 0x31
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x31
        // 0x588086E4: push ebx
        __asm _emit 0x53
        // 0x588086E5: lea ecx, [esp + 0x148]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588086EC: push ecx
        __asm _emit 0x51
        // 0x588086ED: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588086F3: push 0x800
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588086F8: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588086FA: call 0x587b8110
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xFA
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x588086FF: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58808704: mov esi, 0xb
        __asm _emit 0xBE
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808709: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880870F: jle 0x58808725
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58808711: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808718: je 0x58808725
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5880871A: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808720: mov ecx, dword ptr [edx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x2C
        // 0x58808723: jmp 0x58808727
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58808725: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58808727: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880872C: push eax
        __asm _emit 0x50
        // 0x5880872D: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xF2
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58808732: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58808737: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880873D: jle 0x58808753
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5880873F: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808746: je 0x58808753
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58808748: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880874E: mov ecx, dword ptr [ecx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x2C
        // 0x58808751: jmp 0x58808755
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58808753: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58808755: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58808757: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5880875A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880875C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880875E: mov edi, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58808764: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58808766: dec dword ptr [ebp + 0x300]
        __asm _emit 0xFF
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880876C: jmp 0x588087bc
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x5880876E: mov ecx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808774: cmp dword ptr [ecx + 0xa4], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880877A: je 0x58808790
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5880877C: mov dword ptr [ebp + 0x308], 0x64
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808786: mov dword ptr [ebp + 0x300], 0xffffff9c
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58808790: cmp dword ptr [ecx + 0xa8], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808796: je 0x588087ac
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58808798: mov dword ptr [ebp + 0x308], 0x96
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588087A2: mov dword ptr [ebp + 0x300], 0xffffff06
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588087AC: push ebx
        __asm _emit 0x53
        // 0x588087AD: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x8E
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588087B2: mov dword ptr [ebp + 0x2f8], 1
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588087BC: cmp dword ptr [ebp + 0x2f8], ebx
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588087C2: je 0x58808840
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588087C8: mov eax, dword ptr [ebp + 0x300]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588087CE: cmp eax, 0xffffff06
        __asm _emit 0x3D
        __asm _emit 0x06
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588087D3: jge 0x58808804
        __asm _emit 0x7D
        __asm _emit 0x2F
        // 0x588087D5: mov ecx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588087DB: cmp dword ptr [ecx + 0xa8], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588087E1: je 0x58808804
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588087E3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588087E5: mov dword ptr [ebp + 0x300], 0x96
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588087EF: mov dword ptr [ebp + 0x2f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9D
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588087F5: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x8E
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588087FA: mov ecx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808800: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58808802: jmp 0x58808835
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x58808804: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58808806: jne 0x5880881c
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58808808: mov ecx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880880E: cmp dword ptr [ecx + 0xa4], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808814: jne 0x5880881c
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58808816: push ebx
        __asm _emit 0x53
        // 0x58808817: call 0x588a6f70
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xE7
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5880881C: cmp dword ptr [ebp + 0x300], -0x64
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9C
        // 0x58808823: jne 0x5880883a
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58808825: mov ecx, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880882B: cmp dword ptr [ecx + 0xa4], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808831: je 0x5880883a
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58808833: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58808835: call 0x588a6f70
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xE7
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5880883A: dec dword ptr [ebp + 0x300]
        __asm _emit 0xFF
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808840: cmp dword ptr [ebp + 0x2c4], ebx
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808846: je 0x58808a2a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880884C: mov eax, dword ptr [ebp + 0x2c8]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808852: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58808854: jle 0x58808927
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880885A: cdq
        __asm _emit 0x99
        // 0x5880885B: mov ecx, 0x19
        __asm _emit 0xB9
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808860: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58808862: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x58808864: jne 0x5880891c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880886A: push eax
        __asm _emit 0x50
        // 0x5880886B: push 0x5899d4dc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xD4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58808870: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58808876: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58808879: push eax
        __asm _emit 0x50
        // 0x5880887A: lea edx, [esp + 0x248]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808881: push edx
        __asm _emit 0x52
        // 0x58808882: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58808884: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58808889: mov ecx, dword ptr [eax + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880888F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58808892: call 0x58908870
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58808897: push 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5880889C: lea ecx, [esp + 0x244]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588088A3: push ecx
        __asm _emit 0x51
        // 0x588088A4: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588088AA: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x49
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588088AF: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588088B4: mov esi, 0xb
        __asm _emit 0xBE
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588088B9: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588088BF: jle 0x588088d4
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588088C1: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588088C7: je 0x588088d4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588088C9: mov edx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588088CF: mov ecx, dword ptr [edx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x2C
        // 0x588088D2: jmp 0x588088d6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588088D4: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588088D6: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588088DB: push eax
        __asm _emit 0x50
        // 0x588088DC: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xF0
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588088E1: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588088E6: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588088EC: jle 0x58808912
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x588088EE: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588088F4: je 0x58808912
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588088F6: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588088FC: mov ecx, dword ptr [ecx + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x2C
        // 0x588088FF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58808901: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58808904: push ebx
        __asm _emit 0x53
        // 0x58808905: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58808907: dec dword ptr [ebp + 0x2c8]
        __asm _emit 0xFF
        __asm _emit 0x8D
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880890D: jmp 0x58808a2a
        __asm _emit 0xE9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808912: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58808914: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58808916: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58808919: push ebx
        __asm _emit 0x53
        // 0x5880891A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5880891C: dec dword ptr [ebp + 0x2c8]
        __asm _emit 0xFF
        __asm _emit 0x8D
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808922: jmp 0x58808a2a
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808927: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880892D: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58808930: cmp dword ptr [edx + 0x6074], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x74
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808936: je 0x58808a2a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880893C: mov esi, dword ptr [ebp + 0x174]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808942: mov ecx, dword ptr [esi + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808948: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5880894A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5880894D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5880894F: mov ecx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808955: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58808957: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5880895A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5880895C: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58808961: movzx eax, word ptr [eax + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808968: add eax, -4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFC
        // 0x5880896B: cmp eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x5880896E: ja 0x58808a2a
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808974: jmp dword ptr [eax*4 + 0x58808a98]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x8A
        __asm _emit 0x80
        __asm _emit 0x58
        // 0x5880897B: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58808981: call 0x587baf40
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x25
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58808986: jmp 0x58808a2a
        __asm _emit 0xE9
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880898B: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58808991: call 0x587ba140
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x17
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58808996: jmp 0x58808a2a
        __asm _emit 0xE9
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880899B: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588089A1: call 0x587ba1a0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x17
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588089A6: jmp 0x58808a2a
        __asm _emit 0xE9
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588089AB: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588089B1: call 0x587ba1d0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x18
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588089B6: jmp 0x58808a2a
        __asm _emit 0xEB
        __asm _emit 0x72
        // 0x588089B8: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588089BE: call 0x587ba170
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x17
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588089C3: jmp 0x58808a2a
        __asm _emit 0xEB
        __asm _emit 0x65
        // 0x588089C5: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588089CB: call 0x587bb230
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x28
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588089D0: jmp 0x58808a2a
        __asm _emit 0xEB
        __asm _emit 0x58
        // 0x588089D2: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588089D8: call 0x587bb260
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588089DD: jmp 0x58808a2a
        __asm _emit 0xEB
        __asm _emit 0x4B
        // 0x588089DF: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588089E5: call 0x587bb2c0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x28
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588089EA: jmp 0x58808a2a
        __asm _emit 0xEB
        __asm _emit 0x3E
        // 0x588089EC: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588089F2: call 0x587bb290
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x28
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588089F7: jmp 0x58808a2a
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x588089F9: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588089FF: call 0x587ba200
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x17
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58808A04: jmp 0x58808a2a
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x58808A06: mov cx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x24
        // 0x58808A0A: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58808A0D: mov eax, 0xd00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808A12: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58808A15: jne 0x58808a2a
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x58808A17: cmp dword ptr [ebp + 0x274], 0x64
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        // 0x58808A1E: jne 0x58808a2a
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x58808A20: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58808A23: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58808A26: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58808A28: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58808A2A: mov ecx, dword ptr [ebp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x3C
        // 0x58808A2D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58808A2F: je 0x58808a4a
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58808A31: mov esi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x38
        // 0x58808A34: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58808A36: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58808A39: cmp esi, dword ptr [ebp + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x75
        __asm _emit 0x3C
        // 0x58808A3C: je 0x58808a48
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58808A3E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58808A40: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58808A42: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58808A44: jne 0x58808a31
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58808A46: jmp 0x58808a4a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58808A48: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58808A4A: pop edi
        __asm _emit 0x5F
        // 0x58808A4B: pop esi
        __asm _emit 0x5E
        // 0x58808A4C: pop ebx
        __asm _emit 0x5B
        // 0x58808A4D: mov ecx, dword ptr [esp + 0x334]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808A54: pop ebp
        __asm _emit 0x5D
        // 0x58808A55: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58808A57: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x41
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58808A5C: add esp, 0x334
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58808A62: ret
        __asm _emit 0xC3
    }
}
