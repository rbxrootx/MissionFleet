// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58712730 .. +0x802 bytes.
extern "C" __declspec(naked) void FUN_58712730_58712730() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        add eax, dword ptr [ecx + 1e70h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 53 2F 0A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x2f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 10h], eax
        push 258h
        push 320h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A5 2E 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5871278e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 7D 25: jge 0x587127b9
        __asm _emit 0x7d
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 20f8h]
        mov dword ptr [ebp - 14h], ecx
        push 258h
        push 320h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6A 2E 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CC: jmp 0x58712785
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587127cb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 25: jge 0x587127f6
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 18h], edx
        push 258h
        push 320h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2D 2E 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x2e
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CC: jmp 0x587127c2
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58712808
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 55: jge 0x58712863
        __asm _emit 0x7d
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 2418h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 1e74h]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + ecx*8 + 23ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 1e70h]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + ecx*8 + 238h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C0 2D 0A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2d
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 9C: jmp 0x587127ff
        __asm _emit 0xeb
        __asm _emit 0x9c
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 24 04 00 00: je 0x58712c91
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 24h], edx
        push 0
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 22 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x22
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9E 36 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x36
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 2ch], edx
        push 8fh
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 22 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x22
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 76 36 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x36
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 63 36 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x36
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 50 36 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x36
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 3ch], eax
        push 0eh
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 21 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 5B 43 D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x43
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 44h], eax
        push 0ch
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 21 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 36 43 D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x43
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 4ch], eax
        push 0dh
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 21 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 11 43 D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x43
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 54h], eax
        push 9
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 21 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 EC 42 D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x42
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 5ch], eax
        push 0ah
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 21 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 C4 42 D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x42
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 64h], eax
        push 8eh
        ; Exact mapped bytes 8B 0D 98 06 96 58: mov ecx, dword ptr [0x58960698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 68 21 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 69 35 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x35
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 2418h]
        mov dword ptr [ebp - 6ch], edx
        push 13h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 21 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 38 35 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x35
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 2418h]
        mov dword ptr [ebp - 74h], eax
        push 14h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 21 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 07 35 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x35
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 2418h]
        mov dword ptr [ebp - 7ch], ecx
        push 15h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 20 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 D7 34 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x34
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2470h]
        mov dword ptr [ebp - 84h], ecx
        push 8
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 20 D7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov edx, dword ptr [ebp - 80h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 D9 41 D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2470h]
        mov dword ptr [ebp - 88h], ecx
        push 6
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 9D CD D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xcd
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 90h], eax
        push 81h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 20 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 56 34 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x34
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58712aed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 3B: jge 0x58712b2e
        __asm _emit 0x7d
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 2424h]
        mov dword ptr [ebp - 98h], edx
        push 3
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 20 D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 05 34 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B6: jmp 0x58712ae4
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58712b40
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 7D 43: jge 0x58712b89
        __asm _emit 0x7d
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 20f8h]
        mov dword ptr [ebp - 9ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 FA 40 D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x40
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 2288h]
        mov dword ptr [ebp - 0a0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 AA 33 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x33
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x58712b37
        __asm _emit 0xeb
        __asm _emit 0xae
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58712b9b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 3E: jge 0x58712bdf
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 0a8h], edx
        push 82h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 1F D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x1f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        mov eax, dword ptr [ebp - 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 54 33 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x33
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B3: jmp 0x58712b92
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58712bf1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x58712c8c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 2430h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 0b0h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 6ah
        push edx
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 1E D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov eax, dword ptr [ebp - 0ach]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 ED 32 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x32
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 2430h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 0b8h], edx
        push 72h
        ; Exact mapped bytes 8B 0D 74 07 96 58: mov ecx, dword ptr [0x58960774]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 1E D7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x1e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 AA 32 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x32
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5C FF FF FF: jmp 0x58712be8
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 9B 02 00 00: jmp 0x58712f2c
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 0bch], edx
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 86 32 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x32
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 0c0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 6D 32 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x32
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 0c4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 54 32 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x32
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 0c8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 3B 32 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x32
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 0cch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 52 3F D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x3f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0d0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 39 3F D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 0d4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 20 3F D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x3f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 0d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 07 3F D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x3f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 0dch], eax
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 EB 3E D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x3e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 0e0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 9F 31 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x31
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2470h]
        mov dword ptr [ebp - 0e4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 B3 3E D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x3e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 0e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 67 31 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x31
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58712ddc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 7D 43: jge 0x58712e25
        __asm _emit 0x7d
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 2418h]
        mov dword ptr [ebp - 0ech], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 2E 31 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x31
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 2424h]
        mov dword ptr [ebp - 0f0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 0E 31 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x31
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x58712dd3
        __asm _emit 0xeb
        __asm _emit 0xae
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58712e37
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 7D 43: jge 0x58712e80
        __asm _emit 0x7d
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 20f8h]
        mov dword ptr [ebp - 0f4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 03 3E D7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3e
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 2288h]
        mov dword ptr [ebp - 0f8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 B3 30 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x30
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x58712e2e
        __asm _emit 0xeb
        __asm _emit 0xae
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58712e92
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 23: jge 0x58712ebb
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 8ch]
        mov dword ptr [ebp - 0fch], eax
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 78 30 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x30
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58712e89
        __asm _emit 0xeb
        __asm _emit 0xce
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58712ecd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 7D 59: jge 0x58712f2c
        __asm _emit 0x7d
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 2430h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 100h], ecx
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 32 30 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x30
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 2430h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 104h], eax
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 07 30 D7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x30
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 98: jmp 0x58712ec4
        __asm _emit 0xeb
        __asm _emit 0x98
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
