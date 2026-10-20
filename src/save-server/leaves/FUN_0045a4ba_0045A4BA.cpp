// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045A4BA .. +0x3DC bytes.
extern "C" __declspec(naked) void FUN_0045a4ba_0045A4BA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e958h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 70h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 FF 0C 0F 00: call 0x54b1ea
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x0c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 B3 0C 00: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        and eax, 4000h
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x45a520
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        and edx, 2000h
        test edx, edx
        ; Exact mapped bytes 74 1D: je 0x45a53d
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 E5 0A 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes E9 86 03 00 00: jmp 0x45a8c3
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov dword ptr [ebp - 78h], edx
        cmp dword ptr [ebp - 78h], 11h
        ; Exact mapped bytes 0F 87 36 03 00 00: ja 0x45a888
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 24 85 D6 A8 45 00: jmp dword ptr [eax*4 + 0x45a8d6]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 B3 0C 00: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 9C 0A 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes E9 3D 03 00 00: jmp 0x45a8c3
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov cl, byte ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 B2 0C 00: call 0x52588c
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 73 0A 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes E9 14 03 00 00: jmp 0x45a8c3
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 B3 0C 00: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 49 0A 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E9 EA 02 00 00: jmp 0x45a8c3
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C B3 0C 00: call 0x525914
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 20 0A 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes E9 C1 02 00 00: jmp 0x45a8c3
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 B3 0C 00: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F4 B2 0C 00: call 0x525914
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 E8 09 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes E9 89 02 00 00: jmp 0x45a8c3
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 B3 0C 00: call 0x52599a
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 BF 09 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        ; Exact mapped bytes E9 60 02 00 00: jmp 0x45a8c3
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [eax + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 B3 0C 00: call 0x5259dd
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 92 09 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E9 33 02 00 00: jmp 0x45a8c3
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [eax + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A B3 0C 00: call 0x5259dd
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb3
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 65 09 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes E9 06 02 00 00: jmp 0x45a8c3
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 4C BB 68 00: call dword ptr [0x68bb4c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7E B2 0C 00: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 76 13: jbe 0x45a6f2
        __asm _emit 0x76
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 FC 08 00: call 0x4ea396
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 64h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 13 09 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x09
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes E9 B4 01 00 00: jmp 0x45a8c3
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 B1 0C 00: call 0x525914
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb1
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 EA 08 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes E9 8B 01 00 00: jmp 0x45a8c3
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 8C B4 05 00: call 0x4b5bd0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        push 641138h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7D 1D: jge 0x45a784
        __asm _emit 0x7d
        __asm _emit 0x1d
        lea ecx, [ebp - 1ch]
        push ecx
        push 640cb0h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 F3 E6 FF FF: call 0x458e80
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea edx, [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 D3 E6 FF FF: call 0x458e80
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E B1 0C 00: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb1
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 55 CC: mov dx, word ptr [ebp - 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xcc
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 09 B1 0C 00: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb1
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 CE: mov ax, word ptr [ebp - 0x32]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xce
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FC B0 0C 00: call 0x5258cf
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb0
        __asm _emit 0x0c
        __asm _emit 0x00
        push 8
        lea ecx, [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 FB 08 00: call 0x4ea396
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0x00
        push 1
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 81 E6 FF FF: call 0x458e80
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 40: jmp 0x45a841
        __asm _emit 0xeb
        __asm _emit 0x40
        push 636e20h
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 82 F9 07 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x45a826
        __asm _emit 0x75
        __asm _emit 0x14
        push 2f6h
        push 678664h
        ; Exact mapped bytes E8 1F E5 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe5
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45a826
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x45a801
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        push 0
        push 0
        ; Exact mapped bytes E8 DF B0 00 00: call 0x465920
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 6ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 B1 07 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes EB 55: jmp 0x45a8c3
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 70h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 97 07 0F 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
        ; Exact mapped bytes EB 3B: jmp 0x45a8c3
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x45a8a5
        __asm _emit 0x74
        __asm _emit 0x14
        push 306h
    }
}
