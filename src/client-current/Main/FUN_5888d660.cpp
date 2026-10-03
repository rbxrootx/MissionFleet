// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888D660 .. +0x344 bytes.
// Source symbol alias: FUN_5888d660.
extern "C" __declspec(naked) void FUN_5888d660() {
    __asm {
        // 0x5888D660: push esi
        __asm _emit 0x56
        // 0x5888D661: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888D663: mov eax, dword ptr [esi + 0x648]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D669: cmp dword ptr [eax + 0x160], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x5888D670: jle 0x5888d681
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5888D672: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D678: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888D67A: je 0x5888d681
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5888D67C: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x5888D67F: jmp 0x5888d683
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888D681: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888D683: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D689: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5888D68C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888D68E: je 0x5888d6b8
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5888D690: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5888D693: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5888D696: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5888D699: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5888D69C: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5888D69F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888D6A1: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5888D6A4: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5888D6A6: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5888D6A9: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5888D6AC: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5888D6AF: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5888D6B2: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5888D6B5: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5888D6B8: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D6BE: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D6C3: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D6C8: mov eax, dword ptr [esi + 0x648]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D6CE: cmp dword ptr [eax + 0x160], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5888D6D5: jle 0x5888d6e6
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x5888D6D7: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D6DD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888D6DF: je 0x5888d6e6
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5888D6E1: add eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x40
        // 0x5888D6E4: jmp 0x5888d6e8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5888D6E6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888D6E8: mov ecx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D6EE: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5888D6F1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888D6F3: je 0x5888d71d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5888D6F5: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5888D6F8: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5888D6FB: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5888D6FE: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5888D701: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5888D704: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888D706: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5888D709: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5888D70B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5888D70E: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5888D711: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5888D714: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5888D717: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5888D71A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5888D71D: mov eax, dword ptr [esi + 0x648]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D723: cmp dword ptr [eax + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D72A: jle 0x5888d736
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x5888D72C: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D732: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888D734: jne 0x5888d738
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5888D736: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888D738: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D73E: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5888D741: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888D743: je 0x5888d76d
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5888D745: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5888D748: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5888D74B: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5888D74E: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5888D751: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5888D754: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5888D756: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5888D759: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5888D75B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5888D75E: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5888D761: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5888D764: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5888D767: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5888D76A: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5888D76D: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D773: push 0x5a
        __asm _emit 0x6A
        __asm _emit 0x5A
        // 0x5888D775: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x55
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D77A: cmp dword ptr [0x589cd264], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x64
        __asm _emit 0xD2
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5888D781: je 0x5888d78f
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5888D783: mov dword ptr [0x589cd264], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0xD2
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D78D: pop esi
        __asm _emit 0x5E
        // 0x5888D78E: ret
        __asm _emit 0xC3
        // 0x5888D78F: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D794: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x5888D797: sub ecx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5888D79A: push edi
        __asm _emit 0x57
        // 0x5888D79B: sub ecx, 0x39e
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x9E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D7A1: push ecx
        __asm _emit 0x51
        // 0x5888D7A2: mov ecx, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D7A8: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x5B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D7AD: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D7B2: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5888D7B5: sub edx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5888D7B8: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D7BE: sub edx, 0x39e
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x9E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D7C4: push edx
        __asm _emit 0x52
        // 0x5888D7C5: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x5B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D7CA: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D7CF: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x5888D7D2: sub ecx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5888D7D5: sub ecx, 0x272
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D7DB: push ecx
        __asm _emit 0x51
        // 0x5888D7DC: mov ecx, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D7E2: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x5A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D7E7: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D7EC: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5888D7EF: sub edx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5888D7F2: mov ecx, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D7F8: sub edx, 0x2f8
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D7FE: push edx
        __asm _emit 0x52
        // 0x5888D7FF: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x5A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D804: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D809: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x5888D80C: sub ecx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5888D80F: sub ecx, 0x249
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D815: push ecx
        __asm _emit 0x51
        // 0x5888D816: mov ecx, dword ptr [esi + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D81C: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x5A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D821: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D826: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5888D829: sub edx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5888D82C: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D832: sub edx, 0x39e
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x9E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D838: push edx
        __asm _emit 0x52
        // 0x5888D839: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x5A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D83E: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D843: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5888D846: sub ecx, dword ptr [eax + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5888D849: sub ecx, 0xc3
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D84F: push ecx
        __asm _emit 0x51
        // 0x5888D850: mov ecx, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D856: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x5B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D85B: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D860: mov edx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x5888D863: sub edx, dword ptr [eax + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5888D866: mov ecx, dword ptr [esi + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D86C: sub edx, 0xc3
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D872: push edx
        __asm _emit 0x52
        // 0x5888D873: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D878: mov eax, dword ptr [0x58a28520]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888D87D: mov ecx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5888D880: sub ecx, dword ptr [eax + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5888D883: sub ecx, 0xc3
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D889: push ecx
        __asm _emit 0x51
        // 0x5888D88A: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D890: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x5A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D895: mov ecx, dword ptr [esi + 0x4c8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D89B: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D8A0: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x5A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D8A5: mov ecx, dword ptr [esi + 0x4b8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D8AB: push 0xee
        __asm _emit 0x68
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D8B0: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x5A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D8B5: mov ecx, dword ptr [esi + 0x4bc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D8BB: push 0xee
        __asm _emit 0x68
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D8C0: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x5A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D8C5: mov ecx, dword ptr [esi + 0x4a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D8CB: push 0xee
        __asm _emit 0x68
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D8D0: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x5A
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D8D5: mov ecx, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D8DB: push 0x104
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D8E0: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D8E5: mov eax, dword ptr [esi + 0x4c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D8EB: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5888D8EE: add edx, 0x30c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D8F4: mov dword ptr [eax + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5888D8F7: mov ecx, dword ptr [esi + 0x4b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D8FD: push 0x3c5
        __asm _emit 0x68
        __asm _emit 0xC5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D902: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D907: mov ecx, dword ptr [esi + 0x4b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D90D: push 0x3c5
        __asm _emit 0x68
        __asm _emit 0xC5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D912: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D917: mov ecx, dword ptr [esi + 0x4a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D91D: push 0x3c5
        __asm _emit 0x68
        __asm _emit 0xC5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D922: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D927: mov ecx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D92D: push 0x140
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D932: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D937: mov ecx, dword ptr [esi + 0x498]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D93D: push 0x370
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D942: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D947: mov ecx, dword ptr [esi + 0x49c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D94D: push 0x3a2
        __asm _emit 0x68
        __asm _emit 0xA2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D952: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D957: mov ecx, dword ptr [esi + 0x4f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D95D: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D962: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D967: mov ecx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D96D: call 0x588d2820
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x4E
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888D972: mov ecx, dword ptr [esi + 0x4cc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D978: push 0x57
        __asm _emit 0x6A
        __asm _emit 0x57
        // 0x5888D97A: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D97F: add esi, 0x4d0
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xD0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D985: mov edi, 6
        __asm _emit 0xBF
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D98A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D990: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5888D992: push 0x36
        __asm _emit 0x6A
        __asm _emit 0x36
        // 0x5888D994: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x59
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5888D999: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5888D99C: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5888D99F: jne 0x5888d990
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x5888D9A1: pop edi
        __asm _emit 0x5F
        // 0x5888D9A2: pop esi
        __asm _emit 0x5E
        // 0x5888D9A3: ret
        __asm _emit 0xC3
    }
}
