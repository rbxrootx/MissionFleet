// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A9650 .. +0x506 bytes.
// Source symbol alias: FUN_588a9650.
extern "C" __declspec(naked) void FUN_588a9650() {
    __asm {
        // 0x588A9650: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588A9652: push 0x589876cb
        __asm _emit 0x68
        __asm _emit 0xCB
        __asm _emit 0x76
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A9657: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A965D: push eax
        __asm _emit 0x50
        // 0x588A965E: push ecx
        __asm _emit 0x51
        // 0x588A965F: push ebx
        __asm _emit 0x53
        // 0x588A9660: push ebp
        __asm _emit 0x55
        // 0x588A9661: push esi
        __asm _emit 0x56
        // 0x588A9662: push edi
        __asm _emit 0x57
        // 0x588A9663: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588A9668: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588A966A: push eax
        __asm _emit 0x50
        // 0x588A966B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588A966F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9675: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A9677: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588A967B: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A967F: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588A9683: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588A9687: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A9689: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588A968B: push ebx
        __asm _emit 0x53
        // 0x588A968C: push ebx
        __asm _emit 0x53
        // 0x588A968D: push edi
        __asm _emit 0x57
        // 0x588A968E: push ebp
        __asm _emit 0x55
        // 0x588A968F: push eax
        __asm _emit 0x50
        // 0x588A9690: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x9B
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A9695: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588A969B: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588A96A0: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x588A96A3: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588A96A6: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A96AD: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x588A96B0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588A96B2: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588A96B6: mov dword ptr [esi], 0x589a06e0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE0
        __asm _emit 0x06
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588A96BC: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x35
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A96C1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A96C4: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A96C8: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588A96CD: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588A96CF: je 0x588a9717
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x588A96D1: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A96D7: cmp dword ptr [ecx + 0x164], 0x405
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A96E1: jle 0x588a9706
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x588A96E3: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A96E9: je 0x588a9706
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588A96EB: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A96F1: mov ecx, dword ptr [ecx + 0x1014]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A96F7: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A96F9: push edi
        __asm _emit 0x57
        // 0x588A96FA: push ebp
        __asm _emit 0x55
        // 0x588A96FB: push ecx
        __asm _emit 0x51
        // 0x588A96FC: push esi
        __asm _emit 0x56
        // 0x588A96FD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A96FF: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A9704: jmp 0x588a9719
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588A9706: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A9708: push edi
        __asm _emit 0x57
        // 0x588A9709: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A970B: push ebp
        __asm _emit 0x55
        // 0x588A970C: push ecx
        __asm _emit 0x51
        // 0x588A970D: push esi
        __asm _emit 0x56
        // 0x588A970E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9710: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x85
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A9715: jmp 0x588a9719
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9717: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A9719: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588A971E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9720: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588A9725: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588A9728: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x95
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A972D: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588A9730: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9735: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588A9739: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588A973B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x35
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A9740: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A9743: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A9747: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588A974C: mov ebx, 0x404
        __asm _emit 0xBB
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9751: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A9753: je 0x588a9798
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x588A9755: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A975B: cmp dword ptr [ecx + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9761: jle 0x588a9787
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x588A9763: cmp dword ptr [ecx + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A976A: je 0x588a9787
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588A976C: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9772: mov ecx, dword ptr [ecx + 0x1010]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9778: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A977A: push edi
        __asm _emit 0x57
        // 0x588A977B: push ebp
        __asm _emit 0x55
        // 0x588A977C: push ecx
        __asm _emit 0x51
        // 0x588A977D: push esi
        __asm _emit 0x56
        // 0x588A977E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9780: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x84
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A9785: jmp 0x588a979a
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588A9787: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A9789: push edi
        __asm _emit 0x57
        // 0x588A978A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A978C: push ebp
        __asm _emit 0x55
        // 0x588A978D: push ecx
        __asm _emit 0x51
        // 0x588A978E: push esi
        __asm _emit 0x56
        // 0x588A978F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9791: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x84
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588A9796: jmp 0x588a979a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9798: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A979A: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588A979D: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A97A2: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A97A8: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x588A97AD: jle 0x588a97c6
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588A97AF: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A97B6: je 0x588a97c6
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A97B8: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A97BE: mov eax, dword ptr [edx + 0x1010]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A97C4: jmp 0x588a97c8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A97C6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A97C8: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588A97CB: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x588A97CE: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588A97D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588A97D3: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x588A97D6: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x588A97D8: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A97DD: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x588A97E0: mov dword ptr [esi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x588A97E3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A97E8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A97EB: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A97EF: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588A97F4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A97F6: je 0x588a9835
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588A97F8: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A97FE: cmp dword ptr [ecx + 0x160], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x588A9805: jle 0x588a981e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588A9807: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A980E: je 0x588a981e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A9810: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9816: add ecx, 0xb00
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A981C: jmp 0x588a9820
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A981E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A9820: lea edx, [edi + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x588A9823: push edx
        __asm _emit 0x52
        // 0x588A9824: lea edx, [ebp + 0x5d]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x5D
        // 0x588A9827: push edx
        __asm _emit 0x52
        // 0x588A9828: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588A982A: push ecx
        __asm _emit 0x51
        // 0x588A982B: push esi
        __asm _emit 0x56
        // 0x588A982C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A982E: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xD8
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A9833: jmp 0x588a9837
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9835: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A9837: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A983C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A983E: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588A9843: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588A9846: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A984B: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588A984E: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9853: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A9857: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A985C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x33
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A9861: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A9864: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A9868: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588A986D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A986F: je 0x588a98bc
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x588A9871: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A9877: cmp dword ptr [ecx + 0x160], 0x1f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        // 0x588A987E: jle 0x588a9897
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588A9880: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9887: je 0x588a9897
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A9889: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A988F: add ecx, 0x7c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9895: jmp 0x588a9899
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9897: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A9899: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A989B: lea edx, [edi + 0xf]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x0F
        // 0x588A989E: push edx
        __asm _emit 0x52
        // 0x588A989F: lea edx, [ebp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x78
        // 0x588A98A2: push edx
        __asm _emit 0x52
        // 0x588A98A3: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A98A9: push ecx
        __asm _emit 0x51
        // 0x588A98AA: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A98B0: push esi
        __asm _emit 0x56
        // 0x588A98B1: push ecx
        __asm _emit 0x51
        // 0x588A98B2: push edx
        __asm _emit 0x52
        // 0x588A98B3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A98B5: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x44
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A98BA: jmp 0x588a98be
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A98BC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A98BE: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A98C3: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588A98C8: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588A98CB: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x33
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A98D0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A98D3: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A98D7: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588A98DC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A98DE: je 0x588a992b
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x588A98E0: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A98E6: cmp dword ptr [ecx + 0x160], 0x20
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x588A98ED: jle 0x588a9906
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588A98EF: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A98F6: je 0x588a9906
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A98F8: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A98FE: add edx, 0x800
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9904: jmp 0x588a9908
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9906: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588A9908: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A990A: lea ecx, [edi + 0x1a]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x1A
        // 0x588A990D: push ecx
        __asm _emit 0x51
        // 0x588A990E: lea ecx, [ebp + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x78
        // 0x588A9911: push ecx
        __asm _emit 0x51
        // 0x588A9912: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A9918: push edx
        __asm _emit 0x52
        // 0x588A9919: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A991F: push esi
        __asm _emit 0x56
        // 0x588A9920: push edx
        __asm _emit 0x52
        // 0x588A9921: push ecx
        __asm _emit 0x51
        // 0x588A9922: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9924: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x44
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A9929: jmp 0x588a992d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A992B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A992D: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9932: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588A9937: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588A993A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x33
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A993F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A9942: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A9946: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588A994B: mov ebx, 0xcb
        __asm _emit 0xBB
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9950: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A9952: je 0x588a9990
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588A9954: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A995A: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9960: jle 0x588a9979
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588A9962: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9969: je 0x588a9979
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A996B: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9971: add ecx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9977: jmp 0x588a997b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9979: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A997B: lea edx, [edi + 0x2f]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x2F
        // 0x588A997E: push edx
        __asm _emit 0x52
        // 0x588A997F: lea edx, [ebp + 0x56]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x56
        // 0x588A9982: push edx
        __asm _emit 0x52
        // 0x588A9983: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588A9985: push ecx
        __asm _emit 0x51
        // 0x588A9986: push esi
        __asm _emit 0x56
        // 0x588A9987: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9989: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xD7
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A998E: jmp 0x588a9992
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9990: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A9992: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9997: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9999: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588A999E: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588A99A1: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A99A6: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588A99A9: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A99AE: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A99B2: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A99B7: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x32
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A99BC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A99BF: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A99C3: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588A99C8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A99CA: je 0x588a9a08
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588A99CC: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A99D2: cmp dword ptr [ecx + 0x160], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A99D8: jle 0x588a99f1
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588A99DA: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A99E1: je 0x588a99f1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A99E3: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A99E9: add ecx, 0x32c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A99EF: jmp 0x588a99f3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A99F1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A99F3: lea edx, [edi + 0x3b]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x3B
        // 0x588A99F6: push edx
        __asm _emit 0x52
        // 0x588A99F7: lea edx, [ebp + 0x56]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x56
        // 0x588A99FA: push edx
        __asm _emit 0x52
        // 0x588A99FB: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588A99FD: push ecx
        __asm _emit 0x51
        // 0x588A99FE: push esi
        __asm _emit 0x56
        // 0x588A99FF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9A01: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xD6
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A9A06: jmp 0x588a9a0a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9A08: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A9A0A: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9A0F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9A11: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588A9A16: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588A9A19: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A9A1E: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588A9A21: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9A26: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A9A2A: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9A2F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x32
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A9A34: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A9A37: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A9A3B: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588A9A40: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A9A42: je 0x588a9a8f
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x588A9A44: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A9A4A: cmp dword ptr [ecx + 0x160], 0x25
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x588A9A51: jle 0x588a9a6a
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588A9A53: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9A5A: je 0x588a9a6a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A9A5C: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9A62: add ecx, 0x940
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9A68: jmp 0x588a9a6c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9A6A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A9A6C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A9A6E: lea edx, [edi + 0x4d]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x4D
        // 0x588A9A71: push edx
        __asm _emit 0x52
        // 0x588A9A72: lea edx, [ebp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x50
        // 0x588A9A75: push edx
        __asm _emit 0x52
        // 0x588A9A76: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A9A7C: push ecx
        __asm _emit 0x51
        // 0x588A9A7D: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A9A83: push esi
        __asm _emit 0x56
        // 0x588A9A84: push ecx
        __asm _emit 0x51
        // 0x588A9A85: push edx
        __asm _emit 0x52
        // 0x588A9A86: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9A88: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x43
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A9A8D: jmp 0x588a9a91
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9A8F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A9A91: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9A96: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9A98: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588A9A9D: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588A9AA0: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x92
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A9AA5: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x588A9AA8: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9AAD: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588A9AB1: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9AB6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x31
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588A9ABB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588A9ABE: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588A9AC2: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588A9AC7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588A9AC9: je 0x588a9b16
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x588A9ACB: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A9AD1: cmp dword ptr [ecx + 0x160], 0x24
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x24
        // 0x588A9AD8: jle 0x588a9af1
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588A9ADA: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9AE1: je 0x588a9af1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588A9AE3: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9AE9: add ecx, 0x900
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9AEF: jmp 0x588a9af3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9AF1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A9AF3: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A9AF9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588A9AFB: add edi, 0x4d
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x4D
        // 0x588A9AFE: push edi
        __asm _emit 0x57
        // 0x588A9AFF: add ebp, 0x7b
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x7B
        // 0x588A9B02: push ebp
        __asm _emit 0x55
        // 0x588A9B03: push ecx
        __asm _emit 0x51
        // 0x588A9B04: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A9B0A: push esi
        __asm _emit 0x56
        // 0x588A9B0B: push edx
        __asm _emit 0x52
        // 0x588A9B0C: push ecx
        __asm _emit 0x51
        // 0x588A9B0D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9B0F: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x42
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588A9B14: jmp 0x588a9b18
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A9B16: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588A9B18: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9B1D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588A9B1F: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588A9B24: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9B2A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A9B2F: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9B35: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9B3A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588A9B3E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588A9B40: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588A9B44: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A9B4B: pop ecx
        __asm _emit 0x59
        // 0x588A9B4C: pop edi
        __asm _emit 0x5F
        // 0x588A9B4D: pop esi
        __asm _emit 0x5E
        // 0x588A9B4E: pop ebp
        __asm _emit 0x5D
        // 0x588A9B4F: pop ebx
        __asm _emit 0x5B
        // 0x588A9B50: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588A9B53: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
