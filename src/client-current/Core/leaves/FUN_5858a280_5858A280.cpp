// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858A280 .. +0x26B bytes.
extern "C" __declspec(naked) void FUN_5858a280_5858A280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 74h], cl
        mov dl, byte ptr [ebp + 8]
        mov byte ptr [ebp - 14h], dl
        cmp byte ptr [ebp - 14h], 1
        ; Exact mapped bytes 74 15: je 0x5858a2b3
        __asm _emit 0x74
        __asm _emit 0x15
        cmp byte ptr [ebp - 14h], 2
        ; Exact mapped bytes 74 65: je 0x5858a309
        __asm _emit 0x74
        __asm _emit 0x65
        cmp byte ptr [ebp - 14h], 3
        ; Exact mapped bytes 0F 84 B3 01 00 00: je 0x5858a461
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 32 02 00 00: jmp 0x5858a4e5
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 B3 F0 FF: call 0x58495670
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb3
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 C6 EF FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 C7 EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc7
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8A 4A F2 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x4a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 67 C9 EF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xc9
        __asm _emit 0xef
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD BB EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xbb
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DC 01 00 00: jmp 0x5858a4e5
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F C6 EF FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 C6 EF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 45 4A F2 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x4a
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes E8 33 69 2C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x69
        __asm _emit 0x2c
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x5858a345
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 0ah
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 A7 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa7
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F7 C8 EF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xc8
        __asm _emit 0xef
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D BB EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xbb
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 75h]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x5858a45c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 1F F0 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x1f
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 16 19 F0 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x19
        __asm _emit 0xf0
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 100h
        div ecx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 1F F0 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x1f
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 F4 18 F0 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x18
        __asm _emit 0xf0
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 100h
        div ecx
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 1F F0 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x1f
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 D2 18 F0 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x18
        __asm _emit 0xf0
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 4
        div ecx
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 3
        ; Exact mapped bytes 77 44: ja 0x5858a434
        __asm _emit 0x77
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 24 95 EC A4 58 58: jmp dword ptr [edx*4 + 0x5858a4ec]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xa4
        __asm _emit 0x58
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 2C: jmp 0x5858a434
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], edx
        imul eax, dword ptr [ebp - 0ch], -1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 1D: jmp 0x5858a434
        __asm _emit 0xeb
        __asm _emit 0x1d
        imul ecx, dword ptr [ebp - 8], -1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 0E: jmp 0x5858a434
        __asm _emit 0xeb
        __asm _emit 0x0e
        imul eax, dword ptr [ebp - 8], -1
        mov dword ptr [ebp - 8], eax
        imul ecx, dword ptr [ebp - 0ch], -1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        add eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A B2 22 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb2
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        add edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 B2 22 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb2
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x5858a4e5
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 C5 EF FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc5
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 FB 48 F2 FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x48
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 38h], edx
        push 0fh
        ; Exact mapped bytes 8B 0D D4 06 96 58: mov ecx, dword ptr [0x589606d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 A6 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa6
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C6 C7 EF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc7
        __asm _emit 0xef
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C BA EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xba
        __asm _emit 0xef
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B2 FD FF FF: call 0x5858a260
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 1A F0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x1a
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5858a4ca
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 69 1C F0 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x1c
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 15: je 0x5858a4e5
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 0B: je 0x5858a4e3
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7E FD FF FF: call 0x5858a260
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB DA: jmp 0x5858a4bf
        __asm _emit 0xeb
        __asm _emit 0xda
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
