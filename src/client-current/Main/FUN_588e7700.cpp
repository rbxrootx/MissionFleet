// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E7700 .. +0x509 bytes.
// Source symbol alias: FUN_588e7700.
extern "C" __declspec(naked) void FUN_588e7700() {
    __asm {
        // 0x588E7700: push ebx
        __asm _emit 0x53
        // 0x588E7701: push ebp
        __asm _emit 0x55
        // 0x588E7702: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588E7704: mov eax, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E770A: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588E770D: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588E7710: push edi
        __asm _emit 0x57
        // 0x588E7711: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E7715: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x588E7718: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588E771A: jne 0x588e7723
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588E771C: call 0x587799f0
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x22
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588E7721: jmp 0x588e7728
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588E7723: call 0x587799b0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x22
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588E7728: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588E772C: mov ecx, dword ptr [ebp + edx*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x95
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7733: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588E7735: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588E7737: je 0x588e7770
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588E7739: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588E773B: je 0x588e7751
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588E773D: test dword ptr [ecx + 0xb4], 0x10000000
        __asm _emit 0xF7
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x588E7747: je 0x588e7751
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588E7749: pop edi
        __asm _emit 0x5F
        // 0x588E774A: pop ebp
        __asm _emit 0x5D
        // 0x588E774B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E774D: pop ebx
        __asm _emit 0x5B
        // 0x588E774E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E7751: mov eax, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7757: mov dl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588E775A: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588E775D: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x588E7760: jne 0x588e7769
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588E7762: call 0x587799f0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0x22
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588E7767: jmp 0x588e776e
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588E7769: call 0x587799b0
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x22
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588E776E: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x588E7770: mov eax, dword ptr [ebp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x48
        // 0x588E7773: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x588E7776: cmp dword ptr [edi + 0xb8], eax
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E777C: jne 0x588e779f
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x588E777E: mov ecx, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7784: mov dl, byte ptr [ecx + 4]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588E7787: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588E778A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588E778C: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x588E778F: jne 0x588e7798
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588E7791: call 0x587799f0
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x22
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588E7796: jmp 0x588e779d
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588E7798: call 0x587799b0
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x22
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588E779D: sub ebx, eax
        __asm _emit 0x2B
        __asm _emit 0xD8
        // 0x588E779F: mov eax, dword ptr [ebp + 0xa70]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E77A5: push esi
        __asm _emit 0x56
        // 0x588E77A6: mov esi, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB5
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E77AC: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588E77AF: imul ecx, ecx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E77B5: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588E77BA: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588E77BC: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588E77BE: jbe 0x588e77e8
        __asm _emit 0x76
        __asm _emit 0x28
        // 0x588E77C0: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x588E77C5: je 0x588e7c00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E77CB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E77CD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E77CF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E77D1: push 0x68
        __asm _emit 0x6A
        __asm _emit 0x68
        // 0x588E77D3: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x43
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E77D8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E77DA: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xD5
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588E77DF: pop esi
        __asm _emit 0x5E
        // 0x588E77E0: pop edi
        __asm _emit 0x5F
        // 0x588E77E1: pop ebp
        __asm _emit 0x5D
        // 0x588E77E2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E77E4: pop ebx
        __asm _emit 0x5B
        // 0x588E77E5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E77E8: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588E77EC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E77EE: jne 0x588e7b79
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E77F4: mov eax, 0x10000000
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x588E77F9: test dword ptr [esi + 0x38c], eax
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E77FF: je 0x588e7ad6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7805: test dword ptr [edi + 0xb4], eax
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E780B: je 0x588e7ab9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7811: movzx ecx, word ptr [esi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588E7815: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588E7817: and edx, 0x3e0
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E781D: cmp edx, 0xa0
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7823: jne 0x588e78c4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7829: mov ax, word ptr [esi + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0E
        // 0x588E782D: movzx ebx, word ptr [edi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5F
        __asm _emit 0x5E
        // 0x588E7831: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588E7835: mov edx, 0xff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E783A: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588E783D: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x588E783F: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x588E7842: xor edx, 0xffaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7848: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E784E: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588E7851: ja 0x588e78c4
        __asm _emit 0x77
        __asm _emit 0x71
        // 0x588E7853: cmp ax, 0x78
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x78
        // 0x588E7857: jne 0x588e78ad
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x588E7859: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588E785C: cmp cl, 7
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x07
        // 0x588E785F: jne 0x588e78ad
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x588E7861: and bl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE3
        __asm _emit 0x0F
        // 0x588E7864: cmp bl, byte ptr [esi + 0x35c]
        __asm _emit 0x3A
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E786A: jne 0x588e78c4
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x588E786C: movzx eax, word ptr [edi + 0x62]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x62
        // 0x588E7870: cmp eax, 0x411
        __asm _emit 0x3D
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7875: je 0x588e78a1
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588E7877: cmp eax, 0x7f4
        __asm _emit 0x3D
        __asm _emit 0xF4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E787C: je 0x588e78a1
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588E787E: cmp eax, 0xbe0
        __asm _emit 0x3D
        __asm _emit 0xE0
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7883: je 0x588e78a1
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x588E7885: cmp eax, 0xfbf
        __asm _emit 0x3D
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E788A: je 0x588e78a1
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588E788C: cmp eax, 0x13ac
        __asm _emit 0x3D
        __asm _emit 0xAC
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7891: je 0x588e78a1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588E7893: cmp eax, 0x1781
        __asm _emit 0x3D
        __asm _emit 0x81
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7898: je 0x588e78a1
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588E789A: cmp eax, 0x1b6b
        __asm _emit 0x3D
        __asm _emit 0x6B
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E789F: jne 0x588e78c4
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588E78A1: pop esi
        __asm _emit 0x5E
        // 0x588E78A2: pop edi
        __asm _emit 0x5F
        // 0x588E78A3: pop ebp
        __asm _emit 0x5D
        // 0x588E78A4: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E78A9: pop ebx
        __asm _emit 0x5B
        // 0x588E78AA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E78AD: push edi
        __asm _emit 0x57
        // 0x588E78AE: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588E78B0: call 0x588e75e0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E78B5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E78B7: je 0x588e78a1
        __asm _emit 0x74
        __asm _emit 0xE8
        // 0x588E78B9: and bl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE3
        __asm _emit 0x0F
        // 0x588E78BC: cmp bl, byte ptr [esi + 0x35c]
        __asm _emit 0x3A
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E78C2: je 0x588e78a1
        __asm _emit 0x74
        __asm _emit 0xDD
        // 0x588E78C4: mov ax, word ptr [esi + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0E
        // 0x588E78C8: mov dx, word ptr [edi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x5E
        // 0x588E78CC: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588E78D0: mov ecx, 0xff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E78D5: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588E78D8: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x588E78DC: mov ecx, 0xffaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E78E1: xor dx, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xD1
        // 0x588E78E4: mov ecx, 0xff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E78E9: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x588E78EC: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588E78EF: jbe 0x588e7931
        __asm _emit 0x76
        __asm _emit 0x40
        // 0x588E78F1: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x588E78F6: je 0x588e7c00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E78FC: movzx edx, word ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x56
        __asm _emit 0x0E
        // 0x588E7900: shr edx, 4
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x04
        // 0x588E7903: and edx, ecx
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x588E7905: push edx
        __asm _emit 0x52
        // 0x588E7906: push 0x589a13f8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x13
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588E790B: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E7911: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588E7914: push eax
        __asm _emit 0x50
        // 0x588E7915: push 0x58a283a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E791A: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E7920: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588E7923: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7925: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7927: push 0x58a283a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E792C: jmp 0x588e7b62
        __asm _emit 0xE9
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7931: mov dl, byte ptr [edi + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x57
        __asm _emit 0x60
        // 0x588E7934: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588E7936: movzx ecx, word ptr [eax + 0x35e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E793D: movzx esi, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF1
        // 0x588E7940: cmp dl, byte ptr [eax + 0x35c]
        __asm _emit 0x3A
        __asm _emit 0x90
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7946: jne 0x588e7952
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588E7948: cmp word ptr [edi + 0x62], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x4F
        __asm _emit 0x62
        // 0x588E794C: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7952: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588E7954: call 0x5877b080
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x37
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588E7959: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E795B: jne 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7961: push edi
        __asm _emit 0x57
        // 0x588E7962: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588E7964: call 0x588e75e0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7969: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E796B: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7971: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E7973: lea ecx, [edi + 0x110]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7979: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7980: cmp si, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x31
        // 0x588E7983: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7989: inc eax
        __asm _emit 0x40
        // 0x588E798A: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x588E798D: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x588E7990: jl 0x588e7980
        __asm _emit 0x7C
        __asm _emit 0xEE
        // 0x588E7992: movzx ebx, word ptr [edi + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5F
        __asm _emit 0x5E
        // 0x588E7996: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x588E7998: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588E799B: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x588E799D: cmp al, 0x78
        __asm _emit 0x3C
        __asm _emit 0x78
        // 0x588E799F: jne 0x588e7a53
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E79A5: mov eax, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E79AB: mov cl, bl
        __asm _emit 0x8A
        __asm _emit 0xCB
        // 0x588E79AD: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x588E79B0: cmp cl, byte ptr [eax + 0x35c]
        __asm _emit 0x3A
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E79B6: jne 0x588e7a53
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E79BC: movzx esi, word ptr [edi + 0x62]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x77
        __asm _emit 0x62
        // 0x588E79C0: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588E79C2: mov cl, byte ptr [edx + 4]
        __asm _emit 0x8A
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x588E79C5: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588E79C8: cmp cl, 7
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x07
        // 0x588E79CB: jne 0x588e7a0a
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x588E79CD: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588E79D1: mov ecx, 0x3e0
        __asm _emit 0xB9
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E79D6: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x588E79D9: mov ecx, 0xc0
        __asm _emit 0xB9
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E79DE: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588E79E1: jne 0x588e7a0a
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x588E79E3: cmp esi, 0x19
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x19
        // 0x588E79E6: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E79EC: cmp esi, 0x41
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x41
        // 0x588E79EF: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E79F5: cmp esi, 0x7d
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x7D
        // 0x588E79F8: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E79FE: cmp esi, 0xa0
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7A04: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7A0A: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588E7A0E: mov dl, al
        __asm _emit 0x8A
        __asm _emit 0xD0
        // 0x588E7A10: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588E7A13: cmp dl, 8
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x588E7A16: jne 0x588e7a63
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x588E7A18: and eax, 0x3e0
        __asm _emit 0x25
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7A1D: cmp eax, 0xc0
        __asm _emit 0x3D
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7A22: jne 0x588e7a63
        __asm _emit 0x75
        __asm _emit 0x3F
        // 0x588E7A24: cmp esi, 0x1e
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x1E
        // 0x588E7A27: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7A2D: cmp esi, 0x47
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x47
        // 0x588E7A30: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6B
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7A36: cmp esi, 0x7c
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x7C
        // 0x588E7A39: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7A3F: cmp esi, 0xa3
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7A45: jne 0x588e7a63
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x588E7A47: pop esi
        __asm _emit 0x5E
        // 0x588E7A48: pop edi
        __asm _emit 0x5F
        // 0x588E7A49: pop ebp
        __asm _emit 0x5D
        // 0x588E7A4A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7A4F: pop ebx
        __asm _emit 0x5B
        // 0x588E7A50: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E7A53: push edi
        __asm _emit 0x57
        // 0x588E7A54: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588E7A56: call 0x588e75e0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7A5B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E7A5D: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3E
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7A63: mov eax, dword ptr [ebp + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7A69: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0E
        // 0x588E7A6D: shr ebx, 4
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588E7A70: xor ebx, 0xffaa
        __asm _emit 0x81
        __asm _emit 0xF3
        __asm _emit 0xAA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7A76: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x588E7A7A: mov edx, 0xff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7A7F: and ebx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7A85: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588E7A88: cmp cx, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588E7A8B: ja 0x588e7c00
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x6F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7A91: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x588E7A96: je 0x588e7c00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7A9C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7A9E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7AA0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7AA2: push 0x6b
        __asm _emit 0x6A
        __asm _emit 0x6B
        // 0x588E7AA4: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x40
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E7AA9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E7AAB: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xD2
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588E7AB0: pop esi
        __asm _emit 0x5E
        // 0x588E7AB1: pop edi
        __asm _emit 0x5F
        // 0x588E7AB2: pop ebp
        __asm _emit 0x5D
        // 0x588E7AB3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E7AB5: pop ebx
        __asm _emit 0x5B
        // 0x588E7AB6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E7AB9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7ABB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7ABD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7ABF: push 0x69
        __asm _emit 0x6A
        __asm _emit 0x69
        // 0x588E7AC1: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x40
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E7AC6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E7AC8: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xD2
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588E7ACD: pop esi
        __asm _emit 0x5E
        // 0x588E7ACE: pop edi
        __asm _emit 0x5F
        // 0x588E7ACF: pop ebp
        __asm _emit 0x5D
        // 0x588E7AD0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E7AD2: pop ebx
        __asm _emit 0x5B
        // 0x588E7AD3: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E7AD6: mov ax, word ptr [edi + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x5E
        // 0x588E7ADA: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588E7ADE: mov ecx, 0xffaa
        __asm _emit 0xB9
        __asm _emit 0xAA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7AE3: xor ax, cx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xC1
        // 0x588E7AE6: mov cx, word ptr [esi + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0E
        // 0x588E7AEA: mov edx, 0xff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7AEF: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x588E7AF3: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588E7AF6: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588E7AF9: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588E7AFC: ja 0x588e7b51
        __asm _emit 0x77
        __asm _emit 0x53
        // 0x588E7AFE: mov bl, byte ptr [esi + 0x35c]
        __asm _emit 0x8A
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7B04: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x588E7B06: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7B0C: push edi
        __asm _emit 0x57
        // 0x588E7B0D: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588E7B0F: call 0x588e75e0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7B14: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E7B16: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7B1C: mov al, byte ptr [edi + 0x5e]
        __asm _emit 0x8A
        __asm _emit 0x47
        __asm _emit 0x5E
        // 0x588E7B1F: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588E7B21: cmp al, bl
        __asm _emit 0x3A
        __asm _emit 0xC3
        // 0x588E7B23: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7B29: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x588E7B2E: je 0x588e7c00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7B34: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7B36: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7B38: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7B3A: push 0x78
        __asm _emit 0x6A
        __asm _emit 0x78
        // 0x588E7B3C: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x3F
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E7B41: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E7B43: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588E7B48: pop esi
        __asm _emit 0x5E
        // 0x588E7B49: pop edi
        __asm _emit 0x5F
        // 0x588E7B4A: pop ebp
        __asm _emit 0x5D
        // 0x588E7B4B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E7B4D: pop ebx
        __asm _emit 0x5B
        // 0x588E7B4E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E7B51: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x588E7B56: je 0x588e7c00
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7B5C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7B5E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7B60: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7B62: push 0x65
        __asm _emit 0x6A
        __asm _emit 0x65
        // 0x588E7B64: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x3F
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E7B69: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E7B6B: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xD1
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588E7B70: pop esi
        __asm _emit 0x5E
        // 0x588E7B71: pop edi
        __asm _emit 0x5F
        // 0x588E7B72: pop ebp
        __asm _emit 0x5D
        // 0x588E7B73: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E7B75: pop ebx
        __asm _emit 0x5B
        // 0x588E7B76: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E7B79: test dword ptr [edi + 0xb4], 0x10000000
        __asm _emit 0xF7
        __asm _emit 0x87
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x588E7B83: je 0x588e7ba9
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x588E7B85: cmp dword ptr [esp + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x588E7B8A: je 0x588e7c00
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x588E7B8C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7B8E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7B90: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E7B92: push 0x67
        __asm _emit 0x6A
        __asm _emit 0x67
        // 0x588E7B94: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x3F
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E7B99: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E7B9B: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xD1
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588E7BA0: pop esi
        __asm _emit 0x5E
        // 0x588E7BA1: pop edi
        __asm _emit 0x5F
        // 0x588E7BA2: pop ebp
        __asm _emit 0x5D
        // 0x588E7BA3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E7BA5: pop ebx
        __asm _emit 0x5B
        // 0x588E7BA6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E7BA9: lea ecx, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0xFF
        // 0x588E7BAC: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x588E7BAF: ja 0x588e7bd0
        __asm _emit 0x77
        __asm _emit 0x1F
        // 0x588E7BB1: cmp dword ptr [ebp + 0xe88], 4
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x88
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x588E7BB8: jbe 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xE3
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7BBE: mov eax, dword ptr [ebp + eax*4 + 0x9a4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E7BC5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E7BC7: je 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD4
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7BCD: push eax
        __asm _emit 0x50
        // 0x588E7BCE: jmp 0x588e7bda
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588E7BD0: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x588E7BD3: jl 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xC8
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7BD9: push edi
        __asm _emit 0x57
        // 0x588E7BDA: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588E7BDC: call 0x588e7660
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7BE1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588E7BE3: jne 0x588e78a1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E7BE9: cmp dword ptr [esp + 0x1c], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E7BED: je 0x588e7c00
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588E7BEF: push eax
        __asm _emit 0x50
        // 0x588E7BF0: push eax
        __asm _emit 0x50
        // 0x588E7BF1: push eax
        __asm _emit 0x50
        // 0x588E7BF2: push 0x7b
        __asm _emit 0x6A
        __asm _emit 0x7B
        // 0x588E7BF4: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x3E
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E7BF9: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E7BFB: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xD1
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588E7C00: pop esi
        __asm _emit 0x5E
        // 0x588E7C01: pop edi
        __asm _emit 0x5F
        // 0x588E7C02: pop ebp
        __asm _emit 0x5D
        // 0x588E7C03: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E7C05: pop ebx
        __asm _emit 0x5B
        // 0x588E7C06: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
