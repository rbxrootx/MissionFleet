// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58528DC0 .. +0x2F3 bytes.
extern "C" __declspec(naked) void FUN_58528dc0_58528DC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 36 02 00 00: jne 0x5852900a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 12124h]
        ; Exact mapped bytes 75 2A: jne 0x58528e0c
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1214ch], 13h
        ; Exact mapped bytes 75 10: jne 0x58528dfe
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 09: jmp 0x58528e07
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A A1 00 00: call 0x58532f60
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F9 01 00 00: jmp 0x58529005
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 140h]
        ; Exact mapped bytes 75 0E: jne 0x58528e28
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 46 00 00: call 0x5852d4d0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DD 01 00 00: jmp 0x58529005
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58528e3a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 250h]
        ; Exact mapped bytes 0F 8D B9 01 00 00: jge 0x58529005
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 11a68h]
        ; Exact mapped bytes 0F 85 9E 01 00 00: jne 0x58529000
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax*2 + 8356h]
        test edx, edx
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x58528f2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 11a68h]
        mov dword ptr [ebp - 14h], edx
        push 3
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AE 69 F7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x69
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58528ea5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 250h]
        ; Exact mapped bytes 7D 42: jge 0x58528ef5
        __asm _emit 0x7d
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 1D: jne 0x58528ed8
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 11f1ch]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0B D0 F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd0
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x58528ef3
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 11f1ch]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EE CF F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xcf
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A7: jmp 0x58528e9c
        __asm _emit 0xeb
        __asm _emit 0xa7
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 5
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8758h]
        push eax
        push 588a4508h
        ; Exact mapped bytes 8B 0D EC 1F 96 58: mov ecx, dword ptr [0x58961fec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 12 F8 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x12
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 1
        ; Exact mapped bytes 8B 0D EC 1F 96 58: mov ecx, dword ptr [0x58961fec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 CF F5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xcf
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 8
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 256h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 148h
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 84 41 56 82 00 00: mov ax, word ptr [ecx + eax*2 + 0x8256]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x56
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 82 48 02 00 00: mov word ptr [edx + 0x248], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 0D 38 D2 8F 58: mov dword ptr [0x588fd238], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xd2
        __asm _emit 0x8f
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 24ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx*2 + 1195ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 9958h], eax
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58528fa5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 250h]
        ; Exact mapped bytes 7D 4B: jge 0x58528ffe
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx*4 + 11a68h]
        cmp edx, dword ptr [esi + ecx*4 + 11a68h]
        ; Exact mapped bytes 74 2D: je 0x58528ffc
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax*2 + 8356h]
        test edx, edx
        ; Exact mapped bytes 74 1B: je 0x58528ffc
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 11a68h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 45 68 F7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x68
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 9E: jmp 0x58528f9c
        __asm _emit 0xeb
        __asm _emit 0x9e
        ; Exact mapped bytes EB 05: jmp 0x58529005
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 2C FE FF FF: jmp 0x58528e31
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x585290aa
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0ch
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x585290aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x585290aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 1C: jne 0x58529046
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 88h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 64: jmp 0x585290aa
        __asm _emit 0xeb
        __asm _emit 0x64
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 5E: jne 0x585290aa
        __asm _emit 0x75
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 89 15 F8 1F 96 58: mov dword ptr [0x58961ff8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes A1 64 20 96 58: mov eax, dword ptr [0x58962064]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        nop
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
