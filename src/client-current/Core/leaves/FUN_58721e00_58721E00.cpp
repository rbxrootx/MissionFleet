// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58721E00 .. +0x30B bytes.
extern "C" __declspec(naked) void FUN_58721e00_58721E00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 05: jne 0x58721e14
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 EF 02 00 00: jmp 0x58722103
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 05: jne 0x58721e1f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 E4 02 00 00: jmp 0x58722103
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 DA 02 00 00: jne 0x58722103
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 75 79: jne 0x58721ead
        __asm _emit 0x75
        __asm _emit 0x79
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A2 3F D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x3f
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [edx + 8ch]
        mov byte ptr [ebp - 1], al
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 F5 2B D6 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x2b
        __asm _emit 0xd6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        shr edx, 0ah
        and edx, 3fffffh
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        push 0
        push -1
        mov eax, dword ptr [ebp - 10h]
        push eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        push 0
        movzx edx, word ptr [ebp - 4]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 BB E5 FF: call 0x5857da00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xbb
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 56 02 00 00: jmp 0x58722103
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 75 59: jne 0x58721f14
        __asm _emit 0x75
        __asm _emit 0x59
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1B 3F D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3f
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 52 DB FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x52
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 18h], eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 5
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1F 4E E2 FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x4e
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 EF 01 00 00: jmp 0x58722103
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 84h]
        ; Exact mapped bytes 75 59: jne 0x58721f7b
        __asm _emit 0x75
        __asm _emit 0x59
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B4 3E D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x3e
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 52 DB FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x52
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 24h], eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        push 6
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B8 4D E2 FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x4d
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 88 01 00 00: jmp 0x58722103
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 75 59: jne 0x58721fdf
        __asm _emit 0x75
        __asm _emit 0x59
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 50 3E D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x3e
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 51 DB FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x51
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        push 0bh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 54 4D E2 FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x4d
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 24 01 00 00: jmp 0x58722103
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 70h]
        ; Exact mapped bytes 75 59: jne 0x58722043
        __asm _emit 0x75
        __asm _emit 0x59
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EC 3D D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3d
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 51 DB FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x51
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 1
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        push 0bh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 F0 4C E2 FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x4c
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x58722103
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 74h]
        ; Exact mapped bytes 75 56: jne 0x587220a4
        __asm _emit 0x75
        __asm _emit 0x56
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 88 3D D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x3d
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 51 DB FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x51
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 48h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        push 0ch
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 8C 4C E2 FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x4c
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 5F: jmp 0x58722103
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 75 54: jne 0x58722103
        __asm _emit 0x75
        __asm _emit 0x54
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 27 3D D6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x3d
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 50 DB FF: call 0x584d7170
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 54h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        push 0dh
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 2B 4C E2 FF: call 0x58546d20
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4c
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
