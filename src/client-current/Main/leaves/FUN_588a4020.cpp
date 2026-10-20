// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A4020 .. +0x432 bytes.
extern "C" __declspec(naked) void FUN_588a4020() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 83 4E 24 0F: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push edi
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 18h], 0
        ; Exact mapped bytes E8 46 F2 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf2
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        mov ebx, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 8]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a0h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0ach]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b0h]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        lea eax, [esi + 80h]
        mov dword ptr [esp + 14h], 7
        mov ebp, 1
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax - 1ch]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        add eax, 4
        sub dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 75 E5: jne 0x588a40f0
        __asm _emit 0x75
        __asm _emit 0xe5
        add edi, 3
        cmp dword ptr [esi + 0d0h], 0
        ; Exact mapped bytes 74 4D: je 0x588a4164
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 0ach]
        push edi
        push ebx
        ; Exact mapped bytes E8 6C F1 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 64h]
        lea eax, [ebx - 15h]
        push edi
        push eax
        ; Exact mapped bytes E8 54 F1 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push edi
        lea eax, [ebx - 15h]
        push eax
        ; Exact mapped bytes E8 44 F1 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        add edi, 14h
        mov dword ptr [esp + 10h], ebp
        cmp dword ptr [esi + 0d4h], 0
        ; Exact mapped bytes 74 4D: je 0x588a41ba
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 0b0h]
        push edi
        push ebx
        ; Exact mapped bytes E8 16 F1 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 68h]
        lea eax, [ebx - 15h]
        push edi
        push eax
        ; Exact mapped bytes E8 FE F0 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        push edi
        lea eax, [ebx - 15h]
        push eax
        ; Exact mapped bytes E8 EE F0 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        add edi, 14h
        mov dword ptr [esp + 10h], ebp
        cmp dword ptr [esi + 0d8h], 0
        ; Exact mapped bytes 74 4D: je 0x588a4210
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 0b4h]
        push edi
        push ebx
        ; Exact mapped bytes E8 C0 F0 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 6ch]
        lea eax, [ebx - 15h]
        push edi
        push eax
        ; Exact mapped bytes E8 A8 F0 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push edi
        lea eax, [ebx - 15h]
        push eax
        ; Exact mapped bytes E8 98 F0 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        add edi, 14h
        mov dword ptr [esp + 10h], ebp
        cmp dword ptr [esi + 0dch], 0
        ; Exact mapped bytes 74 4D: je 0x588a4266
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 0b8h]
        push edi
        push ebx
        ; Exact mapped bytes E8 6A F0 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b8h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 6ch]
        lea eax, [ebx - 15h]
        push edi
        push eax
        ; Exact mapped bytes E8 52 F0 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push edi
        lea eax, [ebx - 15h]
        push eax
        ; Exact mapped bytes E8 42 F0 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        add edi, 14h
        mov dword ptr [esp + 10h], ebp
        cmp dword ptr [esi + 0e0h], 0
        ; Exact mapped bytes 74 4D: je 0x588a42bc
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 0bch]
        push edi
        push ebx
        ; Exact mapped bytes E8 14 F0 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0bch]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 70h]
        lea eax, [ebx - 15h]
        push edi
        push eax
        ; Exact mapped bytes E8 FC EF 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push edi
        lea eax, [ebx - 15h]
        push eax
        ; Exact mapped bytes E8 EC EF 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        add edi, 14h
        mov dword ptr [esp + 10h], ebp
        cmp dword ptr [esi + 0e4h], 0
        ; Exact mapped bytes 74 4D: je 0x588a4312
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 0c0h]
        push edi
        push ebx
        ; Exact mapped bytes E8 BE EF 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 70h]
        lea eax, [ebx - 15h]
        push edi
        push eax
        ; Exact mapped bytes E8 A6 EF 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push edi
        lea eax, [ebx - 15h]
        push eax
        ; Exact mapped bytes E8 96 EF 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        add edi, 14h
        mov dword ptr [esp + 10h], ebp
        cmp dword ptr [esi + 0e8h], 0
        ; Exact mapped bytes 74 4D: je 0x588a4368
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [esi + 0c4h]
        push edi
        push ebx
        ; Exact mapped bytes E8 68 EF 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 74h]
        lea eax, [ebx - 15h]
        push edi
        push eax
        ; Exact mapped bytes E8 50 EF 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push edi
        lea eax, [ebx - 15h]
        push eax
        ; Exact mapped bytes E8 40 EF 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        add edi, 14h
        mov dword ptr [esp + 10h], ebp
        cmp dword ptr [esi + 0ech], 0
        ; Exact mapped bytes 74 4A: je 0x588a43bb
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [esi + 0c8h]
        push edi
        push ebx
        ; Exact mapped bytes E8 12 EF 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 74h]
        push edi
        add ebx, -15h
        push ebx
        ; Exact mapped bytes E8 FA EE 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push edi
        push ebx
        ; Exact mapped bytes E8 ED EE 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        add edi, 14h
        mov dword ptr [esp + 10h], ebp
        mov eax, dword ptr [esi + 8]
        cmp eax, edi
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x588a444a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 7D: je 0x588a444a
        __asm _emit 0x74
        __asm _emit 0x7d
        mov ecx, dword ptr [esi + 9ch]
        add eax, -14h
        push eax
        mov eax, dword ptr [esi + 4]
        sub eax, 15h
        push eax
        ; Exact mapped bytes E8 AD EE 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        sub ecx, 14h
        push ecx
        mov ecx, dword ptr [esi + 0a0h]
        sub edx, 15h
        push edx
        ; Exact mapped bytes E8 94 EE 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 0a4h]
        push edi
        sub eax, 15h
        push eax
        ; Exact mapped bytes E8 81 EE 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        sub ecx, 15h
        push edi
        push ecx
        mov ecx, dword ptr [esi + 0a8h]
        ; Exact mapped bytes E8 6E EE 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xee
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov esi, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 09 6E 24: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6e
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
