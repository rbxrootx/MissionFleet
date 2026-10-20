// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857F180 .. +0x4E5 bytes.
extern "C" __declspec(naked) void FUN_5857f180_5857F180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 190h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 190h], ecx
        push 40h
        push 0
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 6A DC 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xdc
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 148h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5857f1c4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 148h]
        add ecx, 1
        mov dword ptr [ebp - 148h], ecx
        cmp dword ptr [ebp - 148h], 20h
        ; Exact mapped bytes 0F 8D A4 03 00 00: jge 0x5857f575
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 D2 F0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd2
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        mov edx, dword ptr [ebp - 148h]
        push edx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 6F DE F0 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xde
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx eax, ax
        mov dword ptr [ebp - 158h], eax
        cmp dword ptr [ebp - 158h], 5
        ; Exact mapped bytes 74 1F: je 0x5857f222
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 158h], 6
        ; Exact mapped bytes 0F 84 CF 01 00 00: je 0x5857f3df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 158h], 0dh
        ; Exact mapped bytes 0F 84 6C 02 00 00: je 0x5857f489
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4E 03 00 00: jmp 0x5857f570
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5857f23d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 1
        mov dword ptr [ebp - 14ch], ecx
        cmp dword ptr [ebp - 14ch], 2
        ; Exact mapped bytes 0F 8D 90 01 00 00: jge 0x5857f3da
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EE D1 F0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd1
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 9F 0A F3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x0a
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x5857f35c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 DE F0 FF: call 0x5848d0a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xde
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 60 23 FF FF: call 0x58571600
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, 55555555h
        mov dword ptr [ebp - 160h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D D1 F0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        mov eax, dword ptr [ebp - 14ch]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 3E 0A F3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 90 98 00 00 00: and dx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, dx
        mov dword ptr [ebp - 15ch], eax
        mov eax, dword ptr [ebp - 160h]
        xor edx, edx
        div dword ptr [ebp - 15ch]
        mov ecx, dword ptr [ebp - 148h]
        lea edx, [ebp + ecx*2 - 44h]
        mov ecx, dword ptr [ebp - 14ch]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [ebp - 148h]
        lea eax, [ebp + edx*2 - 44h]
        mov ecx, dword ptr [ebp - 14ch]
        movzx edx, byte ptr [eax + ecx]
        push edx
        mov eax, dword ptr [ebp - 15ch]
        push eax
        mov ecx, dword ptr [ebp - 160h]
        push ecx
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov eax, dword ptr [ebp - 148h]
        push eax
        push 588aa6a8h
        lea ecx, [ebp - 0c4h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 1ch
        lea edx, [ebp - 0c4h]
        push edx
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DC D0 F0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd0
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 56 F0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x56
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        mov dword ptr [ebp - 174h], eax
        mov ecx, dword ptr [ebp - 174h]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 1F 20 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1f
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 178h], eax
        mov edx, dword ptr [ebp - 148h]
        lea eax, [ebp + edx*2 - 44h]
        mov ecx, dword ptr [ebp - 14ch]
        movzx edx, byte ptr [eax + ecx]
        xor edx, 55h
        ; Exact mapped bytes 66 89 95 B2 FE FF FF: mov word ptr [ebp - 0x14e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        movzx eax, word ptr [ebp - 14eh]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov edx, dword ptr [ebp - 148h]
        push edx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 3C 51 1D 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x51
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 54 FE FF FF: jmp 0x5857f22e
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 91 01 00 00: jmp 0x5857f570
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 DC F0 FF: call 0x5848d0c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xdc
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8B B3 FE FF: call 0x5856a780
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, 55h
        mov ecx, dword ptr [ebp - 148h]
        lea edx, [ebp + ecx*2 - 44h]
        mov ecx, 1
        imul ecx, ecx, 0
        mov byte ptr [edx + ecx], al
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B D0 F0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd0
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 44 56 F0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x56
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        shr edx, 0ah
        and edx, 3fffffh
        mov dword ptr [ebp - 17ch], edx
        mov eax, dword ptr [ebp - 17ch]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C1 1E 20 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x1e
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 180h], eax
        mov ecx, dword ptr [ebp - 148h]
        lea edx, [ebp + ecx*2 - 44h]
        mov eax, 1
        imul ecx, eax, 0
        movzx edx, byte ptr [edx + ecx]
        xor edx, 55h
        ; Exact mapped bytes 66 89 95 B0 FE FF FF: mov word ptr [ebp - 0x150], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        movzx eax, word ptr [ebp - 150h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 8D 50 1D 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x5857f570
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5857f4a4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 14ch]
        add edx, 1
        mov dword ptr [ebp - 14ch], edx
        cmp dword ptr [ebp - 14ch], 2
        ; Exact mapped bytes 0F 8D BF 00 00 00: jge 0x5857f570
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 CF F0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xcf
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        mov eax, dword ptr [ebp - 14ch]
        push eax
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 38 DB F0 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xdb
        __asm _emit 0xf0
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov eax, dword ptr [ebp - 148h]
        lea ecx, [ebp + eax*2 - 44h]
        mov eax, dword ptr [ebp - 14ch]
        mov byte ptr [ecx + eax], dl
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 CF F0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xcf
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 55 F0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x55
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        and ecx, 3fffffh
        mov dword ptr [ebp - 188h], ecx
        mov edx, dword ptr [ebp - 188h]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 1D 20 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0x00
        mov dword ptr [ebp - 18ch], eax
        mov eax, dword ptr [ebp - 148h]
        lea ecx, [ebp + eax*2 - 44h]
        mov edx, dword ptr [ebp - 14ch]
        movzx eax, byte ptr [ecx + edx]
        xor eax, 55h
        ; Exact mapped bytes 66 89 85 AE FE FF FF: mov word ptr [ebp - 0x152], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        movzx ecx, word ptr [ebp - 152h]
        push ecx
        mov edx, dword ptr [ebp - 14ch]
        push edx
        mov eax, dword ptr [ebp - 148h]
        push eax
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 A6 4F 1D 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x4f
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 25 FF FF FF: jmp 0x5857f495
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 40 FC FF FF: jmp 0x5857f1b5
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 588aa6f0h
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 588aa74ch
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 148h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5857f5a7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 148h]
        add ecx, 1
        mov dword ptr [ebp - 148h], ecx
        cmp dword ptr [ebp - 148h], 20h
        ; Exact mapped bytes 7D 7D: jge 0x5857f62d
        __asm _emit 0x7d
        __asm _emit 0x7d
        mov dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5857f5cb
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 14ch]
        add edx, 1
        mov dword ptr [ebp - 14ch], edx
        cmp dword ptr [ebp - 14ch], 2
        ; Exact mapped bytes 7D 48: jge 0x5857f61c
        __asm _emit 0x7d
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 148h]
        lea ecx, [ebp + eax*2 - 44h]
        mov edx, dword ptr [ebp - 14ch]
        movzx eax, byte ptr [ecx + edx]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov edx, dword ptr [ebp - 148h]
        push edx
        push 588aa788h
        lea eax, [ebp - 144h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 14h
        lea ecx, [ebp - 144h]
        push ecx
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB A0: jmp 0x5857f5bc
        __asm _emit 0xeb
        __asm _emit 0xa0
        push 588aa7a8h
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 6B FF FF FF: jmp 0x5857f598
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 588aa7b0h
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 40h
        lea edx, [ebp - 44h]
        push edx
        push 0
        push 0
        push 8002f007h
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 3C D3 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd3
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 F1 19 2B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x2b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
