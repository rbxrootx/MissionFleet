// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B4E20 .. +0x200 bytes.
extern "C" __declspec(naked) void FUN_588b4e20() {
    __asm {
        cmp dword ptr [esp + 4], 0
        ; Exact mapped bytes 74 76: je 0x588b4e9d
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [ecx + 0b4h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0b8h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov eax, 4
        ; Exact mapped bytes 66 89 81 9C 01 00 00: mov word ptr [ecx + 0x19c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 78h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 80h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 84h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 B9 C0 01 00 00 01: cmp word ptr [ecx + 0x1c0], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 9B 01 00 00: jne 0x588b501d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0bch]
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [ecx + 0bch]
        ; Exact mapped bytes 66 83 49 24 02: or word ptr [ecx + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [edx + 50h], 1
        mov eax, dword ptr [ecx + 0b4h]
        mov edx, 2
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0cch]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0d4h]
        push ebx
        push edi
        ; Exact mapped bytes 66 8B 78 24: mov di, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x24
        mov ebx, 0fff1h
        ; Exact mapped bytes 66 23 FB: and di, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xfb
        ; Exact mapped bytes 66 83 CF 01: or di, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xcf
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 78 24: mov word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 198h]
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        pop edi
        pop ebx
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x588b4f28
        __asm _emit 0x75
        __asm _emit 0x17
        push eax
        push eax
        push eax
        push 193h
        ; Exact mapped bytes E8 D2 6B EB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B FE EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1A: jne 0x588b4f47
        __asm _emit 0x75
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 198h
        ; Exact mapped bytes E8 B3 6B EB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EC FD EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 1A: jne 0x588b4f66
        __asm _emit 0x75
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 1afh
        ; Exact mapped bytes E8 94 6B EB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CD FD EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 1A: jne 0x588b4f85
        __asm _emit 0x75
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 1b0h
        ; Exact mapped bytes E8 75 6B EB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AE FD EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 5
        ; Exact mapped bytes 75 1A: jne 0x588b4fa4
        __asm _emit 0x75
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 1b1h
        ; Exact mapped bytes E8 56 6B EB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F FD EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 75 1A: jne 0x588b4fc3
        __asm _emit 0x75
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 1b2h
        ; Exact mapped bytes E8 37 6B EB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 70 FD EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 7
        ; Exact mapped bytes 75 1A: jne 0x588b4fe2
        __asm _emit 0x75
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 1b3h
        ; Exact mapped bytes E8 18 6B EB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 51 FD EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 8
        ; Exact mapped bytes 75 1A: jne 0x588b5001
        __asm _emit 0x75
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 1b8h
        ; Exact mapped bytes E8 F9 6A EB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 32 FD EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 9
        ; Exact mapped bytes 75 17: jne 0x588b501d
        __asm _emit 0x75
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 1b9h
        ; Exact mapped bytes E8 DA 6A EB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 FD EA FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
