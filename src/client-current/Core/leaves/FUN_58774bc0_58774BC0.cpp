// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58774BC0 .. +0xBCD bytes.
extern "C" __declspec(naked) void FUN_58774bc0_58774BC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2d0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 238h], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 6A 09 00 00: jne 0x5877554e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 238h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 10ch]
        ; Exact mapped bytes 75 05: jne 0x58774bfa
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x58774cd2
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 238h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 114h]
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x58774cd2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 BF 00 00: call 0x58780b60
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x58774c25
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 57 0B 00 00: jmp 0x5877577c
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 1
        push 0ffh
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 B6 E3 FF: call 0x585b02d0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb6
        __asm _emit 0xe3
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 25 D6 FF: call 0x584d71d0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x25
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, ax
        movzx edx, byte ptr [ecx + 5896055bh]
        add edx, 6
        cmp esi, edx
        ; Exact mapped bytes 7C 24: jl 0x58774c7b
        __asm _emit 0x7c
        __asm _emit 0x24
        ; Exact mapped bytes E8 94 25 D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x25
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2a8h], eax
        push 0
        push 0
        push 0
        push 2bdh
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 F8 40 D6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x40
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 57: jmp 0x58774cd2
        __asm _emit 0xeb
        __asm _emit 0x57
        ; Exact mapped bytes 83 3D CC 20 96 58 00: cmp dword ptr [0x589620cc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 4E: jne 0x58774cd2
        __asm _emit 0x75
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 24 D6 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        push 1
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 3E 7F DD FF: call 0x5854cbe0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x7f
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 24 D6 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        push 1
        push 0
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 58 20 DD FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 CC 20 96 58 01 00 00 00: mov dword ptr [0x589620cc], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 238h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 118h]
        ; Exact mapped bytes 0F 85 09 05 00 00: jne 0x587751f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E FC D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F1 04 00 00: je 0x587751eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D CC 20 96 58 00: cmp dword ptr [0x589620cc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 E4 04 00 00: jne 0x587751eb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E FC D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C7 FC D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 3
        ; Exact mapped bytes 0F 85 DB 01 00 00: jne 0x58774f0c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 FC D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1D FD D0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 48h]
        mov dword ptr [ebp - 244h], ecx
        mov edx, 1
        ; Exact mapped bytes 66 89 95 C4 FD FF FF: mov word ptr [ebp - 0x23c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [ebp - 244h]
        push eax
        movzx ecx, word ptr [ebp - 23ch]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 19 D8 FF: call 0x584f66d0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x19
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        cmp dword ptr [ebp - 240h], 0
        ; Exact mapped bytes 0F 84 80 01 00 00: je 0x58774f07
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 23ch]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 70 01 00 00: jne 0x58774f07
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 240h]
        movzx ecx, word ptr [eax + 8]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x58774e4d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB FB D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfb
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 FC D0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 25ch], edx
        mov eax, dword ptr [ebp - 25ch]
        push eax
        mov ecx, dword ptr [ebp - 244h]
        and ecx, 0ffffh
        push ecx
        movzx edx, word ptr [ebp - 23ch]
        push edx
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 EA F4 FF: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xea
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 FB D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D9 FB D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [eax + 60h]
        xor edx, edx
        mov ecx, 1770h
        div ecx
        imul eax, dword ptr [ebp - 248h]
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 FB D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AE FB D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [eax + 60h]
        xor edx, edx
        mov ecx, 2ee0h
        div ecx
        imul eax, dword ptr [ebp - 248h]
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes EB 4A: jmp 0x58774e97
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 28 FB D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 FB D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xd0
        __asm _emit 0xff
        imul eax, dword ptr [eax + 60h], 16h
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 FB D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xfb
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5C FB D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfb
        __asm _emit 0xd0
        __asm _emit 0xff
        imul eax, dword ptr [eax + 60h], 0ah
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes C7 05 CC 20 96 58 01 00 00 00: mov dword ptr [0x589620cc], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea edx, [ebp - 234h]
        push edx
        ; Exact mapped bytes E8 5C 7F 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7f
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 24ch]
        push eax
        mov ecx, dword ptr [ebp - 250h]
        push ecx
        push 588b550ch
        ; Exact mapped bytes E8 21 D1 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd1
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 234h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes E8 08 23 D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x23
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        push 0
        push 0
        lea eax, [ebp - 234h]
        push eax
        push 0ah
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 BA C8 D6 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc8
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DF 02 00 00: jmp 0x587751eb
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 FA D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C2 FA D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 75 7F: jne 0x58774fb1
        __asm _emit 0x75
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 FA D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9C FA D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [eax + 60h]
        mov dword ptr [ebp - 264h], eax
        push 100h
        push 0
        lea ecx, [ebp - 134h]
        push ecx
        ; Exact mapped bytes E8 B0 7E 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x7e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 264h]
        push edx
        push 588b5534h
        ; Exact mapped bytes E8 7C D0 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd0
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 134h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes E8 63 22 D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x22
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        push 0
        push 0
        lea ecx, [ebp - 134h]
        push ecx
        push 0ah
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 15 C8 D6 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3A 02 00 00: jmp 0x587751eb
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 F9 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1D FA D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 75 30: jne 0x58775007
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes E8 14 22 D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x22
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        push 0
        push 0
        push 0
        push 47fh
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 78 3D D6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x3d
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 CC 20 96 58 00 00 00 00: mov dword ptr [0x589620cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E4 01 00 00: jmp 0x587751eb
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E F9 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C7 F9 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 6
        ; Exact mapped bytes 75 27: jne 0x58775054
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes E8 BE 21 D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x21
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        push 0
        push 0
        push 0
        push 4a3h
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 72 C7 D6 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc7
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 97 01 00 00: jmp 0x587751eb
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 F9 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7A F9 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 7
        ; Exact mapped bytes 75 56: jne 0x587750cc
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF F8 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 58 F9 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 8
        ; Exact mapped bytes 75 30: jne 0x587750cc
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes E8 4F 21 D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x21
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        push 0
        push 0
        push 0
        push 518h
        mov ecx, dword ptr [ebp - 274h]
        ; Exact mapped bytes E8 B3 3C D6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x3c
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 CC 20 96 58 00 00 00 00: mov dword ptr [0x589620cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x587751eb
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B9 1E D6 FF: call 0x584d6f90
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x1e
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x587751cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 F8 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EB F8 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x587751cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 F8 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C2 F8 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x587751cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F F8 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 98 F8 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 74 70: je 0x587751cc
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 F8 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 72 F8 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 5
        ; Exact mapped bytes 74 4A: je 0x587751cc
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 1E D6 FF: call 0x584d6f90
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x1e
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 75 16: jne 0x587751aa
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 15 4C 06 96 58: mov edx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 20: jmp 0x587751ca
        __asm _emit 0xeb
        __asm _emit 0x20
        push 0
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 3B D6 FF: call 0x584d8d50
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3b
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes A1 4C 06 96 58: mov eax, dword ptr [0x5896064c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 1F: jmp 0x587751eb
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes E8 1F 20 D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x20
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        push 0
        push 0
        push 0
        push 5
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 D6 C5 D6 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc5
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 59 03 00 00: jmp 0x58775549
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 238h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 11ch]
        ; Exact mapped bytes 75 3B: jne 0x5877523c
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 F7 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x58775237
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 F7 D0 FF: call 0x584849a0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx eax, ax
        mov dword ptr [ebp - 27ch], eax
        mov ecx, dword ptr [ebp - 27ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 87 E0 FF: call 0x5857d9d0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x87
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0D 03 00 00: jmp 0x58775549
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 238h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 110h]
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x58775300
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 F7 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x587752fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 F7 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6A F7 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 35eh]
        mov dword ptr [ebp - 280h], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 F6 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B F7 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 75 2D: jne 0x587752d6
        __asm _emit 0x75
        __asm _emit 0x2d
        cmp dword ptr [ebp - 280h], 0
        ; Exact mapped bytes 74 24: je 0x587752d6
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes E8 39 1F D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x1f
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        push 0
        push 0
        push 0
        push 474h
        mov ecx, dword ptr [ebp - 284h]
        ; Exact mapped bytes E8 9D 3A D6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3a
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 25: jmp 0x587752fb
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 04 00 00: call 0x58775790
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 254h], eax
        mov ecx, dword ptr [ebp - 254h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 254h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 49 02 00 00: jmp 0x58775549
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 238h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 128h]
        ; Exact mapped bytes 0F 85 80 01 00 00: jne 0x58775495
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 B8 00 00: call 0x58780b60
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5877532b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 51 04 00 00: jmp 0x5877577c
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A AF E3 FF: call 0x585b0270
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xaf
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0ch]
        ; Exact mapped bytes 3B 05 30 05 96 58: cmp eax, dword ptr [0x58960530]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 29 01 00 00: jne 0x5877546e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 AF E3 FF: call 0x585b0270
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xaf
        __asm _emit 0xe3
        __asm _emit 0xff
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 0F 86 14 01 00 00: jbe 0x5877546e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB BF 00 00: call 0x58781350
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x58775390
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes E8 82 1E D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x1e
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        push 0
        push 0
        push 0
        push 47ch
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 E6 39 D6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x39
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x5877546c
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 43 DB FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x43
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, ax
        and ecx, 0f00h
        sar ecx, 8
        mov dword ptr [ebp - 294h], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 1D D6 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        push 3
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 15 78 DD FF: call 0x5854cbe0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 1D D6 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        push 1
        push 0
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 290h]
        ; Exact mapped bytes E8 2F 19 DD FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x19
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 1D D6 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        mov edx, dword ptr [ebp - 294h]
        push edx
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 DC 0D DD FF: call 0x585461f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        cmp dword ptr [ebp - 29ch], 0
        ; Exact mapped bytes 74 27: je 0x5877544a
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 1D D6 FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        mov eax, dword ptr [ebp - 258h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 258h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 22: jmp 0x5877546c
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 A1 1D D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        push 0
        push 0
        push 0
        push 479h
        mov ecx, dword ptr [ebp - 2a0h]
        ; Exact mapped bytes E8 05 39 D6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x39
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x58775490
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 7D 1D D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2a4h], eax
        push 0
        push 0
        push 0
        push 476h
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 E1 38 D6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x58775549
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 238h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 12ch]
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x58775549
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB F4 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf4
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6E: je 0x58775527
        __asm _emit 0x74
        __asm _emit 0x6e
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC F4 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf4
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 F5 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf5
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 75 24: jne 0x58775503
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes E8 0C 1D D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2bch], eax
        push 0
        push 0
        push 0
        push 144h
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 C0 C2 D6 FF: call 0x584e17c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xc2
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x58775525
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 E8 1C D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ach], eax
        push 0
        push 0
        push 0
        push 477h
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 4C 38 D6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x58775549
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes E8 C4 1C D6 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1c
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        push 0
        push 0
        push 0
        push 477h
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 28 38 D6 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2C 02 00 00: jmp 0x5877577a
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 0F 85 0C 02 00 00: jne 0x58775764
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 238h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 10ch]
        ; Exact mapped bytes 75 05: jne 0x5877556e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F4 01 00 00: jmp 0x58775762
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 238h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 118h]
        ; Exact mapped bytes 75 36: jne 0x587755b5
        __asm _emit 0x75
        __asm _emit 0x36
        push 588b555ch
        ; Exact mapped bytes E8 67 CA DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xca
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2b4h], eax
        mov eax, dword ptr [ebp - 2b4h]
        push eax
        push 32h
        push 0c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 FA D5 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfa
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AD 01 00 00: jmp 0x58775762
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 238h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 11ch]
        ; Exact mapped bytes 0F 85 12 01 00 00: jne 0x587756dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB F3 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x587756d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        push 0
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 26 78 0D 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x78
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 F3 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 F3 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x5877569f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 F3 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BB F3 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 74 6A: je 0x5877569f
        __asm _emit 0x74
        __asm _emit 0x6a
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 F3 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 F3 D0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 74 48: je 0x5877569f
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E F3 D0 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A7 D0 FD FF: call 0x58752710
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 2b8h], eax
        push 588b557ch
        ; Exact mapped bytes E8 77 C9 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc9
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2d0h], eax
        mov edx, dword ptr [ebp - 2b8h]
        push edx
        mov eax, dword ptr [ebp - 2d0h]
        push eax
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes EB 1D: jmp 0x587756bc
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 0
        push 588b559ch
        ; Exact mapped bytes E8 45 C9 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc9
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 34h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [ebp - 34h]
        push eax
        push 32h
        push 0c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A F9 D5 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf9
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x58775762
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 238h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 114h]
        ; Exact mapped bytes 75 33: jne 0x58775720
        __asm _emit 0x75
        __asm _emit 0x33
        push 588b55bch
        ; Exact mapped bytes E8 F9 C8 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc8
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2c0h], eax
        mov ecx, dword ptr [ebp - 2c0h]
        push ecx
        push 32h
        push 0c8h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 F8 D5 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x58775762
        __asm _emit 0xeb
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 238h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes 75 31: jne 0x58775762
        __asm _emit 0x75
        __asm _emit 0x31
        push 588b55dch
        ; Exact mapped bytes E8 B5 C8 DA FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc8
        __asm _emit 0xda
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2c4h], eax
        mov edx, dword ptr [ebp - 2c4h]
        push edx
        push 32h
        push 0c8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F F8 D5 FF: call 0x584d4ff0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x5877577a
        __asm _emit 0xeb
        __asm _emit 0x16
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 10: jne 0x5877577a
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 E8 D5 FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        xor eax, eax
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 C9 B8 0B 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
