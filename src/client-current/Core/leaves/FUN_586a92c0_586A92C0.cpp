// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A92C0 .. +0x52C bytes.
extern "C" __declspec(naked) void FUN_586a92c0_586A92C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c8h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 10h], ecx
        push 98h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B B8 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3C CC DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xcc
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 10000h
        ; Exact mapped bytes 74 56: je 0x586a9359
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 18h], eax
        push 9bh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 B8 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 05 CC DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 20h], eax
        push 9ch
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC B7 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 DD CB DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xcb
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2F 04 00 00: jmp 0x586a9788
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 2000000h
        ; Exact mapped bytes 74 56: je 0x586a93bc
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 28h], edx
        push 9dh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 B7 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A2 CB DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xcb
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 30h], edx
        push 9eh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 B7 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7A CB DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xcb
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CC 03 00 00: jmp 0x586a9788
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 80000h
        ; Exact mapped bytes 74 56: je 0x586a9420
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 38h], ecx
        push 9fh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D B7 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3E CB DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xcb
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 40h], ecx
        push 0a0h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 B7 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 16 CB DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xcb
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 68 03 00 00: jmp 0x586a9788
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 200000h
        ; Exact mapped bytes 74 56: je 0x586a9484
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 48h], eax
        push 0a1h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 B6 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xb6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 DA CA DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xca
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 50h], eax
        push 0a2h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 B6 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 B2 CA DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xca
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 04 03 00 00: jmp 0x586a9788
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 1000000h
        ; Exact mapped bytes 74 56: je 0x586a94e7
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 58h], edx
        push 0a3h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 B6 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 77 CA DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xca
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 60h], edx
        push 0a4h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E B6 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 4F CA DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xca
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A1 02 00 00: jmp 0x586a9788
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 40000h
        ; Exact mapped bytes 74 56: je 0x586a954b
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 68h], ecx
        push 0a5h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 B6 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 13 CA DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xca
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 70h], ecx
        push 0a6h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA B5 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 EB C9 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc9
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3D 02 00 00: jmp 0x586a9788
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 20000h
        ; Exact mapped bytes 74 56: je 0x586a95af
        __asm _emit 0x74
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 78h], eax
        push 0abh
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AE B5 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 AF C9 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 80h], eax
        push 0ach
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 B5 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 87 C9 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc9
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D9 01 00 00: jmp 0x586a9788
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 40000000h
        ; Exact mapped bytes 74 6E: je 0x586a962a
        __asm _emit 0x74
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 88h], edx
        push 190h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 B5 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 40 C9 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 90h], edx
        push 191h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 B5 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb5
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 0C C9 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc9
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x586a9788
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 4000h
        ; Exact mapped bytes 74 6E: je 0x586a96a6
        __asm _emit 0x74
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 98h], ecx
        push 192h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC B4 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov edx, dword ptr [ebp - 94h]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 C4 C8 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xc8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0a0h], ecx
        push 193h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 B4 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov edx, dword ptr [ebp - 9ch]
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 90 C8 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x586a9788
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 8000h
        ; Exact mapped bytes 74 6B: je 0x586a971f
        __asm _emit 0x74
        __asm _emit 0x6b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 0a8h], eax
        push 194h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 B4 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 48 C8 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc8
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0b0h], eax
        push 195h
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C B4 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 14 C8 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xc8
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 69: jmp 0x586a9788
        __asm _emit 0xeb
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 0b8h], eax
        push 0a9h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 B3 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 DD C7 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0c0h], eax
        push 0aah
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 B3 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb3
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 A9 C7 DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xc7
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 13ch]
        mov dword ptr [ebp - 0c4h], eax
        push 588b0a67h
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 F9 C8 DD FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc8
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a97ba
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 26: jge 0x586a97e6
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 140h]
        mov dword ptr [ebp - 0c8h], ecx
        push 588b0a68h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 BD C8 DD FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xc8
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CB: jmp 0x586a97b1
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
