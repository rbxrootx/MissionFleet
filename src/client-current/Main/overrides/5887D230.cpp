// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D230 .. +0x21A bytes.
extern "C" __declspec(naked) void FUN_5887d230_segment_00() {
    __asm {
        ; Exact mapped bytes 81 EC 08 01 00 00: sub esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 89 84 24 04 01 00 00: mov dword ptr [esp + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 84 24 0C 01 00 00: mov eax, dword ptr [esp + 0x10c]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 40 02: movzx eax, word ptr [eax + 2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x02
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes B9 DD 00 00 00: mov ecx, 0xdd
        __asm _emit 0xb9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5C 24 04: mov dword ptr [esp + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 2E: je 0x5887d28e
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes BA DE 00 00 00: mov edx, 0xde
        __asm _emit 0xba
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 24: je 0x5887d28e
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes B9 DF 00 00 00: mov ecx, 0xdf
        __asm _emit 0xb9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 1A: je 0x5887d28e
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 8C 24 04 01 00 00: mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 55 F9 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 08 01 00 00: add esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 53 08: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8B 64 02 00 00: mov ecx, dword ptr [ebx + 0x264]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 81 C2 CD 01 00 00: add edx, 0x1cd
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 BB 60 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 43 04: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x04
        ; Exact mapped bytes 8B 8B 38 02 00 00: mov ecx, dword ptr [ebx + 0x238]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 B2 02 00 00: add eax, 0x2b2
        __asm _emit 0x05
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 27 60 08 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4B 08: mov ecx, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x4b
        __asm _emit 0x08
        ; Exact mapped bytes 81 C1 C2 01 00 00: add ecx, 0x1c2
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8B 38 02 00 00: mov ecx, dword ptr [ebx + 0x238]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 92 60 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8D B3 F4 01 00 00: lea esi, [ebx + 0x1f4]
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BF 03 00 00 00: mov edi, 3
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 53 08: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 81 C2 C9 01 00 00: add edx, 0x1c9
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 6F 60 08 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 83 EF 01: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d2e0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EB: mov ebp, ebx
        __asm _emit 0x8b
        __asm _emit 0xeb
        ; Exact mapped bytes 81 C5 C8 01 00 00: add ebp, 0x1c8
        __asm _emit 0x81
        __asm _emit 0xc5
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FD: mov edi, ebp
        __asm _emit 0x8b
        __asm _emit 0xfd
        ; Exact mapped bytes BB 0B 00 00 00: mov ebx, 0xb
        __asm _emit 0xbb
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2D: je 0x5887d346
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes BA 1C D6 98 58: mov edx, 0x5898d61c
        __asm _emit 0xba
        __asm _emit 0x1c
        __asm _emit 0xd6
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d33e
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d33e
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d323
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d342
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d343
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 EB 01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xeb
        __asm _emit 0x01
        ; Exact mapped bytes 75 BB: jne 0x5887d310
        __asm _emit 0x75
        __asm _emit 0xbb
        ; Exact mapped bytes 39 9C 24 20 01 00 00: cmp dword ptr [esp + 0x120], ebx
        __asm _emit 0x39
        __asm _emit 0x9c
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E4 05 00 00: je 0x5887d946
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 74 24 10: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes BF 8B 01 00 00: mov edi, 0x18b
        __asm _emit 0xbf
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 81 C6 70 02 00 00: add esi, 0x270
        __asm _emit 0x81
        __asm _emit 0xc6
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8D 53 09: lea edx, [ebx + 9]
        __asm _emit 0x8d
        __asm _emit 0x53
        __asm _emit 0x09
        ; Exact mapped bytes 89 50 50: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 68 08 02 00 00: push 0x208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 03 5F 08 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C7 14: add edi, 0x14
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x14
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 83 C6 04: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x04
        ; Exact mapped bytes 81 FF B3 01 00 00: cmp edi, 0x1b3
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7C D5: jl 0x5887d371
        __asm _emit 0x7c
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 1D 30 C0 98 58: mov ebx, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 18 F4 99 58: push 0x5899f418
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0xf4
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 30: je 0x5887d3e6
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2C: je 0x5887d3e6
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d3de
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d3de
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d3c3
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d3e2
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d3e3
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6C 24 10: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 85 CC 01 00 00: mov eax, dword ptr [ebp + 0x1cc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2D: je 0x5887d424
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes BA 22 C9 98 58: mov edx, 0x5898c922
        __asm _emit 0xba
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d41c
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d41c
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d401
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d420
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d421
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 FC F3 99 58: push 0x5899f3fc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 8D D0 01 00 00: mov ecx, dword ptr [ebp + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 38: je 0x5887d473
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 34: je 0x5887d473
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes EB 06: jmp 0x5887d450
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D450 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5887d230_segment_01() {
    __asm {
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d46b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d46b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d450
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d46f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d470
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E0 F3 99 58: push 0x5899f3e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 8D D4 01 00 00: mov ecx, dword ptr [ebp + 0x1d4]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 39: je 0x5887d4c3
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 35: je 0x5887d4c3
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes EB 07: jmp 0x5887d4a0
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D4A0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5887d230_segment_02() {
    __asm {
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d4bb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d4bb
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d4a0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d4bf
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d4c0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 C4 F3 99 58: push 0x5899f3c4
        __asm _emit 0x68
        __asm _emit 0xc4
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 8D D8 01 00 00: mov ecx, dword ptr [ebp + 0x1d8]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 39: je 0x5887d513
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 35: je 0x5887d513
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes EB 07: jmp 0x5887d4f0
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D4F0 .. +0x4CD bytes.
extern "C" __declspec(naked) void FUN_5887d230_segment_03() {
    __asm {
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d50b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d50b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d4f0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d50f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d510
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 DC 01 00 00: mov eax, dword ptr [ebp + 0x1dc]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 33: je 0x5887d553
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes BA 22 C9 98 58: mov edx, 0x5898c922
        __asm _emit 0xba
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d54b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d54b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d530
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d54f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d550
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 75 60: mov esi, dword ptr [ebp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 39 7E 74: cmp dword ptr [esi + 0x74], edi
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes 76 4C: jbe 0x5887d5a9
        __asm _emit 0x76
        __asm _emit 0x4c
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 64: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x64
        ; Exact mapped bytes 2B 56 60: sub edx, dword ptr [esi + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 72 05: jb 0x5887d572
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 00 F7 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf7
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 60: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes 8B 04 B8: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xb8
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 75 60: mov esi, dword ptr [ebp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 2B 4E 60: sub ecx, dword ptr [esi + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 83 C6 54: add esi, 0x54
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x54
        ; Exact mapped bytes C1 F9 02: sar ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 72 05: jb 0x5887d595
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 DD F6 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf6
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 0C: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 04 BA: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xba
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 8B 75 60: mov esi, dword ptr [ebp + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x60
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 3B 7E 74: cmp edi, dword ptr [esi + 0x74]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes 72 B7: jb 0x5887d560
        __asm _emit 0x72
        __asm _emit 0xb7
        ; Exact mapped bytes 68 B0 F3 99 58: push 0x5899f3b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 1C: lea eax, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 85 F0 01 00 00: mov eax, dword ptr [ebp + 0x1f0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2C: je 0x5887d5f8
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8D 54 24 14: lea edx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d5f0
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d5f0
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d5d5
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d5f4
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d5f5
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 F0 01 00 00: mov eax, dword ptr [ebp + 0x1f0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 94 24 1C 01 00 00: mov edx, dword ptr [esp + 0x11c]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 42 02: movzx eax, word ptr [edx + 2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 2D DD 00 00 00: sub eax, 0xdd
        __asm _emit 0x2d
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C9 02 00 00: je 0x5887d8e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 60 01 00 00: je 0x5887d782
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 74 07: je 0x5887d62e
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes E9 17 04 00 00: jmp 0x5887da45
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 E0 01 00 00: mov eax, dword ptr [ebp + 0x1e0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2D: je 0x5887d668
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes BA 9C F3 99 58: mov edx, 0x5899f39c
        __asm _emit 0xba
        __asm _emit 0x9c
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d660
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d660
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d645
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d664
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d665
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 E4 01 00 00: mov eax, dword ptr [ebp + 0x1e4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2E: je 0x5887d6a3
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes BA 84 F3 99 58: mov edx, 0x5899f384
        __asm _emit 0xba
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d69b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d69b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d680
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d69f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d6a0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 E8 01 00 00: mov eax, dword ptr [ebp + 0x1e8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 33: je 0x5887d6e3
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes BA 6C F3 99 58: mov edx, 0x5899f36c
        __asm _emit 0xba
        __asm _emit 0x6c
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d6db
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d6db
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d6c0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d6df
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d6e0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 EC 01 00 00: mov eax, dword ptr [ebp + 0x1ec]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 33: je 0x5887d723
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes BA 54 F3 99 58: mov edx, 0x5899f354
        __asm _emit 0xba
        __asm _emit 0x54
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d71b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d71b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d700
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d71f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d720
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 75 64: mov esi, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 39 7E 74: cmp dword ptr [esi + 0x74], edi
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes 0F 86 0F 03 00 00: jbe 0x5887da40
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 5F 01: lea ebx, [edi + 1]
        __asm _emit 0x8d
        __asm _emit 0x5f
        __asm _emit 0x01
        ; Exact mapped bytes 8B 56 64: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x64
        ; Exact mapped bytes 2B 56 60: sub edx, dword ptr [esi + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 72 05: jb 0x5887d746
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 2C F5 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf5
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 60: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes 8B 04 B8: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xb8
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 75 64: mov esi, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 2B 4E 60: sub ecx, dword ptr [esi + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 83 C6 54: add esi, 0x54
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x54
        ; Exact mapped bytes C1 F9 02: sar ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 72 05: jb 0x5887d768
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 0A F5 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf5
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 0C: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 04 BA: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xba
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 8B 75 64: mov esi, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 03 FB: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xfb
        ; Exact mapped bytes 3B 7E 74: cmp edi, dword ptr [esi + 0x74]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes 72 B7: jb 0x5887d734
        __asm _emit 0x72
        __asm _emit 0xb7
        ; Exact mapped bytes E9 BE 02 00 00: jmp 0x5887da40
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 E0 01 00 00: mov eax, dword ptr [ebp + 0x1e0]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 34: je 0x5887d7c3
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes BA 9C F3 99 58: mov edx, 0x5899f39c
        __asm _emit 0xba
        __asm _emit 0x9c
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d7bb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d7bb
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d7a0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d7bf
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d7c0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 E4 01 00 00: mov eax, dword ptr [ebp + 0x1e4]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 33: je 0x5887d803
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes BA 3C F3 99 58: mov edx, 0x5899f33c
        __asm _emit 0xba
        __asm _emit 0x3c
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d7fb
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d7fb
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d7e0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d7ff
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d800
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 E8 01 00 00: mov eax, dword ptr [ebp + 0x1e8]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 33: je 0x5887d843
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes BA 1C F3 99 58: mov edx, 0x5899f31c
        __asm _emit 0xba
        __asm _emit 0x1c
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d83b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d83b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d820
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d83f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d840
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 EC 01 00 00: mov eax, dword ptr [ebp + 0x1ec]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 33: je 0x5887d883
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes BA 00 F3 99 58: mov edx, 0x5899f300
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0xf3
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d87b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d87b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d860
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d87f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d880
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 75 64: mov esi, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 39 7E 74: cmp dword ptr [esi + 0x74], edi
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes 0F 86 AF 01 00 00: jbe 0x5887da40
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 5F 01: lea ebx, [edi + 1]
        __asm _emit 0x8d
        __asm _emit 0x5f
        __asm _emit 0x01
        ; Exact mapped bytes 8B 56 64: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x64
        ; Exact mapped bytes 2B 56 60: sub edx, dword ptr [esi + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x56
        __asm _emit 0x60
        ; Exact mapped bytes C1 FA 02: sar edx, 2
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 72 05: jb 0x5887d8a6
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 CC F3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 60: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes 8B 04 B8: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xb8
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        ; Exact mapped bytes 8B 75 64: mov esi, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 8B 4E 64: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x64
        ; Exact mapped bytes 2B 4E 60: sub ecx, dword ptr [esi + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 83 C6 54: add esi, 0x54
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x54
        ; Exact mapped bytes C1 F9 02: sar ecx, 2
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 3B F9: cmp edi, ecx
        __asm _emit 0x3b
        __asm _emit 0xf9
        ; Exact mapped bytes 72 05: jb 0x5887d8c8
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 AA F3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 56 0C: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 04 BA: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xba
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes 8B 75 64: mov esi, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 03 FB: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xfb
        ; Exact mapped bytes 3B 7E 74: cmp edi, dword ptr [esi + 0x74]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes 72 B7: jb 0x5887d894
        __asm _emit 0x72
        __asm _emit 0xb7
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x5887da40
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 75 64: mov esi, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 39 7E 74: cmp dword ptr [esi + 0x74], edi
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes 0F 86 50 01 00 00: jbe 0x5887da40
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 2B 46 60: sub eax, dword ptr [esi + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 72 05: jb 0x5887d902
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 70 F3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 60: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 8B 04 B9: mov eax, dword ptr [ecx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xb9
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 75 64: mov esi, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 8B 46 64: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x64
        ; Exact mapped bytes 2B 46 60: sub eax, dword ptr [esi + 0x60]
        __asm _emit 0x2b
        __asm _emit 0x46
        __asm _emit 0x60
        ; Exact mapped bytes 83 C6 54: add esi, 0x54
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x54
        ; Exact mapped bytes C1 F8 02: sar eax, 2
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 3B F8: cmp edi, eax
        __asm _emit 0x3b
        __asm _emit 0xf8
        ; Exact mapped bytes 72 05: jb 0x5887d929
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 49 F3 0F 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4E 0C: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 04 B9: mov eax, dword ptr [ecx + edi*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xb9
        ; Exact mapped bytes BA FD FF 00 00: mov edx, 0xfffd
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 75 64: mov esi, dword ptr [ebp + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 3B 7E 74: cmp edi, dword ptr [esi + 0x74]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x74
        ; Exact mapped bytes 72 AF: jb 0x5887d8f0
        __asm _emit 0x72
        __asm _emit 0xaf
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x5887da40
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 68 D8 F2 99 58: push 0x5899f2d8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 4D 00: mov ecx, dword ptr [ebp]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 33: je 0x5887d993
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2F: je 0x5887d993
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d98b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d98b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d970
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d98f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d990
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 B0 F2 99 58: push 0x5899f2b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 8B D0 01 00 00: mov ecx, dword ptr [ebx + 0x1d0]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 35: je 0x5887d9e3
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 31: je 0x5887d9e3
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes EB 03: jmp 0x5887d9c0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D9C0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5887d230_segment_04() {
    __asm {
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887d9db
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887d9db
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887d9c0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887d9df
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887d9e0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 88 F2 99 58: push 0x5899f288
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xf2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 8B D4 01 00 00: mov ecx, dword ptr [ebx + 0x1d4]
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 6C: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x6c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 39: je 0x5887da33
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 35: je 0x5887da33
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes BE 80 00 00 00: mov esi, 0x80
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes EB 07: jmp 0x5887da10
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DA10 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_5887d230_segment_05() {
    __asm {
        ; Exact mapped bytes 8D 8E 7E FF FF 7F: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 11: je 0x5887da2b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8A 0A: mov cl, byte ptr [edx]
        __asm _emit 0x8a
        __asm _emit 0x0a
        ; Exact mapped bytes 84 C9: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0B: je 0x5887da2b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes 83 EE 01: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x5887da10
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887da2f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 01: jne 0x5887da30
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes E8 70 CE FF FF: call 0x5887a8b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8C 24 14 01 00 00: mov ecx, dword ptr [esp + 0x114]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 33 CC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xcc
        ; Exact mapped bytes E8 83 F1 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf1
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 81 C4 08 01 00 00: add esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
