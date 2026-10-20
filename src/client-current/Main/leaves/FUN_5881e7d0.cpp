// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881E7D0 .. +0x580 bytes.
extern "C" __declspec(naked) void FUN_5881e7d0() {
    __asm {
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
        ; Exact mapped bytes 0F 84 67 05 00 00: je 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        cmp dword ptr [esi + 0d1ch], ebx
        ; Exact mapped bytes 75 0D: jne 0x5881e7f9
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp byte ptr [esi + 9ch], 5
        ; Exact mapped bytes 0F 84 50 05 00 00: je 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 14h]
        cmp eax, ebx
        ; Exact mapped bytes 74 2B: je 0x5881e82f
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebx
        ; Exact mapped bytes 74 1B: je 0x5881e826
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes EB 03: jmp 0x5881e810
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0D: je 0x5881e82f
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp eax, ebx
        ; Exact mapped bytes 75 EA: jne 0x5881e810
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 70h], ebx
        ; Exact mapped bytes 0F 84 75 04 00 00: je 0x5881ecad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0cch], ebx
        ; Exact mapped bytes 0F 84 69 04 00 00: je 0x5881ecad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 0d0h], 0fh
        ; Exact mapped bytes 0F 85 5C 04 00 00: jne 0x5881ecad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        add eax, 0fffffe00h
        cmp eax, 4
        ; Exact mapped bytes 0F 87 E7 04 00 00: ja 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 54 ED 81 58: jmp dword ptr [eax*4 + 0x5881ed54]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xed
        __asm _emit 0x81
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, 4
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 C6 2C F1 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2c
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C7 04 00 00: je 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 19: je 0x5881e8a5
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 F9 90 0E 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x90
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov al, byte ptr [esi + 9ch]
        cmp al, bl
        ; Exact mapped bytes 74 5D: je 0x5881e90c
        __asm _emit 0x74
        __asm _emit 0x5d
        cmp al, 5
        ; Exact mapped bytes 74 59: je 0x5881e90c
        __asm _emit 0x74
        __asm _emit 0x59
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        sub edx, dword ptr [esi + 4]
        push 2
        mov dword ptr [esi + 0bch], edx
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 8]
        sub ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 0c0h], ecx
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 0b4h], edx
        mov eax, dword ptr [eax + 8]
        mov ecx, esi
        mov dword ptr [esi + 0b8h], eax
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 0ach], ebx
        ; Exact mapped bytes E8 2E FB FF FF: call 0x5881e430
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0b0h], 1
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add edi, 4
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 1A 2C F1 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x2c
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 1B 04 00 00: je 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0d4h], ebx
        ; Exact mapped bytes 0F 85 0F 04 00 00: jne 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0a8h], ebx
        ; Exact mapped bytes 74 31: je 0x5881e973
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [edi]
        sub ecx, dword ptr [esi + 0bch]
        push 1
        mov dword ptr [esi + 0c4h], ecx
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        sub eax, dword ptr [esi + 0c0h]
        mov ecx, esi
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 32 FB FF FF: call 0x5881e4a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x5881ea6a
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0d18h], ebx
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x5881ea20
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d14h]
        mov eax, dword ptr [ecx + 84h]
        mov ecx, dword ptr [esi + 0d8h]
        cmp eax, ebx
        ; Exact mapped bytes 74 3C: je 0x5881e9d1
        __asm _emit 0x74
        __asm _emit 0x3c
        push eax
        ; Exact mapped bytes E8 25 A1 02 00: call 0x58848ac0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        push ebx
        ; Exact mapped bytes E8 39 9D 02 00: call 0x588486e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d8h]
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
        cmp al, 5
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x5881ea64
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x5881ea64
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 75 0D: jne 0x5881e9ee
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0d8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 0d8h]
        mov edx, dword ptr [ecx + 110h]
        lea eax, [esi + 0cfch]
        push eax
        add edx, 78h
        push edx
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 0d8h]
        mov ecx, dword ptr [eax + 110h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 44: jmp 0x5881ea64
        __asm _emit 0xeb
        __asm _emit 0x44
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 75 2E: jne 0x5881ea64
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 0d8h]
        lea eax, [esi + 4]
        push eax
        ; Exact mapped bytes E8 6B B0 02 00: call 0x58849ab0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 0d14h]
        mov ecx, dword ptr [eax + 68h]
        dec ecx
        cmp dword ptr [eax + 64h], ecx
        ; Exact mapped bytes 7D 03: jge 0x5881ea64
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [eax + 64h], ecx
        mov dword ptr [esi + 0d18h], ebx
        or ecx, 0ffffffffh
        pop edi
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 0b0h], ebx
        ; Exact mapped bytes 66 89 8E A4 00 00 00: mov word ptr [esi + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add edx, 4
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 A6 2A F1 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2a
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A7 02 00 00: je 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0dch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 5
        ; Exact mapped bytes 0F 85 8D 02 00 00: jne 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 0d14h]
        mov ecx, dword ptr [eax + 68h]
        dec ecx
        cmp dword ptr [eax + 64h], ecx
        ; Exact mapped bytes 0F 8D 6D 02 00 00: jge 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        mov dword ptr [eax + 64h], ecx
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 5ch]
        mov edi, dword ptr [edx + 4]
        mov eax, dword ptr [ecx + 4]
        mov ebp, dword ptr [edx + 8]
        mov ecx, dword ptr [ecx + 8]
        sub eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 1eh
        ; Exact mapped bytes 7D 33: jge 0x5881eb3d
        __asm _emit 0x7d
        __asm _emit 0x33
        mov eax, ecx
        sub eax, ebp
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 28h
        ; Exact mapped bytes 7D 25: jge 0x5881eb3d
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [esi + 58h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 09: je 0x5881eb2d
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 58h]
        push ebx
        ; Exact mapped bytes E8 C3 2A F1 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x2a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + 5ch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 75 2E: jne 0x5881eb67
        __asm _emit 0x75
        __asm _emit 0x2e
        push 1
        ; Exact mapped bytes EB 22: jmp 0x5881eb5f
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [esi + 58h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 0A: jne 0x5881eb52
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 58h]
        push 1
        ; Exact mapped bytes E8 9E 2A F1 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x2a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5ch]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 09: je 0x5881eb67
        __asm _emit 0x74
        __asm _emit 0x09
        push ebx
        mov ecx, dword ptr [esi + 5ch]
        ; Exact mapped bytes E8 89 2A F1 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x2a
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [esi + 0a8h], ebx
        ; Exact mapped bytes 74 74: je 0x5881ebe8
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [esi + 0bch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        cmp ecx, -5
        ; Exact mapped bytes 7C 1A: jl 0x5881eb9e
        __asm _emit 0x7c
        __asm _emit 0x1a
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        cmp ecx, 3d5h
        ; Exact mapped bytes 7F 0D: jg 0x5881eb9e
        __asm _emit 0x7f
        __asm _emit 0x0d
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 47 47 0E 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x47
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes 8B 15 80 45 A2 58: mov edx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        sub eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 3B 15 A8 45 A2 58: cmp edx, dword ptr [0x58a245a8]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 0C: je 0x5881ebc1
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp eax, 0fh
        ; Exact mapped bytes 7C 1B: jl 0x5881ebd5
        __asm _emit 0x7c
        __asm _emit 0x1b
        cmp eax, 2b2h
        ; Exact mapped bytes EB 0A: jmp 0x5881ebcb
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp eax, 0fh
        ; Exact mapped bytes 7C 0F: jl 0x5881ebd5
        __asm _emit 0x7c
        __asm _emit 0x0f
        cmp eax, 20ah
        ; Exact mapped bytes 7F 08: jg 0x5881ebd5
        __asm _emit 0x7f
        __asm _emit 0x08
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8B 47 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0e
        __asm _emit 0x00
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 C2 F8 FF FF: call 0x5881e4a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 0b0h], ebx
        ; Exact mapped bytes 74 3D: je 0x5881ec2d
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [eax + 4]
        mov edi, dword ptr [eax + 8]
        mov eax, dword ptr [esi + 0b4h]
        sub eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 1
        ; Exact mapped bytes 7F 12: jg 0x5881ec1a
        __asm _emit 0x7f
        __asm _emit 0x12
        mov eax, dword ptr [esi + 0b8h]
        sub eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 1
        ; Exact mapped bytes 7E 0A: jle 0x5881ec24
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov dword ptr [esi + 0a8h], 1
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 08 29 F1 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x29
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5881ec7b
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp dword ptr [esi + 0ach], ebx
        ; Exact mapped bytes 0F 85 01 01 00 00: jne 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0a0h], ebx
        ; Exact mapped bytes 0F 85 F5 00 00 00: jne 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 1
        ; Exact mapped bytes 66 89 8E A4 00 00 00: mov word ptr [esi + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, esi
        mov dword ptr [esi + 0ach], 1
        ; Exact mapped bytes E8 BE F7 FF FF: call 0x5881e430
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 0ach], ebx
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 0a0h], 1
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or edx, 0ffffffffh
        pop edi
        mov dword ptr [esi + 0ach], ebx
        ; Exact mapped bytes 66 89 96 A4 00 00 00: mov word ptr [esi + 0xa4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 200h
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x5881ed49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 5ch]
        mov edi, dword ptr [edx + 4]
        mov eax, dword ptr [ecx + 4]
        mov ebp, dword ptr [edx + 8]
        mov ecx, dword ptr [ecx + 8]
        sub eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 1eh
        ; Exact mapped bytes 7D 42: jge 0x5881ed1d
        __asm _emit 0x7d
        __asm _emit 0x42
        mov eax, ecx
        sub eax, ebp
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 28h
        ; Exact mapped bytes 7D 34: jge 0x5881ed1d
        __asm _emit 0x7d
        __asm _emit 0x34
        mov eax, dword ptr [esi + 58h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 09: je 0x5881ecfe
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 58h]
        push ebx
        ; Exact mapped bytes E8 F2 28 F1 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x28
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [esi + 5ch]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 40: jne 0x5881ed49
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, dword ptr [esi + 5ch]
        push 1
        ; Exact mapped bytes E8 DD 28 F1 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x28
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 75 08: jne 0x5881ed31
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi + 58h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov eax, dword ptr [esi + 5ch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 0C: je 0x5881ed49
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 5ch]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
    }
}
