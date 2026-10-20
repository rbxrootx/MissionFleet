// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AD890 .. +0x1EF bytes.
extern "C" __declspec(naked) void FUN_004ad890_004AD890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x4ad8a3
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D8 01 00 00: jmp 0x4ada7b
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 8C 02 5E 00 00: cmp dword ptr [0x5e028c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 19: jne 0x4ad8c5
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C3 BE FF FF: call 0x4a9780
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E9 B6 01 00 00: jmp 0x4ada7b
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 24 79 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1
        mov dword ptr [ebp + 10h], ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 8C 01 00 00: je 0x4ada6f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 0F B6 02: movzx ax, byte ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        xor eax, eax
        mov al, byte ptr [edx + 5e03a1h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 7E: je 0x4ad98d
        __asm _emit 0x74
        __asm _emit 0x7e
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 3C: jne 0x4ad951
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 66 C7 45 FC 00 00: mov word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        xor eax, eax
        mov al, byte ptr [edx + 5e03a1h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4ad93a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 0A: jmp 0x4ad944
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 66 8B 45 F4: mov ax, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x4ada0d
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x4ad965
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 20: jmp 0x4ad985
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        shl eax, 8
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        or eax, edx
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 66 8B 4D F0: mov cx, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 0F B6 02: movzx ax, byte ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffh
        xor eax, eax
        mov al, byte ptr [edx + 5e03a1h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x4ada0d
        __asm _emit 0x74
        __asm _emit 0x54
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 08: jne 0x4ad9c7
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 66 C7 45 F8 00 00: mov word ptr [ebp - 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 46: jmp 0x4ada0d
        __asm _emit 0xeb
        __asm _emit 0x46
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4ad9e4
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 21: jmp 0x4ada05
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        shl ecx, 8
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx]
        or ecx, eax
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 66 8B 55 EC: mov dx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        cmp eax, ecx
        ; Exact mapped bytes 74 2D: je 0x4ada4f
        __asm _emit 0x74
        __asm _emit 0x2d
        push 19h
        ; Exact mapped bytes E8 67 78 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        xor ecx, ecx
        cmp edx, eax
        setle cl
        dec ecx
        and ecx, 2
        add ecx, -1
        mov eax, ecx
        ; Exact mapped bytes EB 2C: jmp 0x4ada7b
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 75 0E: jne 0x4ada6a
        __asm _emit 0x75
        __asm _emit 0x0e
        push 19h
        ; Exact mapped bytes E8 2D 78 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 11: jmp 0x4ada7b
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes E9 60 FE FF FF: jmp 0x4ad8cf
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 19h
        ; Exact mapped bytes E8 1A 78 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
