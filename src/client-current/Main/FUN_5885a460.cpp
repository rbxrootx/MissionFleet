// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1494 bytes in 1 exact ranges.
// Source symbol alias: FUN_5885a460.

// Ghidra body range 0x5885A460..0x5885AA36; 1494 mapped bytes.
extern "C" __declspec(naked) void FUN_5885a460_segment_00() {
    __asm {
        // 0x5885A460: push ecx
        __asm _emit 0x51
        // 0x5885A461: push ebx
        __asm _emit 0x53
        // 0x5885A462: push ebp
        __asm _emit 0x55
        // 0x5885A463: push esi
        __asm _emit 0x56
        // 0x5885A464: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885A466: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5885A46A: push edi
        __asm _emit 0x57
        // 0x5885A46B: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5885A46D: je 0x5885a4cb
        __asm _emit 0x74
        __asm _emit 0x5C
        // 0x5885A46F: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5885A472: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5885A476: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5885A478: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5885A47A: je 0x5885a4a3
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5885A47C: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5885A47F: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5885A481: je 0x5885a499
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5885A483: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5885A485: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885A487: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5885A48A: push edi
        __asm _emit 0x57
        // 0x5885A48B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5885A48D: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5885A490: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x5885A493: je 0x5885a4a3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5885A495: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5885A497: jne 0x5885a483
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5885A499: pop edi
        __asm _emit 0x5F
        // 0x5885A49A: pop esi
        __asm _emit 0x5E
        // 0x5885A49B: pop ebp
        __asm _emit 0x5D
        // 0x5885A49C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A49E: pop ebx
        __asm _emit 0x5B
        // 0x5885A49F: pop ecx
        __asm _emit 0x59
        // 0x5885A4A0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885A4A3: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5885A4A6: cmp eax, 0x102
        __asm _emit 0x3D
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A4AB: ja 0x5885a9bb
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x0A
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A4B1: je 0x5885a4f1
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5885A4B3: sub eax, 0x100
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A4B8: je 0x5885a4d6
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5885A4BA: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5885A4BD: jne 0x5885a4cb
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885A4BF: cmp dword ptr [edi + 8], 0x10
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x08
        __asm _emit 0x10
        // 0x5885A4C3: jne 0x5885a4cb
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5885A4C5: mov dword ptr [esi + 0x96c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A4CB: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5885A4CE: pop edi
        __asm _emit 0x5F
        // 0x5885A4CF: pop esi
        __asm _emit 0x5E
        // 0x5885A4D0: pop ebp
        __asm _emit 0x5D
        // 0x5885A4D1: pop ebx
        __asm _emit 0x5B
        // 0x5885A4D2: pop ecx
        __asm _emit 0x59
        // 0x5885A4D3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885A4D6: cmp dword ptr [edi + 8], 0x10
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x08
        __asm _emit 0x10
        // 0x5885A4DA: jne 0x5885a4cb
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x5885A4DC: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5885A4DF: pop edi
        __asm _emit 0x5F
        // 0x5885A4E0: mov dword ptr [esi + 0x96c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A4EA: pop esi
        __asm _emit 0x5E
        // 0x5885A4EB: pop ebp
        __asm _emit 0x5D
        // 0x5885A4EC: pop ebx
        __asm _emit 0x5B
        // 0x5885A4ED: pop ecx
        __asm _emit 0x59
        // 0x5885A4EE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885A4F1: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A4F7: cmp dword ptr [edx + 0x20d40], ebp
        __asm _emit 0x39
        __asm _emit 0xAA
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5885A4FD: jne 0x5885a4cb
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x5885A4FF: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A504: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885A508: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x5885A50A: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x5885A50D: jne 0x5885a4cb
        __asm _emit 0x75
        __asm _emit 0xBC
        // 0x5885A50F: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A514: mov dword ptr [eax + 0x104e0], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0xE0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A51A: mov dword ptr [eax + 0x104e4], 0x320
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A524: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5885A527: add eax, -0x5b
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xA5
        // 0x5885A52A: cmp eax, 0x22
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x22
        // 0x5885A52D: ja 0x5885a4cb
        __asm _emit 0x77
        __asm _emit 0x9C
        // 0x5885A52F: movzx edx, byte ptr [eax + 0x5885aa50]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x50
        __asm _emit 0xAA
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x5885A536: jmp dword ptr [edx*4 + 0x5885aa38]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xAA
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x5885A53D: cmp dword ptr [esi + 0x96c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A543: jne 0x5885a55d
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885A545: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A54A: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5885A54D: push eax
        __asm _emit 0x50
        // 0x5885A54E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885A550: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0x6F
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5885A555: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A557: je 0x5885a4cb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A55D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885A55F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885A561: call 0x58858f20
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A566: pop edi
        __asm _emit 0x5F
        // 0x5885A567: pop esi
        __asm _emit 0x5E
        // 0x5885A568: pop ebp
        __asm _emit 0x5D
        // 0x5885A569: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A56B: pop ebx
        __asm _emit 0x5B
        // 0x5885A56C: pop ecx
        __asm _emit 0x59
        // 0x5885A56D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885A570: cmp dword ptr [esi + 0x96c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A576: jne 0x5885a591
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5885A578: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A57E: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5885A581: push ecx
        __asm _emit 0x51
        // 0x5885A582: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885A584: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x6F
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5885A589: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A58B: je 0x5885a4cb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A591: push ebp
        __asm _emit 0x55
        // 0x5885A592: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885A594: call 0x58858f20
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A599: pop edi
        __asm _emit 0x5F
        // 0x5885A59A: pop esi
        __asm _emit 0x5E
        // 0x5885A59B: pop ebp
        __asm _emit 0x5D
        // 0x5885A59C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A59E: pop ebx
        __asm _emit 0x5B
        // 0x5885A59F: pop ecx
        __asm _emit 0x59
        // 0x5885A5A0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885A5A3: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A5A9: cmp dword ptr [esi + ecx*4 + 0x9a0], ebp
        __asm _emit 0x39
        __asm _emit 0xAC
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A5B0: jne 0x5885a93d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A5B6: mov eax, dword ptr [esi + ecx*4 + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A5BD: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5885A5BF: je 0x5885a93d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A5C5: lea edx, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0xFF
        // 0x5885A5C8: cmp edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0F
        // 0x5885A5CB: ja 0x5885a93d
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x6C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A5D1: movzx edx, byte ptr [edx + 0x5885aa88]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0xAA
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x5885A5D8: jmp dword ptr [edx*4 + 0x5885aa74]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xAA
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x5885A5DF: test al, 0x18
        __asm _emit 0xA8
        __asm _emit 0x18
        // 0x5885A5E1: jne 0x5885a93d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A5E7: mov eax, dword ptr [esi + ecx*8 + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A5EE: cmp eax, dword ptr [esi + ecx*8 + 0x15c]
        __asm _emit 0x3B
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A5F5: je 0x5885a757
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A5FB: mov dword ptr [esi + ecx*4 + 0x138], 2
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A606: push ebp
        __asm _emit 0x55
        // 0x5885A607: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885A609: call 0x58858bd0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A60E: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A614: mov ecx, dword ptr [esi + ecx*4 + 0x978]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A61B: push ebp
        __asm _emit 0x55
        // 0x5885A61C: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x6F
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5885A621: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A627: mov ecx, dword ptr [esi + edx*4 + 0x9c0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A62E: push ebp
        __asm _emit 0x55
        // 0x5885A62F: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x97
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5885A634: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A63A: mov dword ptr [esi + eax*4 + 0x9a0], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A645: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A64B: mov eax, dword ptr [esi + ecx*8 + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A652: sub eax, dword ptr [esi + ecx*8 + 0x158]
        __asm _emit 0x2B
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A659: cdq
        __asm _emit 0x99
        // 0x5885A65A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885A65C: xor edi, edx
        __asm _emit 0x33
        __asm _emit 0xFA
        // 0x5885A65E: sub edi, edx
        __asm _emit 0x2B
        __asm _emit 0xFA
        // 0x5885A660: mov dword ptr [esi + ecx*4 + 0xf8], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A667: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A66D: lea edx, [esi + ecx*4 + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A674: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A67A: push edi
        __asm _emit 0x57
        // 0x5885A67B: push edx
        __asm _emit 0x52
        // 0x5885A67C: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x6F
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5885A681: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A687: cmp edi, dword ptr [esi + eax*4 + 0xf8]
        __asm _emit 0x3B
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A68E: je 0x5885a6a3
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5885A690: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A696: call 0x58970ae0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x64
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x5885A69B: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5885A69D: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885A6A3: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A6A9: cmp dword ptr [esi + eax*4 + 0xf8], ebp
        __asm _emit 0x39
        __asm _emit 0xAC
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A6B0: jle 0x5885a726
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x5885A6B2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885A6B4: imul ecx, ecx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A6BA: movzx edx, word ptr [ecx + esi + 0x288]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A6C2: cmp dword ptr [esi + eax*4 + 0x118], edx
        __asm _emit 0x39
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A6C9: jne 0x5885a726
        __asm _emit 0x75
        __asm _emit 0x5B
        // 0x5885A6CB: mov dword ptr [esi + eax*8 + 0x930], ebp
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0xC6
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A6D2: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A6D8: mov eax, dword ptr [esi + ecx*4 + 0x9e0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A6DF: mov eax, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x54
        // 0x5885A6E2: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5885A6E4: je 0x5885a6ec
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885A6E6: movzx eax, word ptr [eax + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5885A6EA: jmp 0x5885a6ee
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885A6EC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A6EE: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5885A6F0: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A6F6: imul edx, edx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A6FC: movzx edi, word ptr [edx + esi + 0x288]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xBC
        __asm _emit 0x32
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A704: imul edi, dword ptr [esi + ecx*4 + 0xf8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xBC
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A70C: cdq
        __asm _emit 0x99
        // 0x5885A70D: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5885A70F: mov dword ptr [esi + ecx*8 + 0x92c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xCE
        __asm _emit 0x2C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A716: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A71C: mov ecx, dword ptr [esi + eax*4 + 0x9e0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A723: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x5885A726: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A72B: cmp dword ptr [eax + 0x160], 0x16
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x5885A732: jle 0x5885a749
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5885A734: cmp dword ptr [eax + 0x190], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A73A: je 0x5885a749
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5885A73C: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A742: add eax, 0x580
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A747: jmp 0x5885a74b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885A749: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A74B: mov ecx, dword ptr [esi + 0xa7c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A751: push eax
        __asm _emit 0x50
        // 0x5885A752: call 0x58734920
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xA1
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5885A757: mov eax, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A75D: add eax, dword ptr [esi + 0x18c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A763: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A769: add eax, dword ptr [esi + 0x184]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A76F: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5885A772: add eax, dword ptr [esi + 0x17c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A778: mov edx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A77E: add eax, dword ptr [esi + 0x174]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A784: movzx ecx, word ptr [edx + 0x10]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4A
        __asm _emit 0x10
        // 0x5885A788: add eax, dword ptr [esi + 0x16c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A78E: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A794: add eax, dword ptr [esi + 0x164]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A79A: add eax, dword ptr [esi + 0x15c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7A0: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5885A7A2: push ecx
        __asm _emit 0x51
        // 0x5885A7A3: mov ecx, dword ptr [esi + 0xa60]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7A9: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xCB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885A7AE: jmp 0x5885a96d
        __asm _emit 0xE9
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7B3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885A7B5: call 0x58859070
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A7BA: jmp 0x5885a96d
        __asm _emit 0xE9
        __asm _emit 0xAE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7BF: mov edx, dword ptr [esi + ecx*4 + 0x978]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7C6: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5885A7CA: shr al, 1
        __asm _emit 0xD0
        __asm _emit 0xE8
        // 0x5885A7CC: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885A7CE: je 0x5885a93d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7D4: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7DA: mov edx, dword ptr [esi + ecx*4 + 0x978]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7E1: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5885A7E4: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5885A7E7: je 0x5885a93d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7ED: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5885A7F0: je 0x5885a93d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A7F6: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A7FB: test dword ptr [eax + 0x10474], 0x100
        __asm _emit 0xF7
        __asm _emit 0x80
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A805: jne 0x5885a93d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A80B: movzx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC1
        // 0x5885A80E: mov ecx, dword ptr [esi + eax*4 + 0x978]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A815: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A81A: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5885A81E: mov byte ptr [eax + esi + 0xc8], 0x32
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x5885A826: mov dword ptr [esi + eax*4 + 0xa8], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A831: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A837: movzx ecx, byte ptr [esi + eax*4 + 0x878]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A83F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5885A842: mov byte ptr [esp + 0x10], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5885A846: xor dword ptr [esi + eax*8 + 0x198], 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0xC6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x5885A851: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A857: movzx ecx, byte ptr [esi + edx*8 + 0x198]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A85F: lea eax, [esi + edx*8 + 0x198]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A866: mov byte ptr [esp + 0x11], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x11
        // 0x5885A86A: xor dword ptr [eax], 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x5885A870: mov dl, byte ptr [esi + 0xf4]
        __asm _emit 0x8A
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A876: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A87C: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5885A87E: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5885A882: push eax
        __asm _emit 0x50
        // 0x5885A883: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x5885A885: mov byte ptr [esp + 0x1e], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x5885A889: call 0x587e5a70
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xB1
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885A88E: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A893: mov edi, 0x1b
        __asm _emit 0xBF
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A898: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A89E: jle 0x5885a8b3
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5885A8A0: cmp dword ptr [eax + 0x194], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A8A6: je 0x5885a8b3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885A8A8: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A8AE: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x5885A8B1: jmp 0x5885a8b5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885A8B3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885A8B5: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A8BB: push edx
        __asm _emit 0x52
        // 0x5885A8BC: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xD0
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885A8C1: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A8C6: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A8CC: jle 0x5885a8e1
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x5885A8CE: cmp dword ptr [eax + 0x194], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A8D4: je 0x5885a8e1
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5885A8D6: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A8DC: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x5885A8DF: jmp 0x5885a8e3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885A8E1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885A8E3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885A8E5: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885A8E8: push ebp
        __asm _emit 0x55
        // 0x5885A8E9: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5885A8EB: mov ecx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A8F1: push ecx
        __asm _emit 0x51
        // 0x5885A8F2: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A8F8: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xD0
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885A8FD: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A903: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5885A905: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885A908: push ebp
        __asm _emit 0x55
        // 0x5885A909: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5885A90B: jmp 0x5885a96d
        __asm _emit 0xEB
        __asm _emit 0x60
        // 0x5885A90D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A90F: lea edx, [esi + 0xd0]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A915: cmp dword ptr [edx], ebp
        __asm _emit 0x39
        __asm _emit 0x2A
        // 0x5885A917: jne 0x5885a92b
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5885A919: inc eax
        __asm _emit 0x40
        // 0x5885A91A: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5885A91D: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5885A920: jb 0x5885a915
        __asm _emit 0x72
        __asm _emit 0xF3
        // 0x5885A922: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885A924: call 0x588585d0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A929: jmp 0x5885a96d
        __asm _emit 0xEB
        __asm _emit 0x42
        // 0x5885A92B: cmp dword ptr [esi + ecx*4 + 0xd0], ebp
        __asm _emit 0x39
        __asm _emit 0xAC
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A932: je 0x5885a93d
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5885A934: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885A936: call 0x588585d0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A93B: jmp 0x5885a96d
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x5885A93D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A93F: lea ecx, [esi + 0xd0]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A945: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x5885A947: jne 0x5885a954
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5885A949: inc eax
        __asm _emit 0x40
        // 0x5885A94A: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5885A94D: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5885A950: jb 0x5885a945
        __asm _emit 0x72
        __asm _emit 0xF3
        // 0x5885A952: jmp 0x5885a96d
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x5885A954: mov edi, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A95A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885A95C: mov dword ptr [esi + 0xf4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A962: call 0x588585d0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A967: mov dword ptr [esi + 0xf4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A96D: cmp dword ptr [esi + 0x96c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A973: jne 0x5885a55d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A979: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A97F: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5885A982: push ecx
        __asm _emit 0x51
        // 0x5885A983: jmp 0x5885a54e
        __asm _emit 0xE9
        __asm _emit 0xC6
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A988: cmp dword ptr [esi + 0x96c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A98E: jne 0x5885a9a9
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5885A990: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A996: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5885A999: push edx
        __asm _emit 0x52
        // 0x5885A99A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885A99C: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x6B
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5885A9A1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A9A3: je 0x5885a4cb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A9A9: push ebp
        __asm _emit 0x55
        // 0x5885A9AA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885A9AC: call 0x58858f20
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A9B1: pop edi
        __asm _emit 0x5F
        // 0x5885A9B2: pop esi
        __asm _emit 0x5E
        // 0x5885A9B3: pop ebp
        __asm _emit 0x5D
        // 0x5885A9B4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A9B6: pop ebx
        __asm _emit 0x5B
        // 0x5885A9B7: pop ecx
        __asm _emit 0x59
        // 0x5885A9B8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885A9BB: cmp eax, 0x20a
        __asm _emit 0x3D
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A9C0: jne 0x5885a4cb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A9C6: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A9CC: mov eax, dword ptr [esi + eax*4 + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A9D3: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5885A9D6: je 0x5885a9e1
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5885A9D8: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5885A9DB: jne 0x5885a4cb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEA
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A9E1: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885A9E3: cmp word ptr [edi + 0xa], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x6F
        __asm _emit 0x0A
        // 0x5885A9E7: jle 0x5885a9ee
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x5885A9E9: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A9EE: cmp dword ptr [esi + 0x96c], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x6C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A9F4: jne 0x5885aa0f
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5885A9F6: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885A9FC: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5885A9FF: push ecx
        __asm _emit 0x51
        // 0x5885AA00: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885AA02: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x6B
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5885AA07: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885AA09: je 0x5885a4cb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AA0F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885AA11: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x5885AA13: je 0x5885aa25
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5885AA15: push ebp
        __asm _emit 0x55
        // 0x5885AA16: call 0x58858f20
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AA1B: pop edi
        __asm _emit 0x5F
        // 0x5885AA1C: pop esi
        __asm _emit 0x5E
        // 0x5885AA1D: pop ebp
        __asm _emit 0x5D
        // 0x5885AA1E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885AA20: pop ebx
        __asm _emit 0x5B
        // 0x5885AA21: pop ecx
        __asm _emit 0x59
        // 0x5885AA22: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885AA25: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885AA27: call 0x58858f20
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AA2C: pop edi
        __asm _emit 0x5F
        // 0x5885AA2D: pop esi
        __asm _emit 0x5E
        // 0x5885AA2E: pop ebp
        __asm _emit 0x5D
        // 0x5885AA2F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885AA31: pop ebx
        __asm _emit 0x5B
        // 0x5885AA32: pop ecx
        __asm _emit 0x59
        // 0x5885AA33: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
