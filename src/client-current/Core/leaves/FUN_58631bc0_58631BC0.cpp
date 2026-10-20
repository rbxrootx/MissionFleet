// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58631BC0 .. +0x4F1 bytes.
extern "C" __declspec(naked) void FUN_58631bc0_58631BC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 C9 04 00 00: je 0x586320af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 0F 85 B4 03 00 00: jne 0x58631fb5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 02: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 60h]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x58631d07
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8C 41 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 79 41 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x41
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 63 41 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x41
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 4D 41 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x41
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 37 41 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x41
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 21 41 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0B 41 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x41
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F5 40 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x40
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DF 40 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x40
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AC 02 00 00: jmp 0x58631fb3
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 60h]
        cmp eax, 2
        ; Exact mapped bytes 74 0F: je 0x58631d22
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 60h]
        test edx, edx
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x58631de8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 AB 40 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x40
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 98 40 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x40
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 38h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 82 40 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x40
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 6C 40 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x40
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 40h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 56 40 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x40
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 44h], edx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 40 40 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 48h], ecx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 2A 40 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x40
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 4ch], eax
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 14 40 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x40
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 FE 3F E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x3f
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CB 01 00 00: jmp 0x58631fb3
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 60h]
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x58631ebe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 54h], eax
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 D5 3F E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x3f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 58h], edx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 C2 3F E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x3f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 5ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 AC 3F E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 60h], eax
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 96 3F E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x3f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 64h], edx
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 80 3F E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x3f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 68h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 6A 3F E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x3f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 6ch], eax
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 54 3F E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x3f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 70h], edx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 3E 3F E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x3f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 74h], ecx
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 28 3F E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x3f
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x58631fb3
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 60h]
        cmp eax, 4
        ; Exact mapped bytes 0F 85 E5 00 00 00: jne 0x58631fb3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 78h], edx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 FF 3E E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 7ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 EC 3E E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 80h], eax
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 D6 3E E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x3e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 84h], edx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 BA 3E E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 88h], ecx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 9E 3E E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x3e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 8ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 82 3E E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 90h], edx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 66 3E E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x3e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 94h], ecx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 4A 3E E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x3e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 98h], eax
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 2E 3E E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3e
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 6A: jmp 0x5863201f
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 75 4C: jne 0x58632018
        __asm _emit 0x75
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes EB 07: jmp 0x5863201f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58632040
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58632040
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 60: je 0x586320af
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x58632063
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x58632049
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A5 35 E6 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x35
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58632087
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x586320af
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x586320ad
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 81 35 E6 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x35
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 9A: jmp 0x58632049
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov esp, ebp
    }
}
