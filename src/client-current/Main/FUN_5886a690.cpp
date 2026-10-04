// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5886A690 .. +0x69D bytes.
// Source symbol alias: FUN_5886a690.
extern "C" __declspec(naked) void FUN_5886a690() {
    __asm {
        // 0x5886A690: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5886A692: push 0x58985e21
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x5E
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5886A697: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A69D: push eax
        __asm _emit 0x50
        // 0x5886A69E: push ecx
        __asm _emit 0x51
        // 0x5886A69F: push ebx
        __asm _emit 0x53
        // 0x5886A6A0: push ebp
        __asm _emit 0x55
        // 0x5886A6A1: push esi
        __asm _emit 0x56
        // 0x5886A6A2: push edi
        __asm _emit 0x57
        // 0x5886A6A3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5886A6A8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5886A6AA: push eax
        __asm _emit 0x50
        // 0x5886A6AB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5886A6AF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A6B5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5886A6B7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5886A6BB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886A6BF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5886A6C3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5886A6C7: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5886A6CB: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5886A6CF: push eax
        __asm _emit 0x50
        // 0x5886A6D0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5886A6D4: push ecx
        __asm _emit 0x51
        // 0x5886A6D5: push edx
        __asm _emit 0x52
        // 0x5886A6D6: push ebp
        __asm _emit 0x55
        // 0x5886A6D7: push ebx
        __asm _emit 0x53
        // 0x5886A6D8: push eax
        __asm _emit 0x50
        // 0x5886A6D9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5886A6DB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x8A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886A6E0: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5886A6E6: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5886A6EB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5886A6ED: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x5886A6F0: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x5886A6F3: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A6FA: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x5886A6FD: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5886A6FF: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5886A703: mov dword ptr [esi], 0x5899ed20
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0xED
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5886A709: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x25
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5886A70E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5886A711: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886A715: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5886A71A: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5886A71C: je 0x5886a754
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5886A71E: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886A724: cmp dword ptr [ecx + 0x164], 6
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x5886A72B: jle 0x5886a740
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5886A72D: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A733: je 0x5886a740
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5886A735: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A73B: mov ecx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x18
        // 0x5886A73E: jmp 0x5886a742
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886A740: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5886A742: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A747: push ebp
        __asm _emit 0x55
        // 0x5886A748: push ebx
        __asm _emit 0x53
        // 0x5886A749: push ecx
        __asm _emit 0x51
        // 0x5886A74A: push esi
        __asm _emit 0x56
        // 0x5886A74B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886A74D: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x75
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5886A752: jmp 0x5886a756
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886A754: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886A756: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5886A758: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5886A75D: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5886A760: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5886A765: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5886A768: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886A76C: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x5886A771: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5886A773: je 0x5886a7ab
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5886A775: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886A77B: cmp dword ptr [ecx + 0x164], 7
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5886A782: jle 0x5886a797
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5886A784: cmp dword ptr [ecx + 0x18c], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A78A: je 0x5886a797
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5886A78C: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A792: mov ecx, dword ptr [edx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x1C
        // 0x5886A795: jmp 0x5886a799
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886A797: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5886A799: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A79E: push ebp
        __asm _emit 0x55
        // 0x5886A79F: push ebx
        __asm _emit 0x53
        // 0x5886A7A0: push ecx
        __asm _emit 0x51
        // 0x5886A7A1: push esi
        __asm _emit 0x56
        // 0x5886A7A2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886A7A4: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x74
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5886A7A9: jmp 0x5886a7ad
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886A7AB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886A7AD: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886A7B2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886A7B4: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5886A7B9: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5886A7BC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886A7C1: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5886A7C4: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A7C9: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5886A7CD: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5886A7CF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5886A7D4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5886A7D7: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886A7DB: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5886A7E0: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5886A7E2: je 0x5886a81d
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5886A7E4: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886A7EA: cmp dword ptr [ecx + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x5886A7F1: jle 0x5886a809
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5886A7F3: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A7F9: je 0x5886a809
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5886A7FB: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A801: add ecx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A807: jmp 0x5886a80b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886A809: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5886A80B: push 0x2710
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A810: push ebp
        __asm _emit 0x55
        // 0x5886A811: push ebx
        __asm _emit 0x53
        // 0x5886A812: push ecx
        __asm _emit 0x51
        // 0x5886A813: push esi
        __asm _emit 0x56
        // 0x5886A814: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886A816: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xA2
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5886A81B: jmp 0x5886a81f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886A81D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886A81F: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5886A822: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A827: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5886A82B: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5886A82E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A833: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5886A838: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886A83D: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A842: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x24
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5886A847: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5886A84A: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886A84E: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5886A853: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5886A855: je 0x5886a8aa
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x5886A857: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886A85D: cmp dword ptr [ecx + 0x160], 0x25
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x5886A864: jle 0x5886a87c
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5886A866: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A86C: je 0x5886a87c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5886A86E: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A874: add ecx, 0x940
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A87A: jmp 0x5886a87e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886A87C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5886A87E: push 0x2711
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A883: lea edx, [ebp + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A889: push edx
        __asm _emit 0x52
        // 0x5886A88A: lea edx, [ebx + 0x82]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A890: push edx
        __asm _emit 0x52
        // 0x5886A891: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886A897: push ecx
        __asm _emit 0x51
        // 0x5886A898: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886A89E: push esi
        __asm _emit 0x56
        // 0x5886A89F: push ecx
        __asm _emit 0x51
        // 0x5886A8A0: push edx
        __asm _emit 0x52
        // 0x5886A8A1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886A8A3: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x34
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5886A8A8: jmp 0x5886a8ac
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886A8AA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886A8AC: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A8B1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886A8B3: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5886A8B8: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5886A8BB: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886A8C0: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A8C5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5886A8CA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5886A8CD: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886A8D1: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x5886A8D6: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5886A8D8: je 0x5886a92d
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x5886A8DA: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886A8E0: cmp dword ptr [ecx + 0x160], 0x24
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x24
        // 0x5886A8E7: jle 0x5886a8ff
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5886A8E9: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A8EF: je 0x5886a8ff
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5886A8F1: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A8F7: add ecx, 0x900
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A8FD: jmp 0x5886a901
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886A8FF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5886A901: push 0x2711
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A906: lea edx, [ebp + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A90C: push edx
        __asm _emit 0x52
        // 0x5886A90D: lea edx, [ebx + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A913: push edx
        __asm _emit 0x52
        // 0x5886A914: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886A91A: push ecx
        __asm _emit 0x51
        // 0x5886A91B: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886A921: push esi
        __asm _emit 0x56
        // 0x5886A922: push ecx
        __asm _emit 0x51
        // 0x5886A923: push edx
        __asm _emit 0x52
        // 0x5886A924: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886A926: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x34
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5886A92B: jmp 0x5886a92f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886A92D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886A92F: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A934: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886A936: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5886A93B: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5886A93E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886A943: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A948: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x23
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5886A94D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5886A950: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886A954: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x5886A959: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5886A95B: je 0x5886a9b0
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x5886A95D: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886A963: cmp dword ptr [ecx + 0x160], 0x2f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2F
        // 0x5886A96A: jle 0x5886a982
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5886A96C: cmp dword ptr [ecx + 0x190], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A972: je 0x5886a982
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5886A974: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A97A: add ecx, 0xbc0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A980: jmp 0x5886a984
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886A982: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5886A984: push 0x2711
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A989: lea edx, [ebp + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A98F: push edx
        __asm _emit 0x52
        // 0x5886A990: lea edx, [ebx + 0xe6]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A996: push edx
        __asm _emit 0x52
        // 0x5886A997: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886A99D: push ecx
        __asm _emit 0x51
        // 0x5886A99E: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886A9A4: push esi
        __asm _emit 0x56
        // 0x5886A9A5: push ecx
        __asm _emit 0x51
        // 0x5886A9A6: push edx
        __asm _emit 0x52
        // 0x5886A9A7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886A9A9: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x33
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5886A9AE: jmp 0x5886a9b2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886A9B0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886A9B2: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A9B7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886A9B9: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5886A9BE: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5886A9C1: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886A9C6: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A9CB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x22
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5886A9D0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5886A9D3: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886A9D7: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x5886A9DC: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5886A9DE: je 0x5886aa19
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5886A9E0: push 0x646464
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x5886A9E5: push edi
        __asm _emit 0x57
        // 0x5886A9E6: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5886A9EB: lea ecx, [ebp + 0xdc]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A9F1: push ecx
        __asm _emit 0x51
        // 0x5886A9F2: lea edx, [ebx + 0x140]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A9F8: push edx
        __asm _emit 0x52
        // 0x5886A9F9: lea ecx, [ebp + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886A9FF: push ecx
        __asm _emit 0x51
        // 0x5886AA00: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x3C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886AA06: lea edx, [ebx + 0xf0]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AA0C: push edx
        __asm _emit 0x52
        // 0x5886AA0D: push ecx
        __asm _emit 0x51
        // 0x5886AA0E: push edi
        __asm _emit 0x57
        // 0x5886AA0F: push esi
        __asm _emit 0x56
        // 0x5886AA10: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886AA12: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x66
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5886AA17: jmp 0x5886aa1b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886AA19: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886AA1B: push 0xe
        __asm _emit 0x6A
        __asm _emit 0x0E
        // 0x5886AA1D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886AA1F: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5886AA24: mov dword ptr [esi + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AA2A: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xE4
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5886AA2F: mov edi, dword ptr [esi + 0x100]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AA35: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5886AA38: mov edx, 0x271a
        __asm _emit 0xBA
        __asm _emit 0x1A
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AA3D: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5886AA41: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5886AA43: je 0x5886aa4b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5886AA45: push edi
        __asm _emit 0x57
        // 0x5886AA46: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886AA4B: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5886AA4E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5886AA50: je 0x5886aa58
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5886AA52: push edi
        __asm _emit 0x57
        // 0x5886AA53: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886AA58: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AA5D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x21
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5886AA62: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5886AA65: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886AA69: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x5886AA6E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886AA70: je 0x5886aaae
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5886AA72: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886AA78: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AA7F: jle 0x5886aa92
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5886AA81: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AA88: je 0x5886aa92
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5886AA8A: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AA90: jmp 0x5886aa94
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886AA92: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5886AA94: lea ecx, [ebp + 0x23]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x23
        // 0x5886AA97: push ecx
        __asm _emit 0x51
        // 0x5886AA98: add ebx, 0xfa
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AA9E: push ebx
        __asm _emit 0x53
        // 0x5886AA9F: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x5886AAA1: push edx
        __asm _emit 0x52
        // 0x5886AAA2: push esi
        __asm _emit 0x56
        // 0x5886AAA3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886AAA5: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xC6
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886AAAA: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5886AAAC: jmp 0x5886aab0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886AAAE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5886AAB0: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x5886AAB3: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5886AAB6: mov edx, 0x2711
        __asm _emit 0xBA
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AABB: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5886AAC0: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x5886AAC4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5886AAC6: je 0x5886aace
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5886AAC8: push edi
        __asm _emit 0x57
        // 0x5886AAC9: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886AACE: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5886AAD1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5886AAD3: je 0x5886aadb
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5886AAD5: push edi
        __asm _emit 0x57
        // 0x5886AAD6: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886AADB: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5886AADE: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AAE3: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886AAE8: add ebp, 0x4e
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x4E
        // 0x5886AAEB: lea eax, [esi + 0xd4]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AAF1: lea ebx, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AAF7: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5886AAFB: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886AAFF: mov dword ptr [esp + 0x34], 0xb
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AB07: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5886AB09: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5886AB0E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5886AB10: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5886AB13: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5886AB17: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x5886AB1C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5886AB1E: je 0x5886aba9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AB24: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886AB29: cmp dword ptr [eax + 0x160], 6
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        // 0x5886AB30: jle 0x5886ab49
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5886AB32: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AB39: je 0x5886ab49
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5886AB3B: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AB41: add ebp, 0x180
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AB47: jmp 0x5886ab4b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886AB49: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5886AB4B: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5886AB4F: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5886AB53: push 0x2711
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AB58: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5886AB5A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5886AB5C: push ecx
        __asm _emit 0x51
        // 0x5886AB5D: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x5886AB60: push edx
        __asm _emit 0x52
        // 0x5886AB61: push esi
        __asm _emit 0x56
        // 0x5886AB62: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5886AB64: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x86
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886AB69: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5886AB6F: mov dword ptr [edi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AB76: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x54
        // 0x5886AB79: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5886AB7B: je 0x5886aba3
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5886AB7D: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5886AB80: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5886AB83: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5886AB86: lea eax, [ebp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5886AB89: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5886AB8C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5886AB8E: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5886AB91: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5886AB94: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x5886AB97: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5886AB9A: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5886AB9D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5886ABA0: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x5886ABA3: mov ebp, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5886ABA7: jmp 0x5886abab
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886ABA9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5886ABAB: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5886ABAF: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886ABB4: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x5886ABB6: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x5886ABBA: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886ABBF: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5886ABC4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5886ABC9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5886ABCC: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5886ABD0: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x5886ABD5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886ABD7: je 0x5886ac11
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5886ABD9: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886ABDF: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886ABE6: jle 0x5886abf9
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5886ABE8: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886ABEF: je 0x5886abf9
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5886ABF1: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886ABF7: jmp 0x5886abfb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886ABF9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5886ABFB: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5886ABFF: push ebp
        __asm _emit 0x55
        // 0x5886AC00: add edx, 0x6e
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x6E
        // 0x5886AC03: push edx
        __asm _emit 0x52
        // 0x5886AC04: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5886AC06: push ecx
        __asm _emit 0x51
        // 0x5886AC07: push esi
        __asm _emit 0x56
        // 0x5886AC08: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886AC0A: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xC4
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886AC0F: jmp 0x5886ac13
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886AC11: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886AC13: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AC18: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5886AC1D: mov dword ptr [ebx - 4], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0xFC
        // 0x5886AC20: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5886AC25: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5886AC28: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5886AC2C: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x5886AC31: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5886AC33: je 0x5886ac6d
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5886AC35: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5886AC3B: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AC42: jle 0x5886ac55
        __asm _emit 0x7E
        __asm _emit 0x11
        // 0x5886AC44: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AC4B: je 0x5886ac55
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5886AC4D: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AC53: jmp 0x5886ac57
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886AC55: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5886AC57: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5886AC5B: push ebp
        __asm _emit 0x55
        // 0x5886AC5C: add edx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x1E
        // 0x5886AC5F: push edx
        __asm _emit 0x52
        // 0x5886AC60: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5886AC62: push ecx
        __asm _emit 0x51
        // 0x5886AC63: push esi
        __asm _emit 0x56
        // 0x5886AC64: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5886AC66: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xC4
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886AC6B: jmp 0x5886ac6f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5886AC6D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886AC6F: mov edi, dword ptr [ebx - 4]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0xFC
        // 0x5886AC72: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x5886AC74: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5886AC77: mov eax, 0x2711
        __asm _emit 0xB8
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AC7C: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5886AC81: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5886AC85: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5886AC87: je 0x5886ac8f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5886AC89: push edi
        __asm _emit 0x57
        // 0x5886AC8A: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886AC8F: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5886AC92: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5886AC94: je 0x5886ac9c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5886AC96: push edi
        __asm _emit 0x57
        // 0x5886AC97: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886AC9C: mov edi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x3B
        // 0x5886AC9E: mov ecx, 0x2711
        __asm _emit 0xB9
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886ACA3: mov word ptr [edi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x26
        // 0x5886ACA7: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5886ACAA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5886ACAC: je 0x5886acb4
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5886ACAE: push edi
        __asm _emit 0x57
        // 0x5886ACAF: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886ACB4: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x5886ACB7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5886ACB9: je 0x5886acc1
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5886ACBB: push edi
        __asm _emit 0x57
        // 0x5886ACBC: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886ACC1: mov ecx, dword ptr [ebx - 4]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0xFC
        // 0x5886ACC4: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886ACC9: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886ACCE: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x5886ACD0: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886ACD5: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5886ACDA: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x5886ACDF: add ebp, 0xe
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x0E
        // 0x5886ACE2: add ebx, 8
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x08
        // 0x5886ACE5: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x5886ACEA: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5886ACEE: jne 0x5886ab07
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5886ACF4: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886ACF9: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5886ACFD: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5886AD01: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AD06: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5886AD09: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AD0E: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5886AD11: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5886AD15: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5886AD17: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5886AD1B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886AD22: pop ecx
        __asm _emit 0x59
        // 0x5886AD23: pop edi
        __asm _emit 0x5F
        // 0x5886AD24: pop esi
        __asm _emit 0x5E
        // 0x5886AD25: pop ebp
        __asm _emit 0x5D
        // 0x5886AD26: pop ebx
        __asm _emit 0x5B
        // 0x5886AD27: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5886AD2A: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
