// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009D170 .. +0x830 bytes.
extern "C" __declspec(naked) void FUN_1009d170_1009D170() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 18 08 00 00: je 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x1009d1ab
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1009d1a3
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0A: je 0x1009d1ab
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes EB EA: jmp 0x1009d18d
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2c0h]
        test eax, eax
        ; Exact mapped bytes 0F 85 DE 07 00 00: jne 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        sub eax, 100h
        ; Exact mapped bytes 0F 84 54 03 00 00: je 0x1009d51b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x1009d2ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 101h
        ; Exact mapped bytes 0F 85 BE 07 00 00: jne 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 298h]
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        mov edx, dword ptr [edi + 4]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 0F 8C 9F 07 00 00: jl 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp edx, ebx
        ; Exact mapped bytes 0F 8D 92 07 00 00: jge 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x92
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [eax + 8]
        mov edi, dword ptr [eax + 18h]
        add edi, ecx
        cmp edx, edi
        ; Exact mapped bytes 0F 8C 7F 07 00 00: jl 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x7f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 0F 8D 72 07 00 00: jge 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x72
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2b4h]
        mov edi, 40000000h
        cmp eax, edi
        ; Exact mapped bytes 75 41: jne 0x1009d275
        __asm _emit 0x75
        __asm _emit 0x41
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2fh
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 49 10 FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2fh
        ; Exact mapped bytes E8 7C D6 FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [esi + 2b4h], 0
        mov eax, dword ptr [esi + 2b4h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 B4 0D 00 00: call 0x1009e020
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10h
        mov ecx, dword ptr [edx + 20b00h]
        ; Exact mapped bytes E8 08 10 FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10h
        ; Exact mapped bytes E8 3B D6 FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, edi
        mov ecx, esi
        push eax
        mov dword ptr [esi + 2b4h], edi
        ; Exact mapped bytes E8 7B 0D 00 00: call 0x1009e020
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        cmp eax, 0e5h
        ; Exact mapped bytes 0F 85 2E 01 00 00: jne 0x1009d3ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [edi + 0eh]
        lea eax, [ecx - 1eh]
        cmp eax, 11h
        ; Exact mapped bytes 0F 87 CA 06 00 00: ja 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xca
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 1009d9c4h]
        ; Exact mapped bytes FF 24 95 A0 D9 09 10: jmp dword ptr [edx*4 + 0x1009d9a0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 20h
        push 8
        ; Exact mapped bytes E8 F3 DA FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 80h
        push 0ah
        ; Exact mapped bytes E8 D6 DA FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 29h
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 74 0F FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 100h
        push 0ah
        ; Exact mapped bytes E8 A7 DA FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        push 2ah
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 44 0F FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 200h
        push 4
        ; Exact mapped bytes E8 77 DA FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        push 23h
        ; Exact mapped bytes E9 B5 03 00 00: jmp 0x1009d725
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 400h
        push 5
        ; Exact mapped bytes E8 5C DA FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 24h
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 FA 0E FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x0e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 800h
        push 6
        ; Exact mapped bytes E8 2D DA FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 25h
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 CA 0E FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 1000h
        push 7
        ; Exact mapped bytes E8 FD D9 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        push 26h
        ; Exact mapped bytes E9 3B 03 00 00: jmp 0x1009d725
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, -22h
        cmp eax, 38h
        ; Exact mapped bytes 0F 87 A1 05 00 00: ja 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 1009da08h]
        ; Exact mapped bytes FF 24 8D D8 D9 09 10: jmp dword ptr [ecx*4 + 0x1009d9d8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 2000h
        push 1ah
        ; Exact mapped bytes E8 C7 D9 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 40h
        push 9
        ; Exact mapped bytes E8 AD D9 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 80h
        push 0ah
        ; Exact mapped bytes E8 90 D9 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        push 29h
        ; Exact mapped bytes E9 CE 02 00 00: jmp 0x1009d725
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 100h
        push 0ah
        ; Exact mapped bytes E8 75 D9 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2ah
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 13 0E FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 200h
        push 4
        ; Exact mapped bytes E8 46 D9 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        push 23h
        ; Exact mapped bytes E9 9A FE FF FF: jmp 0x1009d33b
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 400h
        push 5
        ; Exact mapped bytes E8 2B D9 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 24h
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 C8 0D FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 800h
        push 6
        ; Exact mapped bytes E8 FB D8 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        push 25h
        ; Exact mapped bytes E9 39 02 00 00: jmp 0x1009d725
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 1000h
        push 7
        ; Exact mapped bytes E8 E0 D8 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 26h
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 7E 0D FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 20ba4h]
        test eax, eax
        ; Exact mapped bytes 0F 85 68 04 00 00: jne 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 18 57 1C 10: mov edx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov al, byte ptr [edx + 24h]
        shr al, 1
        test al, 1
        ; Exact mapped bytes 0F 85 55 04 00 00: jne 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        cmp eax, 0e5h
        ; Exact mapped bytes 0F 85 12 02 00 00: jne 0x1009d762
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [edi + 0eh]
        lea eax, [edx - 10h]
        cmp eax, 29h
        ; Exact mapped bytes 0F 87 36 04 00 00: ja 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 1009da88h]
        ; Exact mapped bytes FF 24 95 44 DA 09 10: jmp dword ptr [edx*4 + 0x1009da44]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 20b00h]
        push 3
        ; Exact mapped bytes E8 13 0D FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 3
        ; Exact mapped bytes E8 46 D3 FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a0h]
        push 3
        ; Exact mapped bytes E8 E9 59 00 00: call 0x100a2f80
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 20b00h]
        push 1
        ; Exact mapped bytes E8 E3 0C FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x0c
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes E8 16 D3 FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a0h]
        push 1
        ; Exact mapped bytes E8 B9 59 00 00: call 0x100a2f80
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 20b00h]
        push 2
        ; Exact mapped bytes E8 B3 0C FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2
        ; Exact mapped bytes E8 E6 D2 FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a0h]
        push 2
        ; Exact mapped bytes E8 89 59 00 00: call 0x100a2f80
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 20b00h]
        push 17h
        ; Exact mapped bytes E8 83 0C FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 17h
        ; Exact mapped bytes E8 B6 D2 FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a0h]
        push 1
        ; Exact mapped bytes E8 79 57 00 00: call 0x100a2da0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 20b00h]
        push 18h
        ; Exact mapped bytes E8 53 0C FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 18h
        ; Exact mapped bytes E8 86 D2 FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a0h]
        push 0
        ; Exact mapped bytes E8 49 57 00 00: call 0x100a2da0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 40000000h
        push 80h
        push 0ah
        ; Exact mapped bytes E8 6F D7 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xd7
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0ah
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 0D 0C FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 40000000h
        push 100h
        push 0bh
        ; Exact mapped bytes E8 43 D7 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd7
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0bh
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 E0 0B FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 40000000h
        push 400h
        push 5
        ; Exact mapped bytes E8 16 D7 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd7
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 5
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 B4 0B FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 40000000h
        push 800h
        push 6
        ; Exact mapped bytes E8 EA D6 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 6
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 87 0B FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 40000000h
        push 1000h
        push 7
        ; Exact mapped bytes E8 BD D6 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        push 7
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 20b00h]
        ; Exact mapped bytes E8 5A 0B FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x0b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2b4h]
        mov edi, 40000000h
        cmp eax, edi
        ; Exact mapped bytes 75 07: jne 0x1009d755
        __asm _emit 0x75
        __asm _emit 0x07
        push 2fh
        ; Exact mapped bytes E9 E7 FA FF FF: jmp 0x1009d23c
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ecx + 20b00h]
        push 10h
        ; Exact mapped bytes E9 21 FB FF FF: jmp 0x1009d283
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, -20h
        cmp eax, 55h
        ; Exact mapped bytes 0F 87 29 02 00 00: ja 0x1009d997
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 1009db04h]
        ; Exact mapped bytes FF 24 95 B4 DA 09 10: jmp dword ptr [edx*4 + 0x1009dab4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x10
        push 40000000h
        push 80h
        push 0ah
        ; Exact mapped bytes E8 52 D6 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0ah
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 F0 0A FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x0a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 40000000h
        push 100h
        push 0bh
        ; Exact mapped bytes E8 26 D6 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0bh
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 C3 0A FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 40000000h
        push 200h
        push 4
        ; Exact mapped bytes E8 F9 D5 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        push 4
        ; Exact mapped bytes E9 37 FF FF FF: jmp 0x1009d725
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 40000000h
        push 200h
        push 4
        ; Exact mapped bytes E8 E1 D5 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 4
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 7F 0A FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 40000000h
        push 400h
        push 5
        ; Exact mapped bytes E8 B5 D5 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 5
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 52 0A FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 40000000h
        push 400h
        push 5
        ; Exact mapped bytes E8 88 D5 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        push 5
        ; Exact mapped bytes E9 C6 FE FF FF: jmp 0x1009d725
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 40000000h
        push 800h
        push 6
        ; Exact mapped bytes E8 70 D5 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 6
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 0E 0A FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 40000000h
        push 1000h
        push 7
        ; Exact mapped bytes E8 44 D5 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 7
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 E1 09 FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x09
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2b4h]
        mov edi, 40000000h
        cmp eax, edi
        ; Exact mapped bytes 75 3B: jne 0x1009d902
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ecx + 20b00h]
        push 2fh
        ; Exact mapped bytes E8 BC 09 FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2fh
        ; Exact mapped bytes E8 EF CF FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [esi + 2b4h], 0
        mov edx, dword ptr [esi + 2b4h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 27 07 00 00: call 0x1009e020
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 20b00h]
        push 10h
        ; Exact mapped bytes E8 81 09 FA FF: call 0x1003e290
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10h
        ; Exact mapped bytes E8 B4 CF FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, edi
        mov ecx, esi
        push edx
        mov dword ptr [esi + 2b4h], edi
        ; Exact mapped bytes E8 F4 06 00 00: call 0x1009e020
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 60 2B FA FF: call 0x100404a0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 40000000h
        push 20h
        push 8
        ; Exact mapped bytes E8 89 D4 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 40000000h
        push 40h
        push 9
        ; Exact mapped bytes E8 72 D4 FC FF: call 0x1006ade0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0eh
        ; Exact mapped bytes E8 52 CF FC FF: call 0x1006a8d0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 54 13 FD FF: call 0x1006ece0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 39 06 FD FF: call 0x1006dfd0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
