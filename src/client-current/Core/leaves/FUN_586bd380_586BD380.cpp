// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BD380 .. +0x1D8 bytes.
extern "C" __declspec(naked) void FUN_586bd380_586BD380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 3E 0C 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x3e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 19: je 0x586bd3c6
        __asm _emit 0x74
        __asm _emit 0x19
        cmp dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 74 1E: je 0x586bd3d1
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 74 02: je 0x586bd3bb
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 1F: jmp 0x586bd3da
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, 1
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 14: jmp 0x586bd3da
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, 0ah
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x586bd3da
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, 64h
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 84 60 01 00 00: je 0x586bd544
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 84 5F E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 3B 01 00 00: je 0x586bd534
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 1ch]
        movzx eax, word ptr [edx + ecx + 8]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 1ch]
        movzx eax, word ptr [edx + ecx + 8]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 1ch]
        movzx eax, word ptr [edx + ecx + 8]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        movzx ecx, word ptr [ebp - 8]
        movzx edx, word ptr [ebp - 4]
        cmp ecx, edx
        ; Exact mapped bytes 0F 8C D7 00 00 00: jl 0x586bd524
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 0ch]
        push eax
        movzx ecx, word ptr [ebp - 10h]
        movzx edx, word ptr [ebp - 4]
        add ecx, edx
        push ecx
        movzx eax, word ptr [ebp - 8]
        movzx ecx, word ptr [ebp - 4]
        sub eax, ecx
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 80 1C E4 FF: call 0x584ff0f0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [edx + 84h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 84 56 00 00: call 0x586c2b10
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 24ch]
        ; Exact mapped bytes E8 15 83 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x83
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 75: jle 0x586bd514
        __asm _emit 0x7e
        __asm _emit 0x75
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 15 1E 00 00: call 0x586bf2c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586bd4be
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [edx + 84h]
        ; Exact mapped bytes 7D 0B: jge 0x586bd4d7
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C 60 00 00: call 0x586c34e0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DE: jmp 0x586bd4b5
        __asm _emit 0xeb
        __asm _emit 0xde
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586bd4e9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 7D 25: jge 0x586bd514
        __asm _emit 0x7d
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + edx*4 + 22ch]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 88h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7F 40 10 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CC: jmp 0x586bd4e0
        __asm _emit 0xeb
        __asm _emit 0xcc
        push 1132h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9F B3 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd532
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1138h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8F B3 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd542
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1135h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7F B3 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd552
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1135h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6F B3 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb3
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
