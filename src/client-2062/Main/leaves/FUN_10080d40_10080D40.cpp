// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10080D40 .. +0x193 bytes.
extern "C" __declspec(naked) void FUN_10080d40_10080D40() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 0d8h]
        lea edi, [esi + 4]
        push edi
        ; Exact mapped bytes E8 CB 4D 01 00: call 0x10095b20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 6E 01 00 00: je 0x10080ecc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x10080d6e
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 02 00: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 5E 01 00 00: jne 0x10080ecc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        mov eax, dword ptr [edi]
        cmp eax, 0e7h
        mov ebp, 0fffdh
        ; Exact mapped bytes 66 8B 99 B4 00 00 00: mov bx, word ptr [ecx + 0xb4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x99
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 31: jge 0x10080dba
        __asm _emit 0x7d
        __asm _emit 0x31
        ; Exact mapped bytes 66 83 FB 02: cmp bx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x02
        ; Exact mapped bytes 75 12: jne 0x10080da1
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 66 21 6E 24: and word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6e
        __asm _emit 0x24
        push 0
        ; Exact mapped bytes E8 56 4D 01 00: call 0x10095af0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        add eax, 32h
        ; Exact mapped bytes EB 53: jmp 0x10080df4
        __asm _emit 0xeb
        __asm _emit 0x53
        ; Exact mapped bytes 66 83 FB 03: cmp bx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x03
        ; Exact mapped bytes 75 59: jne 0x10080e00
        __asm _emit 0x75
        __asm _emit 0x59
        ; Exact mapped bytes 66 21 6E 24: and word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6e
        __asm _emit 0x24
        push 1
        ; Exact mapped bytes E8 3E 4D 01 00: call 0x10095af0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        add ecx, 32h
        push ecx
        ; Exact mapped bytes EB 3B: jmp 0x10080df5
        __asm _emit 0xeb
        __asm _emit 0x3b
        cmp eax, 21bh
        ; Exact mapped bytes 7E 3F: jle 0x10080e00
        __asm _emit 0x7e
        __asm _emit 0x3f
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 16: jne 0x10080ddc
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 66 21 6E 24: and word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6e
        __asm _emit 0x24
        push 2
        ; Exact mapped bytes E8 1F 4D 01 00: call 0x10095af0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [edi]
        sub edx, 0beh
        push edx
        ; Exact mapped bytes EB 19: jmp 0x10080df5
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes 66 83 FB 01: cmp bx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 75 1E: jne 0x10080e00
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 66 21 6E 24: and word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6e
        __asm _emit 0x24
        push 3
        ; Exact mapped bytes E8 03 4D 01 00: call 0x10095af0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        sub eax, 0beh
        push eax
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes E8 50 4D 01 00: call 0x10095b50
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        cmp eax, 0a0h
        ; Exact mapped bytes 7D 5E: jge 0x10080e68
        __asm _emit 0x7d
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 FB 03: cmp bx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x03
        ; Exact mapped bytes 75 27: jne 0x10080e37
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 21 6E 24: and word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6e
        __asm _emit 0x24
        push 2
        ; Exact mapped bytes E8 CF 4C 01 00: call 0x10095af0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        push ecx
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes E8 50 4D 01 00: call 0x10095b80
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FB 01: cmp bx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x10080ecc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 21 6E 24: and word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6e
        __asm _emit 0x24
        push 0
        ; Exact mapped bytes E8 9E 4C 01 00: call 0x10095af0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0d8h]
        push edx
        ; Exact mapped bytes E8 1F 4D 01 00: call 0x10095b80
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 19ah
        ; Exact mapped bytes 7E 5D: jle 0x10080ecc
        __asm _emit 0x7e
        __asm _emit 0x5d
        ; Exact mapped bytes 66 83 FB 02: cmp bx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x02
        ; Exact mapped bytes 75 2C: jne 0x10080ea1
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 21 6E 24: and word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6e
        __asm _emit 0x24
        push 3
        ; Exact mapped bytes E8 6A 4C 01 00: call 0x10095af0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0d8h]
        sub eax, 0a0h
        push eax
        ; Exact mapped bytes E8 E6 4C 01 00: call 0x10095b80
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 DB: test bx, bx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xdb
        ; Exact mapped bytes 75 26: jne 0x10080ecc
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes 66 21 6E 24: and word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6e
        __asm _emit 0x24
        push 1
        ; Exact mapped bytes E8 39 4C 01 00: call 0x10095af0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        sub ecx, 0a0h
        push ecx
        mov ecx, dword ptr [esi + 0d8h]
        ; Exact mapped bytes E8 B4 4C 01 00: call 0x10095b80
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
