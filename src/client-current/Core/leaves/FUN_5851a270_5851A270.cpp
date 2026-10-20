// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851A270 .. +0x735 bytes.
extern "C" __declspec(naked) void FUN_5851a270_5851A270() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888135ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0c8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB A6 29 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa6
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a3f20h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 64h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A CA FD FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 68h], eax
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 CB FD FF: call 0x584f6e30
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 6ch], eax
        push 243ech
        ; Exact mapped bytes E8 F9 6C 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6c
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 38: je 0x5851a353
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 68h]
        movzx ecx, word ptr [eax + 4]
        push ecx
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F A7 F6 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa7
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 40h
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 72 A3 04 00: call 0x585646c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5851a35a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 40h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 44h], ecx
        push 5208h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 FD BA F6 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes 8B 0D 70 75 94 58: mov ecx, dword ptr [0x58947570]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A5 A2 04 00: call 0x58564640
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 4ch], eax
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B6 C0 04 00: call 0x58566470
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 50h], ecx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 23 21 00 00: call 0x5851c4f0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 58h], ecx
        push 96h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 55 A8: call dword ptr [ebp - 0x58]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa8
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 BD 57 F8 FF: call 0x5849fbc0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        cdq
        mov ecx, 3
        idiv ecx
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 36 58 F8 FF: call 0x5849fc50
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 64h], ecx
        push 40000000h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 30 1F 00 00: call 0x5851c360
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 68h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 E6 CC 04 00: call 0x58567130
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 6ch], ecx
        push 0
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 2F CA 04 00: call 0x58566e90
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 70h]
        mov edx, dword ptr [eax + 34h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 70h], ecx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 09 A0 04 00: call 0x58564490
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 74h], eax
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 76 5D F8 FF: call 0x584a0210
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 66 8B 91 9C 00 00 00: mov dx, word ptr [ecx + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 70 5D F8 FF: call 0x584a0230
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 7ch], edx
        push 168h
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 08 9E 04 00: call 0x585642e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 80h], ecx
        push 0
        push 168h
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 0E 9F 04 00: call 0x58564400
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 66 8B 82 9A 00 00 00: mov ax, word ptr [edx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 3E A1 04 00: call 0x58564660
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 88h], eax
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 25 5D F8 FF: call 0x584a0260
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 8ch], edx
        push 3
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 BC 47 FA FF: call 0x584bed10
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        push 1c24h
        ; Exact mapped bytes E8 A5 6A 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x6a
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 20h], eax
        push 1c24h
        push 0
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 8F 28 33 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x28
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 D1 56 F8 FF: call 0x5849fc70
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x56
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b4h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A B8 00 00 00: mov word ptr [edx + 0xb8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 4A 7C: mov word ptr [edx + 0x7c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 68h]
        mov edx, 4
        imul eax, edx, 0
        imul ecx, dword ptr [ecx + eax + 28h], 96h
        add ecx, 7d0h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 88h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5851a628
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 7D 13: jge 0x5851a641
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 8ch], 0
        ; Exact mapped bytes EB DE: jmp 0x5851a61f
        __asm _emit 0xeb
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 7ch]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 D8 69 31 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x69
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 98h]
        mov dword ptr [eax + 78h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5851a691
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 7ch]
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 7D 12: jge 0x5851a6af
        __asm _emit 0x7d
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes EB D9: jmp 0x5851a688
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 19 19 00 00: call 0x5851bfd0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 54h
        ; Exact mapped bytes E8 45 69 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x69
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 65: je 0x5851a734
        __asm _emit 0x74
        __asm _emit 0x65
        push 389h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 A4 F6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DA C2 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc2
        __asm _emit 0xf6
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp + 20h]
        sub edx, eax
        mov dword ptr [ebp - 9ch], edx
        push 38ah
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A A4 F6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        push 40h
        mov eax, dword ptr [ebp + 24h]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F1 7B F6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x7b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5851a73b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0a4h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 0a4h]
        mov dword ptr [ecx + eax + 54h], edx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5851a76f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8D 02 01 00 00: jge 0x5851a87b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 74h
        ; Exact mapped bytes E8 84 68 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x5851a828
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 54h]
        ; Exact mapped bytes E8 08 19 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x19
        __asm _emit 0xf7
        __asm _emit 0xff
        add eax, 2
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 54h]
        ; Exact mapped bytes E8 FB C1 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc1
        __asm _emit 0xf6
        __asm _emit 0xff
        add eax, 3
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 38bh
        push ecx
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D A3 F6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa3
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0b4h], eax
        push 40h
        mov ecx, dword ptr [ebp - 0a8h]
        push ecx
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2D 92 FE FF: call 0x58503a50
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x5851a82f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0b8h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0b8h]
        mov dword ptr [edx + ecx*4 + 5ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 5ch]
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 50h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 9B 97 FE FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 EB FE FF FF: jmp 0x5851a766
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        ; Exact mapped bytes E8 82 67 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x67
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 65: je 0x5851a8f7
        __asm _emit 0x74
        __asm _emit 0x65
        push 389h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E A2 F6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 17 C1 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc1
        __asm _emit 0xf6
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp + 20h]
        sub edx, eax
        mov dword ptr [ebp - 0c0h], edx
        push 389h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 A2 F6 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        push 40h
        mov eax, dword ptr [ebp + 24h]
        add eax, 0ah
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 2E 7A F6 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x7a
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x5851a8fe
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0c8h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0c8h]
        mov dword ptr [eax + edx + 54h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax + 54h]
        mov dword ptr [ebp - 0cch], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 6B AC 29 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xac
        __asm _emit 0x29
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 5ch]
        mov dword ptr [ebp - 0d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 79 B5 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 5ch]
        mov dword ptr [ebp - 0d4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 57 B5 F6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb5
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
