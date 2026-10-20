// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879C200 .. +0x6D3 bytes.
extern "C" __declspec(naked) void FUN_5879c200_5879C200() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 ED 1D 89 58: push 0x58891ded
        __asm _emit 0x68
        __asm _emit 0xed
        __asm _emit 0x1d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 83 EC 74: sub esp, 0x74
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x74
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 33 C5: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xc5
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 F4: lea eax, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7D 0C: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 75 10: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 89 45 88: mov dword ptr [ebp - 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x88
        ; Exact mapped bytes 89 45 84: mov dword ptr [ebp - 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 18: jne 0x5879c255
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 11 00: movups xmmword ptr [eax], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes 89 78 10: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        ; Exact mapped bytes C7 40 14 0F 00 00 00: mov dword ptr [eax + 0x14], 0xf
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 25 06 00 00: jmp 0x5879c87a
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 14 37: lea edx, [edi + esi]
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x37
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes 89 55 8C: mov dword ptr [ebp - 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x8c
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 74 21: je 0x5879c282
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 8A 01: mov al, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x01
        ; Exact mapped bytes 3C 5C: cmp al, 0x5c
        __asm _emit 0x3c
        __asm _emit 0x5c
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x5879c33e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3C 22: cmp al, 0x22
        __asm _emit 0x3c
        __asm _emit 0x22
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x5879c33e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2C 20: sub al, 0x20
        __asm _emit 0x2c
        __asm _emit 0x20
        ; Exact mapped bytes 3C 5F: cmp al, 0x5f
        __asm _emit 0x3c
        __asm _emit 0x5f
        ; Exact mapped bytes 0F 87 C1 00 00 00: ja 0x5879c33e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 75 DF: jne 0x5879c261
        __asm _emit 0x75
        __asm _emit 0xdf
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes C7 45 D0 01 00 00 00: mov dword ptr [ebp - 0x30], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 11 45 C0: movups xmmword ptr [ebp - 0x40], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes C7 45 D4 0F 00 00 00: mov dword ptr [ebp - 0x2c], 0xf
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd4
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 C0 22 00: mov word ptr [ebp - 0x40], 0x22
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xc0
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 45 C0: lea eax, [ebp - 0x40]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 A8: lea eax, [ebp - 0x58]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 AE 28 D3 FF: call 0x584ceb60
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x28
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 68 88 73 8B 58: push 0x588b7388
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes E8 D9 99 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x99
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 75 88: mov esi, dword ptr [ebp - 0x78]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x88
        ; Exact mapped bytes 8D 4D A8: lea ecx, [ebp - 0x58]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 11 06: movups xmmword ptr [esi], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        ; Exact mapped bytes C7 46 10 00 00 00 00: mov dword ptr [esi + 0x10], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 46 14 00 00 00 00: mov dword ptr [esi + 0x14], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 00: movups xmm0, xmmword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 0F 11 06: movups xmmword ptr [esi], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        ; Exact mapped bytes F3 0F 7E 40 10: movq xmm0, qword ptr [eax + 0x10]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x40
        __asm _emit 0x10
        ; Exact mapped bytes 66 0F D6 46 10: movq qword ptr [esi + 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes C7 40 10 00 00 00 00: mov dword ptr [eax + 0x10], 0
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 40 14 0F 00 00 00: mov dword ptr [eax + 0x14], 0xf
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 00 00: mov byte ptr [eax], 0
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 29 DA D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xda
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D D4: mov ecx, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd4
        ; Exact mapped bytes 83 F9 0F: cmp ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 86 65 05 00 00: jbe 0x5879c878
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 C0: mov edx, dword ptr [ebp - 0x40]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc0
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 81 F9 00 10 00 00: cmp ecx, 0x1000
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 82 49 05 00 00: jb 0x5879c86e
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x49
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 50 FC: mov edx, dword ptr [eax - 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0xfc
        ; Exact mapped bytes 83 C1 23: add ecx, 0x23
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x23
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 83 C0 FC: add eax, -4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xfc
        ; Exact mapped bytes 83 F8 1F: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1f
        ; Exact mapped bytes 0F 87 5C 05 00 00: ja 0x5879c895
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 30 05 00 00: jmp 0x5879c86e
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes C7 45 E8 00 00 00 00: mov dword ptr [ebp - 0x18], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 11 45 D8: movups xmmword ptr [ebp - 0x28], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8D 04 75 03 00 00 00: lea eax, [esi*2 + 3]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 EC 0F 00 00 00: mov dword ptr [ebp - 0x14], 0xf
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 45 D8 00: mov byte ptr [ebp - 0x28], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 FC 02 00 00 00: mov dword ptr [ebp - 4], 2
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 0F: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0f
        ; Exact mapped bytes 76 50: jbe 0x5879c3ba
        __asm _emit 0x76
        __asm _emit 0x50
        ; Exact mapped bytes 3D FF FF FF 7F: cmp eax, 0x7fffffff
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 0F 87 2F 05 00 00: ja 0x5879c8a4
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C8 0F: or eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x0f
        ; Exact mapped bytes 3D FF FF FF 7F: cmp eax, 0x7fffffff
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 76 07: jbe 0x5879c386
        __asm _emit 0x76
        __asm _emit 0x07
        ; Exact mapped bytes B8 FF FF FF 7F: mov eax, 0x7fffffff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes EB 0A: jmp 0x5879c390
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes B9 16 00 00 00: mov ecx, 0x16
        __asm _emit 0xb9
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 42 C1: cmovb eax, ecx
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0xc1
        ; Exact mapped bytes 89 45 A4: mov dword ptr [ebp - 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 8D 45 A4: lea eax, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 D8: lea eax, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 90 CD D0 FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xcd
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A4: mov ecx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 89 4D EC: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 8A 4D D8: mov cl, byte ptr [ebp - 0x28]
        __asm _emit 0x8a
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes C7 45 E8 00 00 00 00: mov dword ptr [ebp - 0x18], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x5879c3bd
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 89 55 8C: mov dword ptr [ebp - 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x8c
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 68 88 73 8B 58: push 0x588b7388
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 98 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 8A 0F: mov cl, byte ptr [edi]
        __asm _emit 0x8a
        __asm _emit 0x0f
        ; Exact mapped bytes BA FD FF 00 00: mov edx, 0xfffd
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        ; Exact mapped bytes 83 C0 F8: add eax, -8
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xf8
        ; Exact mapped bytes 88 4D A3: mov byte ptr [ebp - 0x5d], cl
        __asm _emit 0x88
        __asm _emit 0x4d
        __asm _emit 0xa3
        ; Exact mapped bytes 83 F8 54: cmp eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x54
        ; Exact mapped bytes 0F 87 9A 00 00 00: ja 0x5879c47f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 80 CC C8 79 58: movzx eax, byte ptr [eax + 0x5879c8cc]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x80
        __asm _emit 0xcc
        __asm _emit 0xc8
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes FF 24 85 AC C8 79 58: jmp dword ptr [eax*4 + 0x5879c8ac]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xc8
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 68 8C 73 8B 58: push 0x588b738c
        __asm _emit 0x68
        __asm _emit 0x8c
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E8 9E 98 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes E9 23 04 00 00: jmp 0x5879c82a
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 68 90 73 8B 58: push 0x588b7390
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E8 8A 98 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes E9 0F 04 00 00: jmp 0x5879c82a
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 68 94 73 8B 58: push 0x588b7394
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E8 76 98 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes E9 FB 03 00 00: jmp 0x5879c82a
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 68 98 73 8B 58: push 0x588b7398
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E8 62 98 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes E9 E7 03 00 00: jmp 0x5879c82a
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 68 9C 73 8B 58: push 0x588b739c
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E8 4E 98 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes E9 D3 03 00 00: jmp 0x5879c82a
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 68 A0 73 8B 58: push 0x588b73a0
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E8 3A 98 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes E9 BF 03 00 00: jmp 0x5879c82a
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 68 A4 73 8B 58: push 0x588b73a4
        __asm _emit 0x68
        __asm _emit 0xa4
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E8 26 98 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes E9 AB 03 00 00: jmp 0x5879c82a
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 7D 14 00: cmp byte ptr [ebp + 0x14], 0
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x14
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 C1: movzx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc1
        ; Exact mapped bytes 89 45 A4: mov dword ptr [ebp - 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 0F 84 32 01 00 00: je 0x5879c5c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 20: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 0F 82 85 03 00 00: jb 0x5879c81d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 89 4D 90: mov dword ptr [ebp - 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes 89 55 94: mov dword ptr [ebp - 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x94
        ; Exact mapped bytes 3B CA: cmp ecx, edx
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 73 20: jae 0x5879c4c8
        __asm _emit 0x73
        __asm _emit 0x20
        ; Exact mapped bytes 8D 41 01: lea eax, [ecx + 1]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x01
        ; Exact mapped bytes 83 FA 0F: cmp edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0f
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 8D 45 D8: lea eax, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 0F 47 45 D8: cmova eax, dword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0x47
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 8A 4D A3: mov cl, byte ptr [ebp - 0x5d]
        __asm _emit 0x8a
        __asm _emit 0x4d
        __asm _emit 0xa3
        ; Exact mapped bytes C6 40 01 00: mov byte ptr [eax + 1], 0
        __asm _emit 0xc6
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes E9 62 03 00 00: jmp 0x5879c82a
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 FF FF FF 7F: mov eax, 0x7fffffff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 82 CC 03 00 00: jb 0x5879c8a4
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 41 01: lea eax, [ecx + 1]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x01
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 89 45 98: mov dword ptr [ebp - 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 83 C9 0F: or ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x0f
        ; Exact mapped bytes 81 F9 FF FF FF 7F: cmp ecx, 0x7fffffff
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 76 07: jbe 0x5879c4f2
        __asm _emit 0x76
        __asm _emit 0x07
        ; Exact mapped bytes B9 FF FF FF 7F: mov ecx, 0x7fffffff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes EB 24: jmp 0x5879c516
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 E8: shr eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 89 45 A4: mov dword ptr [ebp - 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes B8 FF FF FF 7F: mov eax, 0x7fffffff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 2B 45 A4: sub eax, dword ptr [ebp - 0x5c]
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 76 07: jbe 0x5879c50c
        __asm _emit 0x76
        __asm _emit 0x07
        ; Exact mapped bytes B9 FF FF FF 7F: mov ecx, 0x7fffffff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes EB 0A: jmp 0x5879c516
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 45 A4: mov eax, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 42 C8: cmovb ecx, eax
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0xc8
        ; Exact mapped bytes 8D 45 A4: lea eax, [ebp - 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 89 4D A4: mov dword ptr [ebp - 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 D8: lea eax, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 0A CC D0 FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xcc
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D A4: mov ecx, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xa4
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 45 98: mov eax, dword ptr [ebp - 0x68]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 83 7D 94 0F: cmp dword ptr [ebp - 0x6c], 0xf
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x94
        __asm _emit 0x0f
        ; Exact mapped bytes 89 4D EC: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 8B 4D 90: mov ecx, dword ptr [ebp - 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 89 55 9C: mov dword ptr [ebp - 0x64], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x9c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 04 11: lea eax, [ecx + edx]
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x11
        ; Exact mapped bytes 89 45 98: mov dword ptr [ebp - 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 76 53: jbe 0x5879c59d
        __asm _emit 0x76
        __asm _emit 0x53
        ; Exact mapped bytes 8B 45 D8: mov eax, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 89 45 A4: mov dword ptr [ebp - 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes E8 39 03 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 98: mov eax, dword ptr [ebp - 0x68]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8A 4D A3: mov cl, byte ptr [ebp - 0x5d]
        __asm _emit 0x8a
        __asm _emit 0x4d
        __asm _emit 0xa3
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D 94: mov ecx, dword ptr [ebp - 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x94
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes C6 40 01 00: mov byte ptr [eax + 1], 0
        __asm _emit 0xc6
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 A4: mov eax, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 81 F9 00 10 00 00: cmp ecx, 0x1000
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 16: jb 0x5879c58b
        __asm _emit 0x72
        __asm _emit 0x16
        ; Exact mapped bytes 8B 50 FC: mov edx, dword ptr [eax - 4]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0xfc
        ; Exact mapped bytes 83 C1 23: add ecx, 0x23
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x23
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 83 C0 FC: add eax, -4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0xfc
        ; Exact mapped bytes 83 F8 1F: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1f
        ; Exact mapped bytes 0F 87 0C 03 00 00: ja 0x5879c895
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A2 4A 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 9C: mov eax, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes E9 8A 02 00 00: jmp 0x5879c827
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 D8: lea eax, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 E9 02 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 98: mov eax, dword ptr [ebp - 0x68]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x98
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8A 4D A3: mov cl, byte ptr [ebp - 0x5d]
        __asm _emit 0x8a
        __asm _emit 0x4d
        __asm _emit 0xa3
        ; Exact mapped bytes 88 08: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        ; Exact mapped bytes C6 40 01 00: mov byte ptr [eax + 1], 0
        __asm _emit 0xc6
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 9C: mov eax, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes E9 69 02 00 00: jmp 0x5879c82a
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 80 00 00 00: cmp eax, 0x80
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 82 C9 00 00 00: jb 0x5879c695
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D E0 00 00 00: cmp eax, 0xe0
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 27: jae 0x5879c5fa
        __asm _emit 0x73
        __asm _emit 0x27
        ; Exact mapped bytes 83 FE 02: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 0F 8C 3C 02 00 00: jl 0x5879c818
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 4F 01: movsx ecx, byte ptr [edi + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4f
        __asm _emit 0x01
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 83 E0 1F: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 83 E1 3F: and ecx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        ; Exact mapped bytes C1 E0 06: shl eax, 6
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x06
        ; Exact mapped bytes 4E: dec esi
        __asm _emit 0x4e
        ; Exact mapped bytes 0B C1: or eax, ecx
        __asm _emit 0x0b
        __asm _emit 0xc1
        ; Exact mapped bytes 3D 80 00 00 00: cmp eax, 0x80
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 42 C2: cmovb eax, edx
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0xc2
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x5879c692
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D F0 00 00 00: cmp eax, 0xf0
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 43: jae 0x5879c644
        __asm _emit 0x73
        __asm _emit 0x43
        ; Exact mapped bytes 83 FE 03: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x03
        ; Exact mapped bytes 0F 8C 0E 02 00 00: jl 0x5879c818
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 4F 01: movsx ecx, byte ptr [edi + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4f
        __asm _emit 0x01
        ; Exact mapped bytes 83 E0 0F: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        ; Exact mapped bytes C1 E0 06: shl eax, 6
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x06
        ; Exact mapped bytes 83 E1 3F: and ecx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        ; Exact mapped bytes 0B C8: or ecx, eax
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 EE 02: sub esi, 2
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x02
        ; Exact mapped bytes 0F BE 47 02: movsx eax, byte ptr [edi + 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x47
        __asm _emit 0x02
        ; Exact mapped bytes 83 C7 02: add edi, 2
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x02
        ; Exact mapped bytes C1 E1 06: shl ecx, 6
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x06
        ; Exact mapped bytes 83 E0 3F: and eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        ; Exact mapped bytes 0B C1: or eax, ecx
        __asm _emit 0x0b
        __asm _emit 0xc1
        ; Exact mapped bytes 8D 88 00 28 FF FF: lea ecx, [eax - 0xd800]
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 F9 FF 07 00 00: cmp ecx, 0x7ff
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 86 DB 01 00 00: jbe 0x5879c818
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 00 08 00 00: cmp eax, 0x800
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 46: jmp 0x5879c68a
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes 3D F8 00 00 00: cmp eax, 0xf8
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 C9 01 00 00: jae 0x5879c818
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FE 04: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x04
        ; Exact mapped bytes 0F 8C C0 01 00 00: jl 0x5879c818
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 4F 01: movsx ecx, byte ptr [edi + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4f
        __asm _emit 0x01
        ; Exact mapped bytes 83 E0 07: and eax, 7
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x07
        ; Exact mapped bytes C1 E0 06: shl eax, 6
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x06
        ; Exact mapped bytes 83 E1 3F: and ecx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        ; Exact mapped bytes 0B C8: or ecx, eax
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 EE 03: sub esi, 3
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x03
        ; Exact mapped bytes 0F BE 47 02: movsx eax, byte ptr [edi + 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x47
        __asm _emit 0x02
        ; Exact mapped bytes 83 E0 3F: and eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        ; Exact mapped bytes C1 E1 06: shl ecx, 6
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x06
        ; Exact mapped bytes 0B C8: or ecx, eax
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F BE 47 03: movsx eax, byte ptr [edi + 3]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x47
        __asm _emit 0x03
        ; Exact mapped bytes C1 E1 06: shl ecx, 6
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x06
        ; Exact mapped bytes 83 E0 3F: and eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        ; Exact mapped bytes 0B C1: or eax, ecx
        __asm _emit 0x0b
        __asm _emit 0xc1
        ; Exact mapped bytes 83 C7 03: add edi, 3
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x03
        ; Exact mapped bytes 3D 00 00 01 00: cmp eax, 0x10000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B9 FD FF 00 00: mov ecx, 0xfffd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 42 C1: cmovb eax, ecx
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0xc1
        ; Exact mapped bytes 89 45 A4: mov dword ptr [ebp - 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes 89 55 84: mov dword ptr [ebp - 0x7c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x84
        ; Exact mapped bytes 83 F8 20: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 0F 82 7A 01 00 00: jb 0x5879c81d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 89 4D 90: mov dword ptr [ebp - 0x70], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x90
        ; Exact mapped bytes 3D 80 00 00 00: cmp eax, 0x80
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 83 1F 01 00 00: jae 0x5879c7d2
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7D E8: mov edi, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 89 7D 90: mov dword ptr [ebp - 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0x90
        ; Exact mapped bytes 89 55 98: mov dword ptr [ebp - 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x98
        ; Exact mapped bytes 3B FA: cmp edi, edx
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 73 20: jae 0x5879c6e3
        __asm _emit 0x73
        __asm _emit 0x20
        ; Exact mapped bytes 8D 4F 01: lea ecx, [edi + 1]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x01
        ; Exact mapped bytes 83 FA 0F: cmp edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0f
        ; Exact mapped bytes 89 4D E8: mov dword ptr [ebp - 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 0F 47 4D D8: cmova ecx, dword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0x47
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 88 04 39: mov byte ptr [ecx + edi], al
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x39
        ; Exact mapped bytes C6 44 39 01 00: mov byte ptr [ecx + edi + 1], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7D 84: mov edi, dword ptr [ebp - 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x84
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x5879c82a
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 FF FF FF 7F: mov eax, 0x7fffffff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 2B C7: sub eax, edi
        __asm _emit 0x2b
        __asm _emit 0xc7
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 82 B1 01 00 00: jb 0x5879c8a4
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4F 01: lea ecx, [edi + 1]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x01
        ; Exact mapped bytes 83 C9 0F: or ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x0f
        ; Exact mapped bytes 81 F9 FF FF FF 7F: cmp ecx, 0x7fffffff
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 76 07: jbe 0x5879c708
        __asm _emit 0x76
        __asm _emit 0x07
        ; Exact mapped bytes B9 FF FF FF 7F: mov ecx, 0x7fffffff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes EB 24: jmp 0x5879c72c
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes D1 E8: shr eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 89 45 9C: mov dword ptr [ebp - 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes B8 FF FF FF 7F: mov eax, 0x7fffffff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 2B 45 9C: sub eax, dword ptr [ebp - 0x64]
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 3B D0: cmp edx, eax
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 76 07: jbe 0x5879c722
        __asm _emit 0x76
        __asm _emit 0x07
        ; Exact mapped bytes B9 FF FF FF 7F: mov ecx, 0x7fffffff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes EB 0A: jmp 0x5879c72c
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 45 9C: mov eax, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 42 C8: cmovb ecx, eax
        __asm _emit 0x0f
        __asm _emit 0x42
        __asm _emit 0xc8
        ; Exact mapped bytes 8D 45 9C: lea eax, [ebp - 0x64]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x9c
        ; Exact mapped bytes 89 4D 9C: mov dword ptr [ebp - 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 D8: lea eax, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 F4 C9 D0 FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc9
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4F 01: lea ecx, [edi + 1]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x01
        ; Exact mapped bytes 89 45 94: mov dword ptr [ebp - 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes 89 4D E8: mov dword ptr [ebp - 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 83 7D 98 0F: cmp dword ptr [ebp - 0x68], 0xf
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x98
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 4D 9C: mov ecx, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes 89 4D EC: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 8D 0C 07: lea ecx, [edi + eax]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x07
        ; Exact mapped bytes 89 4D 9C: mov dword ptr [ebp - 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes 76 53: jbe 0x5879c7ad
        __asm _emit 0x76
        __asm _emit 0x53
        ; Exact mapped bytes FF 75 90: push dword ptr [ebp - 0x70]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x90
        ; Exact mapped bytes 8B 7D D8: mov edi, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0xd8
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 29 01 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 9C: mov ecx, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 A4: mov eax, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 88 01: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        ; Exact mapped bytes C6 41 01 00: mov byte ptr [ecx + 1], 0
        __asm _emit 0xc6
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 98: mov ecx, dword ptr [ebp - 0x68]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x98
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 81 F9 00 10 00 00: cmp ecx, 0x1000
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 16: jb 0x5879c798
        __asm _emit 0x72
        __asm _emit 0x16
        ; Exact mapped bytes 8B 57 FC: mov edx, dword ptr [edi - 4]
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0xfc
        ; Exact mapped bytes 83 C1 23: add ecx, 0x23
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x23
        ; Exact mapped bytes 2B FA: sub edi, edx
        __asm _emit 0x2b
        __asm _emit 0xfa
        ; Exact mapped bytes 8D 47 FC: lea eax, [edi - 4]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0xfc
        ; Exact mapped bytes 83 F8 1F: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x1f
        ; Exact mapped bytes 0F 87 FF 00 00 00: ja 0x5879c895
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes E8 95 48 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 94: mov eax, dword ptr [ebp - 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 8B 7D 84: mov edi, dword ptr [ebp - 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x84
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes EB 7D: jmp 0x5879c82a
        __asm _emit 0xeb
        __asm _emit 0x7d
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D8 00 0B 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 9C: mov ecx, dword ptr [ebp - 0x64]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x9c
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 A4: mov eax, dword ptr [ebp - 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 8B 7D 84: mov edi, dword ptr [ebp - 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x84
        ; Exact mapped bytes 88 01: mov byte ptr [ecx], al
        __asm _emit 0x88
        __asm _emit 0x01
        ; Exact mapped bytes 8B 45 94: mov eax, dword ptr [ebp - 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x94
        ; Exact mapped bytes C6 41 01 00: mov byte ptr [ecx + 1], 0
        __asm _emit 0xc6
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes EB 58: jmp 0x5879c82a
        __asm _emit 0xeb
        __asm _emit 0x58
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 3D 00 00 01 00: cmp eax, 0x10000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 72 42: jb 0x5879c81d
        __asm _emit 0x72
        __asm _emit 0x42
        ; Exact mapped bytes 8D B0 00 00 FF FF: lea esi, [eax - 0x10000]
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes C1 E8 0A: shr eax, 0xa
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 25 FF 03 00 00: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 05 00 D8 00 00: add eax, 0xd800
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 D8: lea eax, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D6 EC FF FF: call 0x5879b4d0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 E6 FF 03 00 00: and esi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 D8: lea eax, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 81 C6 00 DC 00 00: add esi, 0xdc00
        __asm _emit 0x81
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C0 EC FF FF: call 0x5879b4d0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 75 90: mov esi, dword ptr [ebp - 0x70]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x90
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes EB 12: jmp 0x5879c82a
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes B8 FD FF 00 00: mov eax, 0xfffd
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 D8: lea eax, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A9 EC FF FF: call 0x5879b4d0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 4E: dec esi
        __asm _emit 0x4e
        ; Exact mapped bytes 3B 7D 8C: cmp edi, dword ptr [ebp - 0x74]
        __asm _emit 0x3b
        __asm _emit 0x7d
        __asm _emit 0x8c
        ; Exact mapped bytes 0F 85 97 FB FF FF: jne 0x5879c3cc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 68 88 73 8B 58: push 0x588b7388
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x73
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8D 4D D8: lea ecx, [ebp - 0x28]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes E8 5C 94 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x94
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 75 88: mov esi, dword ptr [ebp - 0x78]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x88
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 11 06: movups xmmword ptr [esi], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        ; Exact mapped bytes C7 46 10 00 00 00 00: mov dword ptr [esi + 0x10], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 45 D8: movups xmm0, xmmword ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes C7 46 14 00 00 00 00: mov dword ptr [esi + 0x14], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 11 06: movups xmmword ptr [esi], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        ; Exact mapped bytes F3 0F 7E 45 E8: movq xmm0, qword ptr [ebp - 0x18]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 66 0F D6 46 10: movq qword ptr [esi + 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes EB 0A: jmp 0x5879c878
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 BF 47 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 BF 47 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 35 47 0B 00: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x47
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E8 C7 DC D0 FF: call 0x584aa570
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xdc
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        ; Exact mapped bytes 1B C4: sbb eax, esp
        __asm _emit 0x1b
        __asm _emit 0xc4
        ; Exact mapped bytes 79 58: jns 0x5879c908
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes 6B C4 79: imul eax, esp, 0x79
        __asm _emit 0x6b
        __asm _emit 0xc4
        __asm _emit 0x79
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes C4 79 58: les edi, ptr [ecx + 0x58]
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes 2F: das
        __asm _emit 0x2f
        ; Exact mapped bytes C4 79 58: les edi, ptr [ecx + 0x58]
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes C4 79 58: les edi, ptr [ecx + 0x58]
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes F3 C3: repz ret
        __asm _emit 0xf3
        __asm _emit 0xc3
        ; Exact mapped bytes 79 58: jns 0x5879c91c
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes 07: pop es
        __asm _emit 0x07
        ; Exact mapped bytes C4 79 58: les edi, ptr [ecx + 0x58]
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes 7F C4: jg 0x5879c88e
        __asm _emit 0x7f
        __asm _emit 0xc4
        ; Exact mapped bytes 79 58: jns 0x5879c924
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes 00 01: add byte ptr [ecx], al
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 02 07: add al, byte ptr [edi]
        __asm _emit 0x02
        __asm _emit 0x07
        ; Exact mapped bytes 03 04 07: add eax, dword ptr [edi + eax]
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x07
    }
}
