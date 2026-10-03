// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 378 bytes across one range.

// Ghidra range: 0x58854440 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_58854440_segment_00() {
    __asm {
        // 0x58854440: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58854443: push ebx
        __asm _emit 0x53
        // 0x58854444: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58854446: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x5885444A: push ebp
        __asm _emit 0x55
        // 0x5885444B: push esi
        __asm _emit 0x56
        // 0x5885444C: push edi
        __asm _emit 0x57
        // 0x5885444D: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58854451: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x58854453: je 0x588545b0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854459: mov esi, dword ptr [ebx + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x4C
        // 0x5885445C: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58854460: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58854462: je 0x588544ab
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x58854464: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x58854469: jge 0x58854490
        __asm _emit 0x7D
        __asm _emit 0x25
        // 0x5885446B: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5885446F: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58854473: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58854475: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x58854478: push eax
        __asm _emit 0x50
        // 0x58854479: push ecx
        __asm _emit 0x51
        // 0x5885447A: push edi
        __asm _emit 0x57
        // 0x5885447B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885447D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5885447F: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x48
        // 0x58854482: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58854484: jne 0x58854464
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x58854486: jmp 0x588544ab
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x58854488: jmp 0x58854490
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5885448A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854490: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58854494: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58854498: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885449A: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x5885449D: push ecx
        __asm _emit 0x51
        // 0x5885449E: push edx
        __asm _emit 0x52
        // 0x5885449F: push edi
        __asm _emit 0x57
        // 0x588544A0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588544A2: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588544A4: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x48
        // 0x588544A7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588544A9: jne 0x58854490
        __asm _emit 0x75
        __asm _emit 0xE5
        // 0x588544AB: mov eax, dword ptr [ebx + 0x2ec]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588544B1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588544B3: jle 0x588545b0
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588544B9: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588544BF: cmp word ptr [ecx + 0x218cc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xCC
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588544C7: je 0x588544d6
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588544C9: fld dword ptr [0x5899e9ac]
        __asm _emit 0xD9
        __asm _emit 0x05
        __asm _emit 0xAC
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588544CF: mov edx, 0x78
        __asm _emit 0xBA
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588544D4: jmp 0x588544e1
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588544D6: fld dword ptr [0x5899e9a8]
        __asm _emit 0xD9
        __asm _emit 0x05
        __asm _emit 0xA8
        __asm _emit 0xE9
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588544DC: mov edx, 0x3c
        __asm _emit 0xBA
        __asm _emit 0x3C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588544E1: mov esi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x588544E4: fstp dword ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588544E8: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x588544EA: cmp dword ptr [ecx + 0x21cc8], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xC8
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588544F1: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588544F5: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588544F9: mov ebp, 0x201
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588544FE: fmul dword ptr [esp + 0x10]
        __asm _emit 0xD8
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58854502: jne 0x5885451e
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58854504: lea ebx, [esi + 0x34f]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x4F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885450A: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5885450F: lea edx, [eax + esi + 0x34f]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x30
        __asm _emit 0x4F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854516: add esi, 0x3bd
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885451C: jmp 0x58854536
        __asm _emit 0xEB
        __asm _emit 0x18
        // 0x5885451E: lea ebx, [esi + 0x347]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854524: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58854529: lea edx, [eax + esi + 0x347]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854530: add esi, 0x3b5
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xB5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854536: mov eax, dword ptr [0x58a24730]
        __asm _emit 0xA1
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885453B: cmp dword ptr [eax + 0x164], 0xcb
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854545: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58854547: jle 0x58854564
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x58854549: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854550: je 0x58854564
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58854552: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854558: mov eax, dword ptr [eax + 0x32c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885455E: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58854562: jmp 0x5885456c
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58854564: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885456C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885456E: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854573: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58854576: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x58854578: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x5885457A: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885457D: push ebp
        __asm _emit 0x55
        // 0x5885457E: mov ecx, 0x223
        __asm _emit 0xB9
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854583: mov dword ptr [eax + 8], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x58854586: push ebx
        __asm _emit 0x53
        // 0x58854587: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5885458A: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5885458E: push edi
        __asm _emit 0x57
        // 0x5885458F: call 0x58903d60
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xF7
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58854594: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58854598: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885459C: mov ecx, dword ptr [ecx + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588545A2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588545A4: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x588545A7: push eax
        __asm _emit 0x50
        // 0x588545A8: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588545AC: push eax
        __asm _emit 0x50
        // 0x588545AD: push edi
        __asm _emit 0x57
        // 0x588545AE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588545B0: pop edi
        __asm _emit 0x5F
        // 0x588545B1: pop esi
        __asm _emit 0x5E
        // 0x588545B2: pop ebp
        __asm _emit 0x5D
        // 0x588545B3: pop ebx
        __asm _emit 0x5B
        // 0x588545B4: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588545B7: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
