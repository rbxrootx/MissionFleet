// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 612 bytes in 1 exact ranges.
// Source symbol alias: FUN_587d96a0.

// Ghidra body range 0x587D96A0..0x587D9904; 612 mapped bytes.
extern "C" __declspec(naked) void FUN_587d96a0_segment_00() {
    __asm {
        // 0x587D96A0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587D96A3: push ebx
        __asm _emit 0x53
        // 0x587D96A4: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587D96A6: mov eax, dword ptr [ebx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D96AC: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D96B2: movzx eax, word ptr [ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587D96B6: push esi
        __asm _emit 0x56
        // 0x587D96B7: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587D96B9: and esi, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE6
        __asm _emit 0x1F
        // 0x587D96BC: and eax, 0x3e0
        __asm _emit 0x25
        __asm _emit 0xE0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D96C1: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587D96C5: cmp eax, 0xc0
        __asm _emit 0x3D
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D96CA: je 0x587d96d7
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D96CC: pop esi
        __asm _emit 0x5E
        // 0x587D96CD: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D96D2: pop ebx
        __asm _emit 0x5B
        // 0x587D96D3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D96D6: ret
        __asm _emit 0xC3
        // 0x587D96D7: mov edx, dword ptr [ebx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D96DD: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D96E3: movzx eax, word ptr [eax + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x0E
        // 0x587D96E7: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x587D96EA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D96EC: add eax, 5
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x05
        // 0x587D96EF: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587D96F1: push ebp
        __asm _emit 0x55
        // 0x587D96F2: push edi
        __asm _emit 0x57
        // 0x587D96F3: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D96F7: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D96FB: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D96FF: jle 0x587d9858
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9705: mov ebp, 0x9a4
        __asm _emit 0xBD
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D970A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9710: mov edx, dword ptr [ebx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x93
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9716: mov edx, dword ptr [edx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x2A
        // 0x587D9719: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D971B: jne 0x587d9758
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x587D971D: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x587D9720: jne 0x587d9737
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x587D9722: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x587D9725: je 0x587d9848
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D972B: cmp ebp, 0x9b4
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0xB4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9731: je 0x587d9848
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9737: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D9739: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D973B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D973D: push 0x4a1
        __asm _emit 0x68
        __asm _emit 0xA1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9742: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x23
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D9747: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D9749: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xB5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D974E: pop edi
        __asm _emit 0x5F
        // 0x587D974F: pop ebp
        __asm _emit 0x5D
        // 0x587D9750: pop esi
        __asm _emit 0x5E
        // 0x587D9751: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D9753: pop ebx
        __asm _emit 0x5B
        // 0x587D9754: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D9757: ret
        __asm _emit 0xC3
        // 0x587D9758: mov eax, 0x73
        __asm _emit 0xB8
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D975D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D975F: je 0x587d976b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D9761: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x587D9764: je 0x587d9770
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587D9766: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587D9769: jg 0x587d9770
        __asm _emit 0x7F
        __asm _emit 0x05
        // 0x587D976B: mov eax, 0x78
        __asm _emit 0xB8
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9770: movzx ecx, word ptr [edx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4A
        __asm _emit 0x5E
        // 0x587D9774: shr ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x587D9777: xor ecx, 0xffffffaa
        __asm _emit 0x83
        __asm _emit 0xF1
        __asm _emit 0xAA
        // 0x587D977A: and ecx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9780: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587D9782: jl 0x587d9897
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9788: mov ecx, dword ptr [ebx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D978E: mov eax, dword ptr [ecx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x29
        // 0x587D9791: mov dx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x5E
        // 0x587D9795: mov esi, dword ptr [eax + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D979B: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x587D979F: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x587D97A2: movzx edi, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xFA
        // 0x587D97A5: push edi
        __asm _emit 0x57
        // 0x587D97A6: shr esi, 1
        __asm _emit 0xD1
        __asm _emit 0xEE
        // 0x587D97A8: call 0x588e6680
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xCE
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587D97AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D97AF: je 0x587d97f6
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x587D97B1: mov ecx, dword ptr [ebx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D97B7: mov eax, dword ptr [ecx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x29
        // 0x587D97BA: push eax
        __asm _emit 0x50
        // 0x587D97BB: call 0x588e75e0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xDE
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587D97C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D97C2: je 0x587d97f6
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x587D97C4: mov ecx, dword ptr [ebx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D97CA: cmp esi, 0x47
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x47
        // 0x587D97CD: je 0x587d97e7
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587D97CF: mov eax, dword ptr [ecx + ebp]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x29
        // 0x587D97D2: push eax
        __asm _emit 0x50
        // 0x587D97D3: call 0x588e75e0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xDE
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587D97D8: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587D97DB: je 0x587d98b8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D97E1: mov ecx, dword ptr [ebx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D97E7: push edi
        __asm _emit 0x57
        // 0x587D97E8: call 0x588e6680
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xCE
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587D97ED: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587D97F0: je 0x587d98b8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D97F6: cmp dword ptr [esp + 0x14], 8
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x587D97FB: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D97FF: je 0x587d981e
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587D9801: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587D9804: je 0x587d980b
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587D9806: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587D9809: jne 0x587d981e
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587D980B: cmp esi, 0xf
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0F
        // 0x587D980E: je 0x587d981e
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D9810: cmp esi, 0x12
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x12
        // 0x587D9813: je 0x587d981e
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587D9815: cmp esi, 0xc
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0C
        // 0x587D9818: jne 0x587d98d6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D981E: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587D9821: jl 0x587d983c
        __asm _emit 0x7C
        __asm _emit 0x19
        // 0x587D9823: mov eax, dword ptr [ebx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9829: mov ecx, dword ptr [eax + ebp]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x28
        // 0x587D982C: test dword ptr [ecx + 0xb4], 0x80203c00
        __asm _emit 0xF7
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3C
        __asm _emit 0x20
        __asm _emit 0x80
        // 0x587D9836: je 0x587d983c
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587D9838: inc dword ptr [esp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D983C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D9840: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D9844: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D9848: inc ecx
        __asm _emit 0x41
        // 0x587D9849: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x587D984C: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587D984E: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D9852: jl 0x587d9710
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D9858: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x587D985B: jne 0x587d98f7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9861: cmp dword ptr [esp + 0x18], 5
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x05
        // 0x587D9866: jge 0x587d98f7
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D986C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D986E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D9870: push 0x5899b854
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xB8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587D9875: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587D987B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D987E: push eax
        __asm _emit 0x50
        // 0x587D987F: push 0x28
        __asm _emit 0x6A
        __asm _emit 0x28
        // 0x587D9881: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x22
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D9886: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D9888: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xB4
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D988D: pop edi
        __asm _emit 0x5F
        // 0x587D988E: pop ebp
        __asm _emit 0x5D
        // 0x587D988F: pop esi
        __asm _emit 0x5E
        // 0x587D9890: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D9892: pop ebx
        __asm _emit 0x5B
        // 0x587D9893: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D9896: ret
        __asm _emit 0xC3
        // 0x587D9897: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D9899: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D989B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D989D: push 0x4a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D98A2: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0x22
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D98A7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D98A9: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xB4
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D98AE: pop edi
        __asm _emit 0x5F
        // 0x587D98AF: pop ebp
        __asm _emit 0x5D
        // 0x587D98B0: pop esi
        __asm _emit 0x5E
        // 0x587D98B1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D98B3: pop ebx
        __asm _emit 0x5B
        // 0x587D98B4: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D98B7: ret
        __asm _emit 0xC3
        // 0x587D98B8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D98BA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D98BC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D98BE: push 0x2d
        __asm _emit 0x6A
        __asm _emit 0x2D
        // 0x587D98C0: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x22
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D98C5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D98C7: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xB4
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D98CC: pop edi
        __asm _emit 0x5F
        // 0x587D98CD: pop ebp
        __asm _emit 0x5D
        // 0x587D98CE: pop esi
        __asm _emit 0x5E
        // 0x587D98CF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D98D1: pop ebx
        __asm _emit 0x5B
        // 0x587D98D2: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D98D5: ret
        __asm _emit 0xC3
        // 0x587D98D6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D98D8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D98DA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D98DC: push 0x4a2
        __asm _emit 0x68
        __asm _emit 0xA2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D98E1: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x22
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D98E6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587D98E8: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xB4
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587D98ED: pop edi
        __asm _emit 0x5F
        // 0x587D98EE: pop ebp
        __asm _emit 0x5D
        // 0x587D98EF: pop esi
        __asm _emit 0x5E
        // 0x587D98F0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D98F2: pop ebx
        __asm _emit 0x5B
        // 0x587D98F3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D98F6: ret
        __asm _emit 0xC3
        // 0x587D98F7: pop edi
        __asm _emit 0x5F
        // 0x587D98F8: pop ebp
        __asm _emit 0x5D
        // 0x587D98F9: pop esi
        __asm _emit 0x5E
        // 0x587D98FA: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D98FF: pop ebx
        __asm _emit 0x5B
        // 0x587D9900: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587D9903: ret
        __asm _emit 0xC3
    }
}
