// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000A830 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_1000a830_1000A830() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        xor edx, edx
        push esi
        cmp ebp, edx
        push edi
        mov ebx, ecx
        ; Exact mapped bytes 74 78: je 0x1000a8b8
        __asm _emit 0x74
        __asm _emit 0x78
        mov eax, dword ptr [esp + 14h]
        mov ecx, eax
        ; Exact mapped bytes 66 89 83 B4 00 00 00: mov word ptr [ebx + 0xb4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and ecx, 0fh
        ; Exact mapped bytes 66 83 F9 0C: cmp cx, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0c
        ; Exact mapped bytes 75 2E: jne 0x1000a884
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes 66 83 BB C0 02 00 00 03: cmp word ptr [ebx + 0x2c0], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 24: jne 0x1000a884
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 F4 A8 01 00: call 0x10025160
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        lea edi, [ebx + 164h]
        mov ecx, 2dh
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 89 AB CA 02 00 00: mov word ptr [ebx + 0x2ca], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xab
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 43: jmp 0x1000a8c7
        __asm _emit 0xeb
        __asm _emit 0x43
        ; Exact mapped bytes 66 83 F9 0B: cmp cx, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x0b
        ; Exact mapped bytes 75 36: jne 0x1000a8c0
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 66 83 BB C0 02 00 00 04: cmp word ptr [ebx + 0x2c0], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 2C: jne 0x1000a8c0
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 60 A8 01 00: call 0x10025100
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        lea edi, [ebx + 0b8h]
        mov ecx, 2bh
        mov esi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 89 AB CA 02 00 00: mov word ptr [ebx + 0x2ca], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xab
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x1000a8c7
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 66 83 A3 B4 00 00 00 1F: and word ptr [ebx + 0xb4], 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xa3
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1f
        ; Exact mapped bytes 66 89 93 CA 02 00 00: mov word ptr [ebx + 0x2ca], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 4fch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 CA 02 00 00: mov ax, word ptr [ebx + 0x2ca]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 44 4E 0F 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x4e
        __asm _emit 0x0f
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
