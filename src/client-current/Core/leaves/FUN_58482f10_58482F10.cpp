// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58482F10 .. +0x956 bytes.
extern "C" __declspec(naked) void FUN_58482f10_58482F10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 24 09 00 00: jne 0x58483854
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0b4h]
        ; Exact mapped bytes 0F 85 3E 02 00 00: jne 0x58483180
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        movzx eax, word ptr [edx + 12ch]
        cmp eax, 3
        ; Exact mapped bytes 74 13: je 0x58482f64
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 60h]
        movzx edx, word ptr [ecx + 12ch]
        cmp edx, 4
        ; Exact mapped bytes 0F 85 99 00 00 00: jne 0x58482ffd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        cmp dword ptr [eax + 130h], 1
        ; Exact mapped bytes 75 07: jne 0x58482f77
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DF 08 00 00: jmp 0x58483856
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        movzx edx, word ptr [ecx + 120h]
        cmp edx, 4
        ; Exact mapped bytes 7D 22: jge 0x58482fa8
        __asm _emit 0x7d
        __asm _emit 0x22
        ; Exact mapped bytes E8 65 42 05 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        push 0
        push 0
        push 0
        push 0bbah
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 CF 5D 05 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 AE 08 00 00: jmp 0x58483856
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        mov eax, dword ptr [ebp - 60h]
        add eax, 108h
        push eax
        mov ecx, 1
        imul edx, ecx, 0
        lea eax, [ebp + edx - 84h]
        push eax
        ; Exact mapped bytes E8 C8 98 3C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x98
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ecx + 130h], 1
        push 0
        push 4
        lea edx, [ebp - 84h]
        push edx
        push 0
        push 0
        push 80016101h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 99 3A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x3a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7E 01 00 00: jmp 0x5848317b
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        movzx ecx, word ptr [eax + 12ch]
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 16 01 00 00: jne 0x58483126
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        cmp dword ptr [edx + 130h], 1
        ; Exact mapped bytes 75 07: jne 0x58483023
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 33 08 00 00: jmp 0x58483856
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        movzx ecx, word ptr [eax + 120h]
        cmp ecx, 4
        ; Exact mapped bytes 7C 0F: jl 0x58483041
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 60h]
        movzx eax, word ptr [edx + 124h]
        cmp eax, 4
        ; Exact mapped bytes 7D 28: jge 0x58483069
        __asm _emit 0x7d
        __asm _emit 0x28
        ; Exact mapped bytes E8 AA 41 05 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        push 0
        push 0
        push 0
        push 0bbah
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 0E 5D 05 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 ED 07 00 00: jmp 0x58483856
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 110h
        push ecx
        mov edx, dword ptr [ebp - 60h]
        add edx, 108h
        push edx
        ; Exact mapped bytes E8 5E DB 3C 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xdb
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x584830b9
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 5F FC FF FF: call 0x58482cf0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 5A 41 05 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8ch], eax
        push 0
        push 0
        push 0
        push 0bbah
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 BE 5C 05 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x5c
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 9D 07 00 00: jmp 0x58483856
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        mov eax, dword ptr [ebp - 60h]
        add eax, 118h
        push eax
        mov ecx, 1
        imul edx, ecx, 0
        lea eax, [ebp + edx - 54h]
        push eax
        ; Exact mapped bytes E8 BA 97 3C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x97
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 0ch
        push 4
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 108h
        push ecx
        mov edx, 1
        shl edx, 2
        lea eax, [ebp + edx - 54h]
        push eax
        ; Exact mapped bytes E8 99 97 3C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x97
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ecx + 130h], 1
        push 0
        push 8
        lea edx, [ebp - 54h]
        push edx
        push 0
        push 0
        push 80016102h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 98 3A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x98
        __asm _emit 0x3a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 55: jmp 0x5848317b
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 60h]
        movzx ecx, word ptr [eax + 12ch]
        test ecx, ecx
        ; Exact mapped bytes 75 22: jne 0x58483156
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, 1
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 89 90 2C 01 00 00: mov word ptr [eax + 0x12c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 65 FC FF FF: call 0x58482db0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 DD 25 00 00: call 0x58485730
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 25: jmp 0x5848317b
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 60h]
        movzx edx, word ptr [ecx + 12ch]
        cmp edx, 5
        ; Exact mapped bytes 75 16: jne 0x5848317b
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 53 29 00 00: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 D4 06 00 00: jmp 0x58483854
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0b8h]
        ; Exact mapped bytes 75 13: jne 0x584831a1
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 60h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 B3 06 00 00: jmp 0x58483854
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0bch]
        ; Exact mapped bytes 0F 85 02 01 00 00: jne 0x584832b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        cmp dword ptr [eax + 130h], 1
        ; Exact mapped bytes 75 07: jne 0x584831c6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 90 06 00 00: jmp 0x58483856
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        movzx edx, word ptr [ecx + 120h]
        cmp edx, 4
        ; Exact mapped bytes 7D 28: jge 0x584831fd
        __asm _emit 0x7d
        __asm _emit 0x28
        ; Exact mapped bytes E8 16 40 05 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], eax
        push 0
        push 0
        push 0
        push 0bbah
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 7A 5B 05 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 59 06 00 00: jmp 0x58483856
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        add eax, 110h
        push eax
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 108h
        push ecx
        ; Exact mapped bytes E8 CB D9 3C 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x5848324c
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 CC FA FF FF: call 0x58482cf0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 C7 3F 05 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], eax
        push 0
        push 0
        push 0
        push 0bbbh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 2B 5B 05 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 0A 06 00 00: jmp 0x58483856
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        push 0
        mov edx, 1
        imul eax, edx, 0
        lea ecx, [ebp + eax - 5ch]
        push ecx
        ; Exact mapped bytes E8 AE 9B 3C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9b
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 0ch
        push 4
        mov edx, dword ptr [ebp - 60h]
        add edx, 108h
        push edx
        mov eax, 1
        shl eax, 2
        lea ecx, [ebp + eax - 5ch]
        push ecx
        ; Exact mapped bytes E8 0D 96 3C 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x96
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [edx + 130h], 1
        push 0
        push 8
        lea eax, [ebp - 5ch]
        push eax
        push 0
        push 0
        push 80016102h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 96 3A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x96
        __asm _emit 0x3a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9F 05 00 00: jmp 0x58483854
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], 0
        ; Exact mapped bytes EB 09: jmp 0x584832c7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 64h]
        add ecx, 1
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp - 64h], 0ah
        ; Exact mapped bytes 0F 8D EF 02 00 00: jge 0x584835c0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 0c0h]
        ; Exact mapped bytes 0F 85 D4 02 00 00: jne 0x584835bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        mov ecx, dword ptr [edx + 0f8h]
        ; Exact mapped bytes E8 6B 16 00 00: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x584833bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        movzx edx, word ptr [ecx + 120h]
        cmp edx, 4
        ; Exact mapped bytes 0F 8D A5 00 00 00: jge 0x584833b8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        add eax, 30h
        mov ecx, dword ptr [ebp - 60h]
        movzx edx, word ptr [ecx + 120h]
        mov ecx, dword ptr [ebp - 60h]
        mov byte ptr [ecx + edx + 108h], al
        mov edx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 8B 82 20 01 00 00: mov ax, word ptr [edx + 0x120]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 89 81 20 01 00 00: mov word ptr [ecx + 0x120], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        movzx eax, word ptr [edx + 120h]
        mov ecx, dword ptr [ebp - 60h]
        mov byte ptr [ecx + eax + 108h], 0
        xor edx, edx
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes EB 09: jmp 0x58483377
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 68h]
        add eax, 1
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 60h]
        movzx edx, word ptr [ecx + 120h]
        cmp dword ptr [ebp - 68h], edx
        ; Exact mapped bytes 7D 13: jge 0x58483399
        __asm _emit 0x7d
        __asm _emit 0x13
        push 58894694h
        push 0ch
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 DA 31 00 00: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D5: jmp 0x5848336e
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 98h], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 E9 2C 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A7 01 00 00: jmp 0x58483564
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        mov ecx, dword ptr [ecx + 0fch]
        ; Exact mapped bytes E8 95 15 00 00: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x58483493
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        movzx ecx, word ptr [eax + 122h]
        cmp ecx, 4
        ; Exact mapped bytes 0F 8D A5 00 00 00: jge 0x5848348e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 64h]
        add edx, 30h
        mov eax, dword ptr [ebp - 60h]
        movzx ecx, word ptr [eax + 122h]
        mov eax, dword ptr [ebp - 60h]
        mov byte ptr [eax + ecx + 110h], dl
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 8B 91 22 01 00 00: mov dx, word ptr [ecx + 0x122]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 89 90 22 01 00 00: mov word ptr [eax + 0x122], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        movzx edx, word ptr [ecx + 122h]
        mov eax, dword ptr [ebp - 60h]
        mov byte ptr [eax + edx + 110h], 0
        xor ecx, ecx
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5848344d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 6ch]
        add edx, 1
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 60h]
        movzx ecx, word ptr [eax + 122h]
        cmp dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes 7D 13: jge 0x5848346f
        __asm _emit 0x7d
        __asm _emit 0x13
        push 58894698h
        push 0ch
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 04 31 00 00: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D5: jmp 0x58483444
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 9ch], ecx
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 13 2C 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x58483564
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 100h]
        ; Exact mapped bytes E8 BF 14 00 00: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x58483564
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        movzx eax, word ptr [edx + 124h]
        cmp eax, 4
        ; Exact mapped bytes 0F 8D A5 00 00 00: jge 0x58483564
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 64h]
        add ecx, 30h
        mov edx, dword ptr [ebp - 60h]
        movzx eax, word ptr [edx + 124h]
        mov edx, dword ptr [ebp - 60h]
        mov byte ptr [edx + eax + 118h], cl
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 8B 88 24 01 00 00: mov cx, word ptr [eax + 0x124]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 89 8A 24 01 00 00: mov word ptr [edx + 0x124], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        movzx ecx, word ptr [eax + 124h]
        mov edx, dword ptr [ebp - 60h]
        mov byte ptr [edx + ecx + 118h], 0
        xor eax, eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 70h], 0
        ; Exact mapped bytes EB 09: jmp 0x58483523
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 70h]
        add ecx, 1
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 60h]
        movzx eax, word ptr [edx + 124h]
        cmp dword ptr [ebp - 70h], eax
        ; Exact mapped bytes 7D 13: jge 0x58483545
        __asm _emit 0x7d
        __asm _emit 0x13
        push 5889469ch
        push 0ch
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 2E 30 00 00: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D5: jmp 0x5848351a
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 0a0h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 3D 2B 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 4]
        sub eax, 190h
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 8]
        neg edx
        add edx, 12ch
        mov dword ptr [ebp - 0b8h], edx
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 104h]
        mov dword ptr [ebp - 0a4h], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 0bch]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 08 A6 0E 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x584835c0
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 FE FC FF FF: jmp 0x584832be
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0e8h]
        ; Exact mapped bytes 0F 85 82 02 00 00: jne 0x58483854
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        mov ecx, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes E8 80 13 00 00: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x5848368d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        movzx ecx, word ptr [eax + 120h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 8B 00 00 00: jle 0x58483688
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 8B 82 20 01 00 00: mov ax, word ptr [edx + 0x120]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 89 81 20 01 00 00: mov word ptr [ecx + 0x120], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        movzx eax, word ptr [edx + 120h]
        mov ecx, dword ptr [ebp - 60h]
        mov byte ptr [ecx + eax + 108h], 0
        xor edx, edx
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 30h], edx
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 74h], 0
        ; Exact mapped bytes EB 09: jmp 0x58483647
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 74h]
        add eax, 1
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 60h]
        movzx edx, word ptr [ecx + 120h]
        cmp dword ptr [ebp - 74h], edx
        ; Exact mapped bytes 7D 13: jge 0x58483669
        __asm _emit 0x7d
        __asm _emit 0x13
        push 588946a0h
        push 0ch
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 0A 2F 00 00: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D5: jmp 0x5848363e
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 0a8h], edx
        lea eax, [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 19 2A 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 71 01 00 00: jmp 0x584837fe
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        mov ecx, dword ptr [ecx + 0fch]
        ; Exact mapped bytes E8 C5 12 00 00: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x58483748
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        movzx ecx, word ptr [eax + 122h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 8B 00 00 00: jle 0x58483743
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 8B 82 22 01 00 00: mov ax, word ptr [edx + 0x122]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 89 81 22 01 00 00: mov word ptr [ecx + 0x122], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        movzx eax, word ptr [edx + 122h]
        mov ecx, dword ptr [ebp - 60h]
        mov byte ptr [ecx + eax + 110h], 0
        xor edx, edx
        mov dword ptr [ebp - 40h], edx
        mov dword ptr [ebp - 3ch], edx
        mov dword ptr [ebp - 38h], edx
        mov dword ptr [ebp - 78h], 0
        ; Exact mapped bytes EB 09: jmp 0x58483702
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 78h]
        add eax, 1
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 60h]
        movzx edx, word ptr [ecx + 122h]
        cmp dword ptr [ebp - 78h], edx
        ; Exact mapped bytes 7D 13: jge 0x58483724
        __asm _emit 0x7d
        __asm _emit 0x13
        push 588946a4h
        push 0ch
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 4F 2E 00 00: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D5: jmp 0x584836f9
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 0ach], edx
        lea eax, [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 5E 29 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x584837fe
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        mov ecx, dword ptr [ecx + 100h]
        ; Exact mapped bytes E8 0A 12 00 00: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x584837fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        movzx ecx, word ptr [eax + 124h]
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 8B 00 00 00: jle 0x584837fe
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 8B 82 24 01 00 00: mov ax, word ptr [edx + 0x124]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes 66 89 81 24 01 00 00: mov word ptr [ecx + 0x124], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 60h]
        movzx eax, word ptr [edx + 124h]
        mov ecx, dword ptr [ebp - 60h]
        mov byte ptr [ecx + eax + 118h], 0
        xor edx, edx
        mov dword ptr [ebp - 4ch], edx
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 44h], edx
        mov dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584837bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 7ch]
        add eax, 1
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 60h]
        movzx edx, word ptr [ecx + 124h]
        cmp dword ptr [ebp - 7ch], edx
        ; Exact mapped bytes 7D 13: jge 0x584837df
        __asm _emit 0x7d
        __asm _emit 0x13
        push 588946a8h
        push 0ch
        lea eax, [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 94 2D 00 00: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D5: jmp 0x584837b4
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 100h]
        mov dword ptr [ebp - 0b0h], edx
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 A3 28 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 190h
        mov dword ptr [ebp - 0c4h], edx
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 8]
        neg ecx
        add ecx, 12ch
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 104h]
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov eax, dword ptr [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 6D A3 0E 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 F0 D7 3A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xd7
        __asm _emit 0x3a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
