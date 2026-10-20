// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867979 .. +0x1CB bytes.
extern "C" __declspec(naked) void FUN_58867979_58867979() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 24: sub esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x24
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 CA 52 00 00: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D0: mov edx, eax
        __asm _emit 0x8b
        __asm _emit 0xd0
        ; Exact mapped bytes 89 45 E0: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 83 E0 3F: and eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        ; Exact mapped bytes C1 FA 06: sar edx, 6
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x06
        ; Exact mapped bytes 6B C0 38: imul eax, eax, 0x38
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x38
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 89 55 DC: mov dword ptr [ebp - 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 0C 95 B0 99 96 58: mov ecx, dword ptr [edx*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes 89 4D E4: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 89 7D F4: mov dword ptr [ebp - 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7d
        __asm _emit 0xf4
        ; Exact mapped bytes 8A 44 01 29: mov al, byte ptr [ecx + eax + 0x29]
        __asm _emit 0x8a
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x29
        ; Exact mapped bytes 88 45 EC: mov byte ptr [ebp - 0x14], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 3A C3: cmp al, bl
        __asm _emit 0x3a
        __asm _emit 0xc3
        ; Exact mapped bytes 75 08: jne 0x588679c6
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 89 75 F8: mov dword ptr [ebp - 8], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xf8
        ; Exact mapped bytes EB 03: jmp 0x588679c9
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 89 5D F8: mov dword ptr [ebp - 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4D F0: mov dword ptr [ebp - 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 0B: jne 0x588679e1
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x58867b3f
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 2B 48 04: sub ecx, dword ptr [eax + 4]
        __asm _emit 0x2b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 75 E4: mov esi, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes 8B C1: mov eax, ecx
        __asm _emit 0x8b
        __asm _emit 0xc1
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 89 55 FC: mov dword ptr [ebp - 4], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 03 C8: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 89 4D F0: mov dword ptr [ebp - 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 13 C2: adc eax, edx
        __asm _emit 0x13
        __asm _emit 0xc2
        ; Exact mapped bytes 8B 55 E8: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 80 7C 16 28 00: cmp byte ptr [esi + edx + 0x28], 0
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 8B 75 F8: mov esi, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0xf8
        ; Exact mapped bytes 7C 14: jl 0x58867a23
        __asm _emit 0x7c
        __asm _emit 0x14
        ; Exact mapped bytes 8B 5D F4: mov ebx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 C5 56 01 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B DE: mov ebx, esi
        __asm _emit 0x8b
        __asm _emit 0xde
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x58867b25
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 75 1C: push dword ptr [ebp + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 75 E0: mov esi, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 BD 98 00 00: call 0x588712f0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 3B 45 0C: cmp eax, dword ptr [ebp + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 75 4B: jne 0x58867a86
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 3B 55 10: cmp edx, dword ptr [ebp + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 75 46: jne 0x58867a86
        __asm _emit 0x75
        __asm _emit 0x46
        ; Exact mapped bytes 8B 75 08: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes FF 75 EC: push dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 4E 04: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x04
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 B5 02 00 00: call 0x58867d0a
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 03 4D F0: add ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x03
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 46 0C: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 13 55 FC: adc edx, dword ptr [ebp - 4]
        __asm _emit 0x13
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C1 E8 05: shr eax, 5
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x58867b14
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8A 45 EC: mov al, byte ptr [ebp - 0x14]
        __asm _emit 0x8a
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 3A C3: cmp al, bl
        __asm _emit 0x3a
        __asm _emit 0xc3
        ; Exact mapped bytes 74 04: je 0x58867a7a
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3C 02: cmp al, 2
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 75 03: jne 0x58867a7d
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 03 CB: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xcb
        ; Exact mapped bytes 13 D7: adc edx, edi
        __asm _emit 0x13
        __asm _emit 0xd7
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x58867b14
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 75 1C: push dword ptr [ebp + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF 75 10: push dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 5A 98 00 00: call 0x588712f0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 23 C2: and eax, edx
        __asm _emit 0x23
        __asm _emit 0xc2
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 83 CA FF: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0xff
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 07: jne 0x58867aa9
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x58867b3f
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 7D FC: cmp dword ptr [ebp - 4], edi
        __asm _emit 0x39
        __asm _emit 0x7d
        __asm _emit 0xfc
        ; Exact mapped bytes 7F 2F: jg 0x58867add
        __asm _emit 0x7f
        __asm _emit 0x2f
        ; Exact mapped bytes B8 00 02 00 00: mov eax, 0x200
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 7C 05: jl 0x58867abd
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes 39 45 F0: cmp dword ptr [ebp - 0x10], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 77 20: ja 0x58867add
        __asm _emit 0x77
        __asm _emit 0x20
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C1 E8 06: shr eax, 6
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 74 12: je 0x58867add
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C1 E8 08: shr eax, 8
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 75 04: jne 0x58867add
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 8B D7: mov edx, edi
        __asm _emit 0x8b
        __asm _emit 0xd7
        ; Exact mapped bytes EB 0A: jmp 0x58867ae7
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 18: mov eax, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x18
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4D DC: mov ecx, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 0C 8D B0 99 96 58: mov ecx, dword ptr [ecx*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes F6 44 08 28 04: test byte ptr [eax + ecx + 0x28], 4
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x28
        __asm _emit 0x04
        ; Exact mapped bytes 74 16: je 0x58867b11
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8A 45 EC: mov al, byte ptr [ebp - 0x14]
        __asm _emit 0x8a
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 3A C3: cmp al, bl
        __asm _emit 0x3a
        __asm _emit 0xc3
        ; Exact mapped bytes 74 04: je 0x58867b06
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3C 02: cmp al, 2
        __asm _emit 0x3c
        __asm _emit 0x02
        ; Exact mapped bytes 75 03: jne 0x58867b09
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E9 6C FF FF FF: jmp 0x58867a7d
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes FF 75 F4: push dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 5D F8: mov ebx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 BE 55 01 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes FF 75 F4: push dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes FF 75 18: push dword ptr [ebp + 0x18]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes 8B F0: mov esi, eax
        __asm _emit 0x8b
        __asm _emit 0xf0
        ; Exact mapped bytes FF 75 14: push dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes E8 AB 55 01 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 2B C6: sub eax, esi
        __asm _emit 0x2b
        __asm _emit 0xc6
        ; Exact mapped bytes 1B D7: sbb edx, edi
        __asm _emit 0x1b
        __asm _emit 0xd7
        ; Exact mapped bytes 03 45 0C: add eax, dword ptr [ebp + 0xc]
        __asm _emit 0x03
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 13 55 10: adc edx, dword ptr [ebp + 0x10]
        __asm _emit 0x13
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
