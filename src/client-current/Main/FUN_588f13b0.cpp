// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F13B0 .. +0x224 bytes.
// Source symbol alias: FUN_588f13b0.
extern "C" __declspec(naked) void FUN_588f13b0() {
    __asm {
        // 0x588F13B0: sub esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F13B6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F13BB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F13BD: mov dword ptr [esp + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F13C4: push ebx
        __asm _emit 0x53
        // 0x588F13C5: push ebp
        __asm _emit 0x55
        // 0x588F13C6: push esi
        __asm _emit 0x56
        // 0x588F13C7: push edi
        __asm _emit 0x57
        // 0x588F13C8: mov edi, dword ptr [esp + 0x118]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F13CF: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F13D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F13D3: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588F13D5: jne 0x588f140f
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x588F13D7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588F13D9: mov dword ptr [esi + 0x424], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F13DF: mov dword ptr [esi + 0x428], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F13E5: mov dword ptr [esi + 0x42c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F13EB: mov dword ptr [esi + 0x430], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F13F1: mov dword ptr [esi + 0x434], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F13F7: mov dword ptr [esi + 0x438], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F13FD: mov dword ptr [esi + 0x43c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1403: mov dword ptr [esi + 0x440], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1409: mov dword ptr [esi + 0x444], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F140F: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F1414: mov ecx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F141A: mov ebp, dword ptr [ecx + edi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0xB9
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1421: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588F1423: je 0x588f1496
        __asm _emit 0x74
        __asm _emit 0x71
        // 0x588F1425: movzx ecx, byte ptr [ebp]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x588F1429: sub ecx, 5
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x05
        // 0x588F142C: je 0x588f1488
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x588F142E: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588F1431: je 0x588f147a
        __asm _emit 0x74
        __asm _emit 0x47
        // 0x588F1433: sub ecx, 7
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x07
        // 0x588F1436: jne 0x588f15b9
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F143C: mov edx, dword ptr [eax + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1442: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1448: movzx eax, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588F144C: mov ecx, dword ptr [esi + 0x424]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1452: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x588F1455: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x588F1458: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588F145A: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x588F145C: lea edx, [edx + edi - 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x3A
        __asm _emit 0xE4
        // 0x588F1460: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588F1462: push edx
        __asm _emit 0x52
        // 0x588F1463: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x588F1465: push ebp
        __asm _emit 0x55
        // 0x588F1466: mov dword ptr [esi + edx*4 + 0x428], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F146D: push edi
        __asm _emit 0x57
        // 0x588F146E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F1470: call 0x588f0ee0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F1475: jmp 0x588f15b9
        __asm _emit 0xE9
        __asm _emit 0x3F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F147A: push ebp
        __asm _emit 0x55
        // 0x588F147B: push edi
        __asm _emit 0x57
        // 0x588F147C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F147E: call 0x588f0bb0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F1483: jmp 0x588f15b9
        __asm _emit 0xE9
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1488: push ebp
        __asm _emit 0x55
        // 0x588F1489: push edi
        __asm _emit 0x57
        // 0x588F148A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F148C: call 0x588f07c0
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F1491: jmp 0x588f15b9
        __asm _emit 0xE9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1496: cmp edi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x1C
        // 0x588F1499: jl 0x588f14bc
        __asm _emit 0x7C
        __asm _emit 0x21
        // 0x588F149B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588F149D: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F14A3: mov eax, dword ptr [edx + 0x270]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F14A9: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F14AE: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x588F14B0: shr eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE8
        // 0x588F14B2: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588F14B4: jne 0x588f14bc
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x588F14B6: inc dword ptr [esi + 0x424]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F14BC: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F14C2: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F14C7: push edi
        __asm _emit 0x57
        // 0x588F14C8: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F14CD: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F14D2: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F14D8: push edi
        __asm _emit 0x57
        // 0x588F14D9: push ebx
        __asm _emit 0x53
        // 0x588F14DA: call 0x58908110
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F14DF: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F14E5: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F14EA: push edi
        __asm _emit 0x57
        // 0x588F14EB: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F14F0: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F14F5: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F14FA: lea ecx, [esp + 0x15]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x15
        // 0x588F14FE: push ebx
        __asm _emit 0x53
        // 0x588F14FF: push ecx
        __asm _emit 0x51
        // 0x588F1500: mov byte ptr [esp + 0x1c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588F1504: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xB7
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F1509: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F150F: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1515: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F151B: movzx eax, word ptr [ecx + edi*2 + 0xda]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1523: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F1526: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F1529: je 0x588f1544
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588F152B: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x588F152E: push edx
        __asm _emit 0x52
        // 0x588F152F: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F1533: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F1538: push eax
        __asm _emit 0x50
        // 0x588F1539: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F153F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588F1542: jmp 0x588f1548
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588F1544: mov byte ptr [esp + 0x10], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F1548: push 0x808080
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        // 0x588F154D: push edi
        __asm _emit 0x57
        // 0x588F154E: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F1552: push ecx
        __asm _emit 0x51
        // 0x588F1553: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1559: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F155E: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1564: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F1569: push edi
        __asm _emit 0x57
        // 0x588F156A: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F156F: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F1574: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F157A: push 0xff000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x588F157F: push edi
        __asm _emit 0x57
        // 0x588F1580: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F1585: call 0x589089e0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588F158A: mov eax, dword ptr [esi + edi*4 + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1591: mov dword ptr [esi + edi*4 + 0x35c], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F1598: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F159D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F15A1: mov eax, dword ptr [esi + edi*4 + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F15A8: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588F15AA: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F15AE: mov esi, dword ptr [esi + edi*4 + 0x234]
        __asm _emit 0x8B
        __asm _emit 0xB4
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F15B5: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588F15B9: mov ecx, dword ptr [esp + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F15C0: pop edi
        __asm _emit 0x5F
        // 0x588F15C1: pop esi
        __asm _emit 0x5E
        // 0x588F15C2: pop ebp
        __asm _emit 0x5D
        // 0x588F15C3: pop ebx
        __asm _emit 0x5B
        // 0x588F15C4: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588F15C6: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F15CB: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F15D1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
