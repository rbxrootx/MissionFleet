// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58557BD0 .. +0x317 bytes.
extern "C" __declspec(naked) void FUN_58557bd0_58557BD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], ecx
        mov esi, dword ptr [ebp + 0ch]
        add esi, 4
        mov edi, dword ptr [ebp - 4]
        add edi, 7ch
        mov ecx, 25h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 91 A0 00 00 00: mov dx, word ptr [ecx + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 90 26 01 00 00: mov word ptr [eax + 0x126], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 91 A2 00 00 00: mov dx, word ptr [ecx + 0xa2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 90 28 01 00 00: mov word ptr [eax + 0x128], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 91 A8 00 00 00: mov dx, word ptr [ecx + 0xa8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 90 2A 01 00 00: mov word ptr [eax + 0x12a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58557c47
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 32: jge 0x58557c7f
        __asm _emit 0x7d
        __asm _emit 0x32
        xor ecx, ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8C 50 1E 01 00 00: mov word ptr [eax + edx*2 + 0x11e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8C 50 1A 01 00 00: mov word ptr [eax + edx*2 + 0x11a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8C 50 16 01 00 00: mov word ptr [eax + edx*2 + 0x116], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB BF: jmp 0x58557c3e
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, 0ff00h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A 12 01 00 00: and cx, word ptr [edx + 0x112]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 88 12 01 00 00: mov word ptr [eax + 0x112], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 8fffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A 10 01 00 00: and cx, word ptr [edx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 88 10 01 00 00: mov word ptr [eax + 0x110], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 82 9C 00 00 00: mov ax, word ptr [edx + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 81 22 01 00 00: mov word ptr [ecx + 0x122], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 100h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 0B 8A 12 01 00 00: or cx, word ptr [edx + 0x112]
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x8a
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 88 12 01 00 00: mov word ptr [eax + 0x112], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 82 9E 00 00 00: mov ax, word ptr [edx + 0x9e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 81 24 01 00 00: mov word ptr [ecx + 0x124], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0f1ffh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A 12 01 00 00: and cx, word ptr [edx + 0x112]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 88 12 01 00 00: mov word ptr [eax + 0x112], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0f03fh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A 10 01 00 00: and cx, word ptr [edx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 88 10 01 00 00: mov word ptr [eax + 0x110], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0ffc0h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 8A 10 01 00 00: and cx, word ptr [edx + 0x110]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 88 10 01 00 00: mov word ptr [eax + 0x110], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 408h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 12 01 00 00: mov cx, word ptr [eax + 0x112]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 09: shr cx, 9
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x09
        ; Exact mapped bytes 66 83 E1 07: and cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 75 09: jne 0x58557d6c
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 10h
        ; Exact mapped bytes EB 07: jmp 0x58557d73
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 46h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 3cch], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 126h]
        cmp eax, 640h
        ; Exact mapped bytes 7E 4B: jle 0x58557ddb
        __asm _emit 0x7e
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 126h]
        cmp edx, 960h
        ; Exact mapped bytes 7E 2A: jle 0x58557dcc
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 126h]
        cmp ecx, 0e10h
        ; Exact mapped bytes 7E 09: jle 0x58557dbd
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 3
        ; Exact mapped bytes EB 07: jmp 0x58557dc4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 2
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 07: jmp 0x58557dd3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58557de2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3f8h], 44h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3fch], 3ch
        ; Exact mapped bytes E8 65 8E 2F 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8e
        __asm _emit 0x2f
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x58557e13
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 42h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 400h], eax
        ; Exact mapped bytes E8 48 8E 2F 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x8e
        __asm _emit 0x2f
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x58557e30
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 26h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 404h], eax
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 122h]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 22 01 00 00: mov word ptr [edx + 0x122], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 124h]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 24 01 00 00: mov word ptr [edx + 0x124], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 418h], eax
        ; Exact mapped bytes 6B 05 64 77 94 58 75: imul eax, dword ptr [0x58947764], 0x75
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x75
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 41ch], eax
        imul edx, dword ptr [ebp + 14h], 190h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 420h], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 424h], 0ah
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 428h], 0ah
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 42ch], 14h
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
