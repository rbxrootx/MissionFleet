// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EBA90 .. +0x21D bytes.
extern "C" __declspec(naked) void FUN_587eba90() {
    __asm {
        ; Exact mapped bytes 83 EC 0C: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 4C 24 18: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes C7 44 24 10 00 00 00 00: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D B1 88 1E 02 00: lea esi, [ecx + 0x21e88]
        __asm _emit 0x8d
        __asm _emit 0xb1
        __asm _emit 0x88
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 38: push 0x38
        __asm _emit 0x6a
        __asm _emit 0x38
        ; Exact mapped bytes 8D 5E F8: lea ebx, [esi - 8]
        __asm _emit 0x8d
        __asm _emit 0x5e
        __asm _emit 0xf8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 8B 11 19 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x11
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 79 04: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x04
        ; Exact mapped bytes 8B 97 0C 10 00 00: mov edx, dword ptr [edi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8A 68 02 00 00: mov ecx, dword ptr [edx + 0x268]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 4C 24 14: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8D 97 C0 02 00 00: lea edx, [edi + 0x2c0]
        __asm _emit 0x8d
        __asm _emit 0x97
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 6C 24 14: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes B9 1F 00 00 00: mov ecx, 0x1f
        __asm _emit 0xb9
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes D3 ED: shr ebp, cl
        __asm _emit 0xd3
        __asm _emit 0xed
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 83 E5 01: and ebp, 1
        __asm _emit 0x83
        __asm _emit 0xe5
        __asm _emit 0x01
        ; Exact mapped bytes 3B E9: cmp ebp, ecx
        __asm _emit 0x3b
        __asm _emit 0xe9
        ; Exact mapped bytes 75 0B: jne 0x587ebb07
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 83 7A 80 00: cmp dword ptr [edx - 0x80], 0
        __asm _emit 0x83
        __asm _emit 0x7a
        __asm _emit 0x80
        __asm _emit 0x00
        ; Exact mapped bytes 75 10: jne 0x587ebb12
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 83 3A 00: cmp dword ptr [edx], 0
        __asm _emit 0x83
        __asm _emit 0x3a
        __asm _emit 0x00
        ; Exact mapped bytes 75 3A: jne 0x587ebb41
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C2 04: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x04
        ; Exact mapped bytes 83 F8 20: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 7C D4: jl 0x587ebae4
        __asm _emit 0x7c
        __asm _emit 0xd4
        ; Exact mapped bytes EB 58: jmp 0x587ebb6a
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes 8B AC 87 40 02 00 00: mov ebp, dword ptr [edi + eax*4 + 0x240]
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0x87
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 7C 01 00 00: mov dword ptr [ebp + 0x17c], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D 70 02 00 00: lea ecx, [ebp + 0x270]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 41: je 0x587ebb6a
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8A 95 0B 03 00 00: mov dl, byte ptr [ebp + 0x30b]
        __asm _emit 0x8a
        __asm _emit 0x95
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 E2 0F: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xe2
        __asm _emit 0x0f
        ; Exact mapped bytes 80 FA 01: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 75 50: jne 0x587ebb87
        __asm _emit 0x75
        __asm _emit 0x50
        ; Exact mapped bytes B8 02 00 00 00: mov eax, 2
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes EB 4E: jmp 0x587ebb8f
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 84 87 C0 02 00 00: mov eax, dword ptr [edi + eax*4 + 0x2c0]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 88 7C 01 00 00: mov dword ptr [eax + 0x17c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 88 38 02 00 00: lea ecx, [eax + 0x238]
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 12: je 0x587ebb6a
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes BA 03 00 00 00: mov edx, 3
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 13: mov word ptr [ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x13
        ; Exact mapped bytes 0F B7 80 DA 02 00 00: movzx eax, word ptr [eax + 0x2da]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x80
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 04: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C6 38: add esi, 0x38
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x38
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 89 44 24 10: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F 8C 31 FF FF FF: jl 0x587ebab0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 13: mov word ptr [ebx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x13
        ; Exact mapped bytes 0F B7 85 26 02 00 00: movzx eax, word ptr [ebp + 0x226]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C1 E8 04: shr eax, 4
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 83 E0 7F: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        ; Exact mapped bytes 8D 04 80: lea eax, [eax + eax*4]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x80
        ; Exact mapped bytes 03 C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xc0
        ; Exact mapped bytes 89 06: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        ; Exact mapped bytes 0F B7 95 34 02 00 00: movzx edx, word ptr [ebp + 0x234]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 56 10: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        ; Exact mapped bytes 89 4E 14: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x14
        ; Exact mapped bytes 0F B7 81 A0 00 00 00: movzx eax, word ptr [ecx + 0xa0]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x81
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 46 18: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        ; Exact mapped bytes 0F AF C0: imul eax, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xc0
        ; Exact mapped bytes 0F B7 B9 9E 00 00 00: movzx edi, word ptr [ecx + 0x9e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xb9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 89 7E 1C: mov dword ptr [esi + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x1c
        ; Exact mapped bytes F7 3D C8 44 A2 58: idiv dword ptr [0x58a244c8]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 83 C7 05: add edi, 5
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x05
        ; Exact mapped bytes 0F BE 89 99 00 00 00: movsx ecx, byte ptr [ecx + 0x99]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FF: idiv edi
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes B8 64 00 00 00: mov eax, 0x64
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F AF D0: imul edx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd0
        ; Exact mapped bytes B8 1F 85 EB 51: mov eax, 0x51eb851f
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes F7 EA: imul edx
        __asm _emit 0xf7
        __asm _emit 0xea
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes C1 FA 05: sar edx, 5
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x05
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes BA 10 27 00 00: mov edx, 0x2710
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B D1: sub edx, ecx
        __asm _emit 0x2b
        __asm _emit 0xd1
        ; Exact mapped bytes 89 56 20: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8E 5E FF FF FF: jle 0x587ebb6a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes BA 04 00 00 00: mov edx, 4
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes 0F 90 C1: seto cl
        __asm _emit 0x0f
        __asm _emit 0x90
        __asm _emit 0xc1
        ; Exact mapped bytes F7 D9: neg ecx
        __asm _emit 0xf7
        __asm _emit 0xd9
        ; Exact mapped bytes 0B C8: or ecx, eax
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 0C 59 18 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x59
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 39 1E: cmp dword ptr [esi], ebx
        __asm _emit 0x39
        __asm _emit 0x1e
        ; Exact mapped bytes 89 46 FC: mov dword ptr [esi - 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0xfc
        ; Exact mapped bytes 7E 1B: jle 0x587ebc4b
        __asm _emit 0x7e
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 4C 24 18: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes E8 40 B2 FF FF: call 0x587e6e80
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E FC: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xfc
        ; Exact mapped bytes 89 04 B9: mov dword ptr [ecx + edi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xb9
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 3B 3E: cmp edi, dword ptr [esi]
        __asm _emit 0x3b
        __asm _emit 0x3e
        ; Exact mapped bytes 7C E5: jl 0x587ebc30
        __asm _emit 0x7c
        __asm _emit 0xe5
        ; Exact mapped bytes 8B 3E: mov edi, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x3e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 89 5E 08: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 89 5E 04: mov dword ptr [esi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x04
        ; Exact mapped bytes 7E 19: jle 0x587ebc72
        __asm _emit 0x7e
        __asm _emit 0x19
        ; Exact mapped bytes 8B 4E FC: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0xfc
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 3B 56 04: cmp edx, dword ptr [esi + 4]
        __asm _emit 0x3b
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 76 03: jbe 0x587ebc6a
        __asm _emit 0x76
        __asm _emit 0x03
        ; Exact mapped bytes 89 56 04: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 83 C1 04: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 3B C7: cmp eax, edi
        __asm _emit 0x3b
        __asm _emit 0xc7
        ; Exact mapped bytes 7C EE: jl 0x587ebc60
        __asm _emit 0x7c
        __asm _emit 0xee
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 8E EE FE FF FF: jle 0x587ebb6a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 7E FC: mov edi, dword ptr [esi - 4]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0xfc
        ; Exact mapped bytes 8D 14 C0: lea edx, [eax + eax*8]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0xc0
        ; Exact mapped bytes B8 CD CC CC CC: mov eax, 0xcccccccd
        __asm _emit 0xb8
        __asm _emit 0xcd
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes F7 E2: mul edx
        __asm _emit 0xf7
        __asm _emit 0xe2
        ; Exact mapped bytes C1 EA 03: shr edx, 3
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x03
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 39 10: cmp dword ptr [eax], edx
        __asm _emit 0x39
        __asm _emit 0x10
        ; Exact mapped bytes 77 0D: ja 0x587ebca2
        __asm _emit 0x77
        __asm _emit 0x0d
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 3B 0E: cmp ecx, dword ptr [esi]
        __asm _emit 0x3b
        __asm _emit 0x0e
        ; Exact mapped bytes 7C F4: jl 0x587ebc91
        __asm _emit 0x7c
        __asm _emit 0xf4
        ; Exact mapped bytes E9 C8 FE FF FF: jmp 0x587ebb6a
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 04 8F: mov eax, dword ptr [edi + ecx*4]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x8f
        ; Exact mapped bytes 89 46 08: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes E9 BD FE FF FF: jmp 0x587ebb6a
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
