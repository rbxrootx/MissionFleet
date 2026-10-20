// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587455A0 .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_587455a0_587455A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC A6 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xa6
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 F4 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xd3
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
        cmp ecx, 9
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x587456db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587455e1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 1ch
        ; Exact mapped bytes 0F 8D F0 00 00 00: jge 0x587456db
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 A6 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa6
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 34 7A D4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7a
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x587456d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 2
        ; Exact mapped bytes 75 15: jne 0x58745643
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 20h]
        cmp ecx, 1
        ; Exact mapped bytes 74 2A: je 0x5874566d
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 20h]
        cmp edx, 4
        ; Exact mapped bytes 75 1A: jne 0x58745672
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 20h]
        cmp edx, 2
        ; Exact mapped bytes 75 05: jne 0x58745672
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x587455d8
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 A6 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa6
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 82 79 D4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x79
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        ; Exact mapped bytes 75 40: jne 0x587456d6
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF A5 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xa5
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5E 79 D4 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x79
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        ; Exact mapped bytes 75 1C: jne 0x587456d6
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 31 1B D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 2ch
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9E 36 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x36
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 0A: jmp 0x587456e0
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes E9 FD FE FF FF: jmp 0x587455d8
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
