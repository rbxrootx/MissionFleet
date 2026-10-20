// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BDDB0 .. +0x5DA bytes.
extern "C" __declspec(naked) void FUN_588bddb0() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 77 04 00 00: je 0x588be23a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 18h]
        xor ebx, ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 27: je 0x588bddf7
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebx
        ; Exact mapped bytes 74 16: je 0x588bdded
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0E: je 0x588bddf7
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, ebx
        ; Exact mapped bytes 75 EA: jne 0x588bddd7
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 203h
        ; Exact mapped bytes 0F 87 5C 05 00 00: ja 0x588be361
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E5 03 00 00: je 0x588be1f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 BB 03 00 00: je 0x588be1d1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 201h
        ; Exact mapped bytes 0F 85 19 04 00 00: jne 0x588be23a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 3dch]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 75 0D: jne 0x588bde42
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 3dch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 2A FB FF FF: call 0x588bd980
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 74h]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 D9 36 E7 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x36
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 78: je 0x588bdee3
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [esi + 3d4h]
        cmp dword ptr [ecx + 88h], ebx
        ; Exact mapped bytes 7E 6A: jle 0x588bdee3
        __asm _emit 0x7e
        __asm _emit 0x6a
        cmp dword ptr [esi + 3e0h], ebx
        ; Exact mapped bytes 75 24: jne 0x588bdea5
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3dch]
        push 58h
        push 2b2h
        ; Exact mapped bytes E8 FD 53 04 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 3dch]
        mov dword ptr [edx + 148h], 1
        ; Exact mapped bytes EB 0C: jmp 0x588bdeb1
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 3dch]
        mov dword ptr [eax + 148h], ebx
        mov ecx, dword ptr [esi + 3d4h]
        push ebx
        push ebx
        ; Exact mapped bytes E8 02 A3 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3d4h]
        push eax
        ; Exact mapped bytes E8 76 A2 04 00: call 0x58908140
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3dch]
        push eax
        ; Exact mapped bytes E8 EA 0E 00 00: call 0x588bedc0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3dch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        lea edi, [esi + 78h]
        mov dword ptr [esp + 18h], eax
        lea ebp, [esi + 3d4h]
        mov dword ptr [esp + 10h], edi
        ; Exact mapped bytes EB 08: jmp 0x588bdf00
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp]
        cmp eax, dword ptr [ecx + 88h]
        ; Exact mapped bytes 0F 8D 85 01 00 00: jge 0x588be094
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 20 36 E7 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x36
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 53 01 00 00: je 0x588be07b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 24h
        ; Exact mapped bytes 7E 16: jle 0x588bdf4c
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], ebx
        ; Exact mapped bytes 74 0E: je 0x588bdf4c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x588bdf4e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 36 9A 04 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 24h
        ; Exact mapped bytes 7E 16: jle 0x588bdf7e
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], ebx
        ; Exact mapped bytes 74 0E: je 0x588bdf7e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x588bdf80
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 0F 85 B0 00 00 00: jne 0x588be047
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 3e0h], ebx
        ; Exact mapped bytes 75 75: jne 0x588be014
        __asm _emit 0x75
        __asm _emit 0x75
        xor edi, edi
        cmp byte ptr [esi + 0aeh], bl
        ; Exact mapped bytes 76 25: jbe 0x588bdfce
        __asm _emit 0x76
        __asm _emit 0x25
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 08 A2 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + eax*4 + 240h], ebx
        movzx eax, byte ptr [esi + 0aeh]
        inc edi
        add ebp, 4
        cmp edi, eax
        ; Exact mapped bytes 7C E2: jl 0x588bdfb0
        __asm _emit 0x7c
        __asm _emit 0xe2
        mov byte ptr [esi + 0aeh], bl
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        inc ecx
        push ecx
        add edx, 32h
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 94 F9 FF FF: call 0x588bd980
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3d4h]
        lea ebp, [esi + 3d4h]
        ; Exact mapped bytes E8 C3 A1 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [esp + 10h]
        mov dword ptr [esi + eax*4 + 240h], 1
        inc byte ptr [esi + 0aeh]
        ; Exact mapped bytes EB 60: jmp 0x588be074
        __asm _emit 0xeb
        __asm _emit 0x60
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        inc ecx
        push ecx
        add edx, 32h
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 54 F9 FF FF: call 0x588bd980
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 8C A1 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + eax*4 + 240h], 1
        inc byte ptr [esi + 0aeh]
        ; Exact mapped bytes EB 2D: jmp 0x588be074
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        inc ecx
        push ecx
        add edx, 32h
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 21 F9 FF FF: call 0x588bd980
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp]
        ; Exact mapped bytes E8 59 A1 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + eax*4 + 240h], ebx
        dec byte ptr [esi + 0aeh]
        mov ecx, esi
        ; Exact mapped bytes E8 15 EC FF FF: call 0x588bcc90
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        inc eax
        add edi, 4
        cmp eax, 7
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 10h], edi
        ; Exact mapped bytes 0F 8C 6C FE FF FF: jl 0x588bdf00
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 3e0h], ebx
        ; Exact mapped bytes 0F 85 27 01 00 00: jne 0x588be1c7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D C8 84 A2 58: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edi, edi
        add ebx, 4
        lea ebp, [esi + 3d4h]
        mov ecx, dword ptr [ebp]
        push ebx
        ; Exact mapped bytes E8 86 34 E7 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x588be0cf
        __asm _emit 0x75
        __asm _emit 0x11
        inc edi
        add ebp, 4
        cmp edi, 2
        ; Exact mapped bytes 7C EA: jl 0x588be0b1
        __asm _emit 0x7c
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebx, 24h
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 17: jle 0x588be0f8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588be0f8
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x588be0fa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 8A 98 04 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 17: jle 0x588be12a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588be12a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x588be12c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test edi, edi
        ; Exact mapped bytes 75 13: jne 0x588be14c
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [esi + 3d4h]
        ; Exact mapped bytes E8 7C A0 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3d8h]
        ; Exact mapped bytes EB 16: jmp 0x588be162
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp edi, 1
        ; Exact mapped bytes 75 17: jne 0x588be168
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 3d8h]
        ; Exact mapped bytes E8 64 A0 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3d4h]
        push eax
        ; Exact mapped bytes E8 C8 A6 04 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa6
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3d4h]
        ; Exact mapped bytes E8 4D A0 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 50: jl 0x588be1c7
        __asm _emit 0x7c
        __asm _emit 0x50
        xor eax, eax
        lea edi, [esi + 240h]
        mov ecx, 64h
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov byte ptr [esi + 0aeh], al
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        inc ecx
        push ecx
        add edx, 32h
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 DC F7 FF FF: call 0x588bd980
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3d4h]
        ; Exact mapped bytes E8 11 A0 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + eax*4 + 240h], 1
        inc byte ptr [esi + 0aeh]
        mov ecx, esi
        ; Exact mapped bytes E8 C9 EA FF FF: call 0x588bcc90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 8], 1bh
        ; Exact mapped bytes 75 63: jne 0x588be23a
        __asm _emit 0x75
        __asm _emit 0x63
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        mov dword ptr [esi + 3d0h], ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 3e0h], ebx
        ; Exact mapped bytes 74 42: je 0x588be23a
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 1D C8 84 A2 58: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        xor ebp, ebp
        lea edi, [esi + 3d4h]
        mov ecx, dword ptr [edi]
        lea eax, [ebx + 4]
        push eax
        ; Exact mapped bytes E8 2F 33 E7 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x33
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x588be231
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ebx + 8]
        mov edx, dword ptr [ecx + 4]
        push eax
        add edx, 5
        push edx
        ; Exact mapped bytes E8 29 A5 04 00: call 0x58908750
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 1A: jge 0x588be245
        __asm _emit 0x7d
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 1D C8 84 A2 58: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        inc ebp
        add edi, 4
        cmp ebp, 2
        ; Exact mapped bytes 7C CC: jl 0x588be206
        __asm _emit 0x7c
        __asm _emit 0xcc
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 24h
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x588be26e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588be26e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 90h]
        ; Exact mapped bytes EB 02: jmp 0x588be270
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 14 97 04 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x588be2a0
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588be2a0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x588be2a2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test ebp, ebp
        ; Exact mapped bytes 75 13: jne 0x588be2c2
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [esi + 3d4h]
        ; Exact mapped bytes E8 06 9F 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3d8h]
        ; Exact mapped bytes EB 16: jmp 0x588be2d8
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp ebp, 1
        ; Exact mapped bytes 75 17: jne 0x588be2de
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 3d8h]
        ; Exact mapped bytes E8 EE 9E 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3d4h]
        push eax
        ; Exact mapped bytes E8 52 A5 04 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3d4h]
        ; Exact mapped bytes E8 D7 9E 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C 49 FF FF FF: jl 0x588be23a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3d4h]
        ; Exact mapped bytes E8 C4 9E 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        cmp dword ptr [esi + eax*4 + 240h], ecx
        sete cl
        mov edi, ecx
        mov ecx, dword ptr [esi + 3d4h]
        ; Exact mapped bytes E8 AB 9E 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + eax*4 + 240h], edi
        mov ecx, dword ptr [esi + 3d4h]
        ; Exact mapped bytes E8 99 9E 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + eax*4 + 240h], 0
        ; Exact mapped bytes 74 18: je 0x588be349
        __asm _emit 0x74
        __asm _emit 0x18
        inc byte ptr [esi + 0aeh]
        mov ecx, esi
        ; Exact mapped bytes E8 52 E9 FF FF: call 0x588bcc90
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        dec byte ptr [esi + 0aeh]
        mov ecx, esi
        ; Exact mapped bytes E8 3A E9 FF FF: call 0x588bcc90
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 20ah
        ; Exact mapped bytes 0F 85 CE FE FF FF: jne 0x588be23a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 39 5F 0A: cmp word ptr [edi + 0xa], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5f
        __asm _emit 0x0a
        mov ecx, esi
        ; Exact mapped bytes 7E 0F: jle 0x588be383
        __asm _emit 0x7e
        __asm _emit 0x0f
        ; Exact mapped bytes E8 57 F5 FF FF: call 0x588bd8d0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 98 F5 FF FF: call 0x588bd920
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
    }
}
