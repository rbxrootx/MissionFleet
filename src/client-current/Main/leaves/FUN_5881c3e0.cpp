// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881C3E0 .. +0x34C bytes.
extern "C" __declspec(naked) void FUN_5881c3e0() {
    __asm {
        sub esp, 204h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 200h], eax
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [esi + 0b8h], 0
        push edi
        mov edi, 1
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 74h]
        mov ebx, 2
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 78h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        push 0e8h
        push 0fbh
        ; Exact mapped bytes E8 AA F9 FF FF: call 0x5881bdf0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 73h
        add ecx, 0c9h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 31 6E 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x6e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 70h]
        add edx, 74h
        push edx
        add eax, 0cah
        push eax
        ; Exact mapped bytes E8 19 6E 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x6e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 76h
        push ecx
        mov ecx, dword ptr [esi + 74h]
        add edx, 129h
        push edx
        ; Exact mapped bytes E8 00 6E 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, 73h
        add ecx, 118h
        push eax
        push ecx
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes E8 E7 6D 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 7ch]
        add edx, 74h
        push edx
        add eax, 119h
        push eax
        ; Exact mapped bytes E8 CF 6D 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        add ecx, 76h
        push ecx
        mov ecx, dword ptr [esi + 84h]
        add edx, 17ch
        push edx
        ; Exact mapped bytes E8 B3 6D 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        add ecx, 72h
        mov edx, ecx
        add eax, 164h
        push edx
        mov dword ptr [esi + 90h], ecx
        mov ecx, dword ptr [esi + 88h]
        push eax
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 8A 6D 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 20 C1 98 58: call dword ptr [0x5898c120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 2A 07 16 00: call 0x5897cc3c
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E8 1C 07 16 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x16
        __asm _emit 0x00
        cdq
        mov ecx, 2710h
        idiv ecx
        mov ecx, dword ptr [esi + 6ch]
        push edx
        ; Exact mapped bytes E8 35 AE 0E 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xae
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes E8 06 07 16 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x07
        __asm _emit 0x16
        __asm _emit 0x00
        cdq
        mov ecx, 2710h
        idiv ecx
        mov ecx, dword ptr [esi + 70h]
        push edx
        ; Exact mapped bytes E8 1F AE 0E 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xae
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 F7 33 F4 FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x33
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [esp + 214h]
        mov edx, dword ptr [esp + 218h]
        mov dword ptr [esi + 0ach], eax
        sub eax, 0
        mov dword ptr [esi + 0b0h], edx
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x5881c698
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, edi
        ; Exact mapped bytes 0F 85 95 01 00 00: jne 0x5881c709
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 228h]
        mov dword ptr [esi + 94h], eax
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 94h]
        mov eax, dword ptr [esi + 0a8h]
        imul ecx, ecx, 19h
        mov dword ptr [esi + 0b4h], ecx
        mov dword ptr [esi + 80h], ebx
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a8h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0a4h]
        mov edx, dword ptr [ecx + 8]
        add edx, 0ah
        push edx
        ; Exact mapped bytes E8 86 6D 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 30 C0 98 58: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 0
        push 5899d9b0h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 2C F7 FF FF: call 0x5881bd20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 80h]
        push eax
        push 5899d950h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 3D C4 C3 98 58: mov edi, dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 14h]
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        push ebx
        lea edx, [esp + 10h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 FD F6 FF FF: call 0x5881bd20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 51eb851fh
        mul dword ptr [esi + 0b4h]
        shr edx, 3
        push edx
        lea eax, [esp + 10h]
        push 5898d18ch
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        lea ecx, [esp + 0ch]
        push ecx
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 8F 56 F1 FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x56
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [esi + 9ch]
        mov eax, 0ffffh
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [esi + 0a0h]
        mov dword ptr [ecx + 60h], eax
        mov ecx, dword ptr [esi + 0a0h]
        mov edx, dword ptr [ecx + 8]
        add edx, 1eh
        push edx
        ; Exact mapped bytes E8 E6 6C 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x6c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        mov eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ecx + 4]
        sub eax, 14h
        push eax
        add edx, 0c3h
        push edx
        ; Exact mapped bytes E8 FA 6B 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x6b
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 71: jmp 0x5881c709
        __asm _emit 0xeb
        __asm _emit 0x71
        mov ecx, dword ptr [esi + 0a4h]
        mov eax, dword ptr [ecx + 8]
        add eax, 0ah
        push eax
        ; Exact mapped bytes E8 B6 6C 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        mov edx, dword ptr [ecx + 8]
        add edx, 0ah
        push edx
        ; Exact mapped bytes E8 A4 6C 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x6c
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0
        push 5899d9b0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4C F6 FF FF: call 0x5881bd20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 9ch]
        mov dword ptr [eax + 60h], 0ffffh
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a4h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 4]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 20ch]
        pop edi
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 B7 04 16 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 204h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
