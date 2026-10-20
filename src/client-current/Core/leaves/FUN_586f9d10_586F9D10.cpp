// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F9D10 .. +0x5D3 bytes.
extern "C" __declspec(naked) void FUN_586f9d10_586F9D10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586f9d2c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1fh
        ; Exact mapped bytes 7D 6F: jge 0x586f9da1
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 150h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 D9 FF FF: call 0x586f76e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 49: jne 0x586f9d96
        __asm _emit 0x75
        __asm _emit 0x49
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x586f9d5f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 1fh
        ; Exact mapped bytes 7D 2F: jge 0x586f9d94
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 25: je 0x586f9d92
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax*4 + 150h]
        cmp eax, dword ptr [esi + edx*4 + 150h]
        ; Exact mapped bytes 75 09: jne 0x586f9d92
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF E6 FF FF: call 0x586f8480
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C2: jmp 0x586f9d56
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes EB 09: jmp 0x586f9d9f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 E6 FF FF: call 0x586f8480
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 82: jmp 0x586f9d23
        __asm _emit 0xeb
        __asm _emit 0x82
        mov dword ptr [ebp - 18h], 80h
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 8], 588b37c0h
        lea ecx, [ebp - 0ch]
        push ecx
        push 0f003fh
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 20 40 89 58: call dword ptr [0x58894020]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x586f9dfc
        __asm _emit 0x74
        __asm _emit 0x28
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 588b3277h
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        push 80000002h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b37f8h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C 08 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b3808h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 07 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b381ch
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD 07 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b382ch
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 07 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3840h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D 07 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3850h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 07 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b3864h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 07 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 150h]
        push eax
        push 588b387ch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 06 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 3
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b3888h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 06 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 9
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b3890h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A5 06 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0ah
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b38a4h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D 06 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b38b8h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 55 06 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0ch
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b38cch
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D 06 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b38dch
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 06 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0eh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b38ech
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 05 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0fh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 150h]
        push edx
        push 588b38f8h
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 05 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 4
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3908h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D 05 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 11h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3918h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 05 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 12h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b392ch
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D 05 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 13h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3940h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 05 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3950h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED 04 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 15h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3960h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 04 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 16h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3970h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D 04 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 17h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3980h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 04 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 18h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3988h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D 04 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 19h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b3990h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 04 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 1ah
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b39a0h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD 03 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 1bh
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b39b4h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 03 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 1dh
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b39c0h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 03 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 1eh
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b39cch
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 03 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 1ch
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 150h]
        push ecx
        push 588b39e0h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 03 00 00: call 0x586fa630
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
