// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BD560 .. +0x223 bytes.
extern "C" __declspec(naked) void FUN_586bd560_586BD560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 3C 0C 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x586bd58a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0ah
        ; Exact mapped bytes EB 07: jmp 0x586bd591
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes 66 8B 4D D8: mov cx, word ptr [ebp - 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 CC 01 00 00: je 0x586bd76f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C5 5D E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x5d
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 A7 01 00 00: je 0x586bd75f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 20h]
        movzx edx, word ptr [ecx + eax + 8]
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 F0: mov word ptr [ebp - 0x10], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 20h]
        movzx edx, word ptr [ecx + eax + 8]
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, 2
        shl eax, 1
        mov ecx, dword ptr [ebp - 20h]
        movzx edx, word ptr [ecx + eax + 8]
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0ah
        ; Exact mapped bytes 77 3F: ja 0x586bd64d
        __asm _emit 0x77
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 24 95 84 D7 6B 58: jmp dword ptr [edx*4 + 0x586bd784]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x6b
        __asm _emit 0x58
        mov eax, 0ah
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 2A: jmp 0x586bd64d
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, 1
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 1F: jmp 0x586bd64d
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, 1
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 14: jmp 0x586bd64d
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, 5
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x586bd64d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, 0ah
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        movzx edx, word ptr [ebp - 4]
        test edx, edx
        ; Exact mapped bytes 75 13: jne 0x586bd668
        __asm _emit 0x75
        __asm _emit 0x13
        push 1135h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5E B2 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x586bd77d
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 8]
        movzx ecx, word ptr [ebp - 4]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8C D7 00 00 00: jl 0x586bd74f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 0ch]
        movzx eax, word ptr [ebp - 4]
        add edx, eax
        push edx
        movzx ecx, word ptr [ebp - 8]
        movzx edx, word ptr [ebp - 4]
        sub ecx, edx
        push ecx
        movzx eax, word ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 55 1A E4 FF: call 0x584ff0f0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1a
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ecx + 84h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 59 54 00 00: call 0x586c2b10
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 24ch]
        ; Exact mapped bytes E8 EA 80 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x80
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 75: jle 0x586bd73f
        __asm _emit 0x7e
        __asm _emit 0x75
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AA 20 00 00: call 0x586bf780
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586bd6e9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ecx + 84h]
        ; Exact mapped bytes 7D 0B: jge 0x586bd702
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E1 5D 00 00: call 0x586c34e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DE: jmp 0x586bd6e0
        __asm _emit 0xeb
        __asm _emit 0xde
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586bd714
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 5
        ; Exact mapped bytes 7D 25: jge 0x586bd73f
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + ecx*4 + 22ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 88h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 54 3E 10 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x3e
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CC: jmp 0x586bd70b
        __asm _emit 0xeb
        __asm _emit 0xcc
        push 1131h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 74 B1 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd75d
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1139h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 64 B1 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd76d
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1135h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 54 B1 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd77d
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1135h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 44 B1 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
