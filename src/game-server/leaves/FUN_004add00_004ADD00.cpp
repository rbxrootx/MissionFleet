// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ADD00 .. +0x29A bytes.
extern "C" __declspec(naked) void FUN_004add00_004ADD00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        ; Exact mapped bytes 83 3D 8C 02 5E 00 00: cmp dword ptr [0x5e028c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x4add24
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 04 CA 00 00: call 0x4ba720
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 72 02 00 00: jmp 0x4adf96
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 C5 74 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
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
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x4addf0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 75 08: jne 0x4add71
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 66 C7 45 FC 00 00: mov word ptr [ebp - 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7D: jmp 0x4addee
        __asm _emit 0xeb
        __asm _emit 0x7d
        push 1
        ; Exact mapped bytes A1 7C 02 5E 00: mov eax, dword ptr [0x5e027c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 2
        lea ecx, [ebp - 0ch]
        push ecx
        push 2
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        push edx
        push 200h
        ; Exact mapped bytes A1 A4 04 5E 00: mov eax, dword ptr [0x5e04a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 38 C3 00 00: call 0x4ba0d0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 75 0B: jne 0x4addaf
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 66 0F B6 4D F4: movzx cx, byte ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 36: jmp 0x4adde5
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 75 1C: jne 0x4addd1
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 0ch]
        and edx, 0ffh
        shl edx, 8
        mov eax, dword ptr [ebp - 0bh]
        and eax, 0ffh
        add edx, eax
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 14: jmp 0x4adde5
        __asm _emit 0xeb
        __asm _emit 0x14
        push 19h
        ; Exact mapped bytes E8 B8 74 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, 7fffffffh
        ; Exact mapped bytes E9 B1 01 00 00: jmp 0x4adf96
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB 42: jmp 0x4ade32
        __asm _emit 0xeb
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        xor eax, eax
        mov al, byte ptr [edx + 5e03a1h]
        and eax, 10h
        cmp eax, 10h
        ; Exact mapped bytes 75 16: jne 0x4ade1f
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        xor edx, edx
        mov dl, byte ptr [ecx + 5e02a0h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 0B: jmp 0x4ade2a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 66 8B 4D EC: mov cx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
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
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x4adef4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 75 08: jne 0x4ade75
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 66 C7 45 F8 00 00: mov word ptr [ebp - 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7D: jmp 0x4adef2
        __asm _emit 0xeb
        __asm _emit 0x7d
        push 1
        ; Exact mapped bytes A1 7C 02 5E 00: mov eax, dword ptr [0x5e027c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 2
        lea ecx, [ebp - 0ch]
        push ecx
        push 2
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        push edx
        push 200h
        ; Exact mapped bytes A1 A4 04 5E 00: mov eax, dword ptr [0x5e04a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 34 C2 00 00: call 0x4ba0d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 75 0B: jne 0x4adeb3
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 66 0F B6 4D F4: movzx cx, byte ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes EB 36: jmp 0x4adee9
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 75 1C: jne 0x4aded5
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 0ch]
        and edx, 0ffh
        shl edx, 8
        mov eax, dword ptr [ebp - 0bh]
        and eax, 0ffh
        add edx, eax
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes EB 14: jmp 0x4adee9
        __asm _emit 0xeb
        __asm _emit 0x14
        push 19h
        ; Exact mapped bytes E8 B4 73 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, 7fffffffh
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x4adf96
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes EB 42: jmp 0x4adf36
        __asm _emit 0xeb
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffffh
        xor eax, eax
        mov al, byte ptr [edx + 5e03a1h]
        and eax, 10h
        cmp eax, 10h
        ; Exact mapped bytes 75 16: jne 0x4adf23
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        xor edx, edx
        mov dl, byte ptr [ecx + 5e02a0h]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 0B: jmp 0x4adf2e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 66 8B 4D E8: mov cx, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 74 2C: je 0x4adf77
        __asm _emit 0x74
        __asm _emit 0x2c
        push 19h
        ; Exact mapped bytes E8 3E 73 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffffh
        xor eax, eax
        cmp ecx, edx
        setle al
        dec eax
        and eax, 2
        add eax, -1
        ; Exact mapped bytes EB 1F: jmp 0x4adf96
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4adf91
        __asm _emit 0x75
        __asm _emit 0x0e
        push 19h
        ; Exact mapped bytes E8 06 73 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4adf96
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 98 FD FF FF: jmp 0x4add2e
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
