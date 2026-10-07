// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 793 bytes in 1 exact ranges.
// Source symbol alias: FUN_58738940.

// Ghidra body range 0x58738940..0x58738C59; 793 mapped bytes.
extern "C" __declspec(naked) void FUN_58738940_segment_00() {
    __asm {
        // 0x58738940: push ecx
        __asm _emit 0x51
        // 0x58738941: push esi
        __asm _emit 0x56
        // 0x58738942: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58738944: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58738946: cmp byte ptr [esi + 0x100], dl
        __asm _emit 0x38
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873894C: jbe 0x58738976
        __asm _emit 0x76
        __asm _emit 0x28
        // 0x5873894E: lea eax, [esi + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738954: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58738956: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58738958: jle 0x58738967
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x5873895A: add ecx, -1
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xFF
        // 0x5873895D: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5873895F: jne 0x58738967
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58738961: mov dword ptr [eax], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58738967: movzx ecx, byte ptr [esi + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873896E: inc edx
        __asm _emit 0x42
        // 0x5873896F: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x58738972: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58738974: jl 0x58738954
        __asm _emit 0x7C
        __asm _emit 0xDE
        // 0x58738976: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58738978: lea ecx, [esi + 0xcc]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873897E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58738980: cmp dword ptr [ecx], 0
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x58738983: jne 0x5873898e
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58738985: inc eax
        __asm _emit 0x40
        // 0x58738986: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58738989: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5873898C: jl 0x58738980
        __asm _emit 0x7C
        __asm _emit 0xF2
        // 0x5873898E: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x58738991: je 0x58738c56
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738997: cmp byte ptr [esi + 0x244], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873899E: push ebx
        __asm _emit 0x53
        // 0x5873899F: push ebp
        __asm _emit 0x55
        // 0x587389A0: push edi
        __asm _emit 0x57
        // 0x587389A1: jbe 0x58738a55
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587389A7: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587389AA: mov cx, word ptr [edx + 0xe82]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x82
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587389B1: mov eax, 0xaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587389B6: xor cx, ax
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xC8
        // 0x587389B9: mov word ptr [esp + 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587389BE: jbe 0x58738a55
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587389C4: movzx ebp, byte ptr [esi + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587389CB: mov ebx, 2
        __asm _emit 0xBB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587389D0: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587389D2: jle 0x58738a09
        __asm _emit 0x7E
        __asm _emit 0x35
        // 0x587389D4: movzx edx, byte ptr [esi + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587389DB: lea eax, [esi + 0x109]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587389E1: cmp byte ptr [eax - 1], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x587389E5: jne 0x587389f8
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587389E7: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587389E9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587389EB: jbe 0x587389f8
        __asm _emit 0x76
        __asm _emit 0x0B
        // 0x587389ED: cmp dword ptr [eax + 3], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587389F1: je 0x587389f8
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587389F3: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x587389F6: sub ebx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD9
        // 0x587389F8: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x587389FB: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587389FE: jne 0x587389e1
        __asm _emit 0x75
        __asm _emit 0xE1
        // 0x58738A00: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58738A02: jle 0x58738a55
        __asm _emit 0x7E
        __asm _emit 0x51
        // 0x58738A04: mov cx, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58738A09: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58738A0B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58738A0D: jle 0x58738a55
        __asm _emit 0x7E
        __asm _emit 0x46
        // 0x58738A0F: lea eax, [esi + 0x109]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738A15: cmp byte ptr [eax - 1], 2
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58738A19: jne 0x58738a20
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58738A1B: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x58738A1E: je 0x58738a31
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58738A20: movzx edx, byte ptr [esi + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738A27: inc edi
        __asm _emit 0x47
        // 0x58738A28: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x58738A2B: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x58738A2D: jl 0x58738a15
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x58738A2F: jmp 0x58738a55
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x58738A31: cmp byte ptr [esi + 0x244], 2
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58738A38: jb 0x58738a40
        __asm _emit 0x72
        __asm _emit 0x06
        // 0x58738A3A: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58738A3E: jae 0x58738a45
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58738A40: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738A45: push ebx
        __asm _emit 0x53
        // 0x58738A46: push edi
        __asm _emit 0x57
        // 0x58738A47: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58738A49: call 0x58736e60
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58738A4E: lea ecx, [edi + edi*4 + 0x41]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0xBF
        __asm _emit 0x41
        // 0x58738A52: mov dword ptr [esi + ecx*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x8E
        // 0x58738A55: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58738A57: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58738A59: cmp byte ptr [esi + 0x100], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738A60: jbe 0x58738a8b
        __asm _emit 0x76
        __asm _emit 0x29
        // 0x58738A62: movzx edx, byte ptr [esi + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738A69: lea eax, [esi + 0x108]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738A6F: nop
        __asm _emit 0x90
        // 0x58738A70: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58738A72: cmp cl, 4
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x58738A75: je 0x58738a7c
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58738A77: cmp cl, 3
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x58738A7A: jne 0x58738a83
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58738A7C: cmp byte ptr [eax + 1], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58738A80: jne 0x58738a83
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58738A82: inc ebp
        __asm _emit 0x45
        // 0x58738A83: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x58738A86: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x58738A89: jne 0x58738a70
        __asm _emit 0x75
        __asm _emit 0xE5
        // 0x58738A8B: cmp byte ptr [esi + 0x244], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738A92: je 0x58738b81
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738A98: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58738A9A: je 0x58738b81
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738AA0: lea edx, [edi + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xBF
        // 0x58738AA3: mov al, byte ptr [esi + edx*4 + 0x108]
        __asm _emit 0x8A
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738AAA: lea ebx, [esi + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x96
        // 0x58738AAD: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x58738AAF: je 0x58738ab9
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58738AB1: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x58738AB3: jne 0x58738b66
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738AB9: cmp byte ptr [ebx + 0x109], 0
        __asm _emit 0x80
        __asm _emit 0xBB
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738AC0: jne 0x58738b66
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738AC6: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58738ACC: mov eax, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58738AD2: add eax, dword ptr [ecx + 0x10488]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58738AD8: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58738ADA: add eax, dword ptr [esi + 0x24c]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738AE0: div dword ptr [0x58a24914]
        __asm _emit 0xF7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58738AE6: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58738AEB: mov ecx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x58738AEE: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x58738AF3: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x58738AF5: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x58738AF8: lea edx, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x92
        // 0x58738AFB: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58738AFD: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x58738AFF: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x58738B02: jge 0x58738b08
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x58738B04: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58738B06: jmp 0x58738b1f
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x58738B08: cmp ecx, 7
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x07
        // 0x58738B0B: jge 0x58738b14
        __asm _emit 0x7D
        __asm _emit 0x07
        // 0x58738B0D: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738B12: jmp 0x58738b1f
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58738B14: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58738B16: cmp ecx, 9
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x58738B19: setge al
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC0
        // 0x58738B1C: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58738B1F: cmp dword ptr [esi + eax*4 + 0xcc], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738B27: jne 0x58738b47
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x58738B29: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738B30: inc eax
        __asm _emit 0x40
        // 0x58738B31: and eax, 0x80000003
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58738B36: jns 0x58738b3d
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58738B38: dec eax
        __asm _emit 0x48
        // 0x58738B39: or eax, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFC
        // 0x58738B3C: inc eax
        __asm _emit 0x40
        // 0x58738B3D: cmp dword ptr [esi + eax*4 + 0xcc], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738B45: je 0x58738b30
        __asm _emit 0x74
        __asm _emit 0xE9
        // 0x58738B47: mov eax, dword ptr [esi + eax*4 + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738B4E: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58738B50: push edi
        __asm _emit 0x57
        // 0x58738B51: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58738B53: mov dword ptr [ebx + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738B59: call 0x58736e60
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58738B5E: lea ecx, [edi + edi*4 + 0x41]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0xBF
        __asm _emit 0x41
        // 0x58738B62: mov dword ptr [esi + ecx*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x8E
        // 0x58738B65: dec ebp
        __asm _emit 0x4D
        // 0x58738B66: movzx edx, byte ptr [esi + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738B6D: inc edi
        __asm _emit 0x47
        // 0x58738B6E: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x58738B70: jne 0x58738b74
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x58738B72: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58738B74: cmp byte ptr [esi + 0x244], 0
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738B7B: jne 0x58738a98
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58738B81: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58738B83: cmp byte ptr [esi + 0x100], bl
        __asm _emit 0x38
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738B89: jbe 0x58738be8
        __asm _emit 0x76
        __asm _emit 0x5D
        // 0x58738B8B: lea edi, [esi + 0x108]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738B91: cmp dword ptr [edi + 4], -1
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0xFF
        // 0x58738B95: jne 0x58738bd9
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x58738B97: mov al, byte ptr [edi]
        __asm _emit 0x8A
        __asm _emit 0x07
        // 0x58738B99: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x58738B9B: je 0x58738ba1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58738B9D: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x58738B9F: jne 0x58738bd9
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x58738BA1: mov al, byte ptr [edi + 1]
        __asm _emit 0x8A
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x58738BA4: mov dword ptr [edi + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738BAB: add byte ptr [esi + 0x244], al
        __asm _emit 0x00
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738BB1: mov cl, byte ptr [edi]
        __asm _emit 0x8A
        __asm _emit 0x0F
        // 0x58738BB3: mov dl, byte ptr [edi + 1]
        __asm _emit 0x8A
        __asm _emit 0x57
        __asm _emit 0x01
        // 0x58738BB6: sub cl, 5
        __asm _emit 0x80
        __asm _emit 0xE9
        __asm _emit 0x05
        // 0x58738BB9: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58738BBC: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58738BC0: mov byte ptr [edi + 0xc], 0
        __asm _emit 0xC6
        __asm _emit 0x47
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58738BC4: mov byte ptr [esp + 0x10], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58738BC8: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58738BCB: push eax
        __asm _emit 0x50
        // 0x58738BCC: mov byte ptr [esp + 0x15], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x15
        // 0x58738BD0: mov byte ptr [esp + 0x16], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x58738BD4: call 0x588e3ae0
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xAF
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58738BD9: movzx ecx, byte ptr [esi + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738BE0: inc ebx
        __asm _emit 0x43
        // 0x58738BE1: add edi, 0x14
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x14
        // 0x58738BE4: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x58738BE6: jl 0x58738b91
        __asm _emit 0x7C
        __asm _emit 0xA9
        // 0x58738BE8: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58738BEA: cmp byte ptr [esi + 0x100], bl
        __asm _emit 0x38
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738BF0: jbe 0x58738c48
        __asm _emit 0x76
        __asm _emit 0x56
        // 0x58738BF2: lea edi, [esi + 0x10c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738BF8: cmp byte ptr [edi - 4], 2
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0xFC
        __asm _emit 0x02
        // 0x58738BFC: jne 0x58738c39
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x58738BFE: cmp dword ptr [edi], -1
        __asm _emit 0x83
        __asm _emit 0x3F
        __asm _emit 0xFF
        // 0x58738C01: jne 0x58738c39
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x58738C03: mov dl, byte ptr [edi - 3]
        __asm _emit 0x8A
        __asm _emit 0x57
        __asm _emit 0xFD
        // 0x58738C06: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738C0C: add byte ptr [esi + 0x244], dl
        __asm _emit 0x00
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738C12: mov al, byte ptr [edi - 4]
        __asm _emit 0x8A
        __asm _emit 0x47
        __asm _emit 0xFC
        // 0x58738C15: mov cl, byte ptr [edi - 3]
        __asm _emit 0x8A
        __asm _emit 0x4F
        __asm _emit 0xFD
        // 0x58738C18: sub al, 5
        __asm _emit 0x2C
        __asm _emit 0x05
        // 0x58738C1A: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58738C1E: mov byte ptr [edi + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58738C22: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x58738C24: mov byte ptr [esp + 0x11], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x11
        // 0x58738C28: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58738C2B: push edx
        __asm _emit 0x52
        // 0x58738C2C: mov byte ptr [esp + 0x14], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58738C30: mov byte ptr [esp + 0x16], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x58738C34: call 0x588e3ae0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0xAE
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x58738C39: movzx eax, byte ptr [esi + 0x100]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58738C40: inc ebx
        __asm _emit 0x43
        // 0x58738C41: add edi, 0x14
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x14
        // 0x58738C44: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58738C46: jl 0x58738bf8
        __asm _emit 0x7C
        __asm _emit 0xB0
        // 0x58738C48: pop edi
        __asm _emit 0x5F
        // 0x58738C49: pop ebp
        __asm _emit 0x5D
        // 0x58738C4A: pop ebx
        __asm _emit 0x5B
        // 0x58738C4B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58738C4D: pop esi
        __asm _emit 0x5E
        // 0x58738C4E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58738C51: jmp 0x58737e60
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58738C56: pop esi
        __asm _emit 0x5E
        // 0x58738C57: pop ecx
        __asm _emit 0x59
        // 0x58738C58: ret
        __asm _emit 0xC3
    }
}
