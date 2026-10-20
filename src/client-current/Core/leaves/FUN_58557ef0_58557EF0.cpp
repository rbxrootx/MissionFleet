// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58557EF0 .. +0x150 bytes.
extern "C" __declspec(naked) void FUN_58557ef0_58557EF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov edi, dword ptr [ebp - 4]
        add edi, 78h
        mov ecx, 2dh
        mov esi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 408h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 12 01 00 00: mov ax, word ptr [edx + 0x112]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E8 09: shr ax, 9
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x09
        ; Exact mapped bytes 66 83 E0 07: and ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x07
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 09: jne 0x58557f3a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 10h
        ; Exact mapped bytes EB 07: jmp 0x58557f41
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 46h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 3cch], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 126h]
        cmp edx, 640h
        ; Exact mapped bytes 7E 4A: jle 0x58557fa9
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 126h]
        cmp ecx, 960h
        ; Exact mapped bytes 7E 29: jle 0x58557f9a
        __asm _emit 0x7e
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 126h]
        cmp eax, 0e10h
        ; Exact mapped bytes 7E 09: jle 0x58557f8b
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes EB 07: jmp 0x58557f92
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 2
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 07: jmp 0x58557fa1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 07: jmp 0x58557fb0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3f8h], 44h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3fch], 3ch
        ; Exact mapped bytes E8 97 8C 2F 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x8c
        __asm _emit 0x2f
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x58557fe1
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 42h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 400h], eax
        ; Exact mapped bytes E8 7A 8C 2F 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x8c
        __asm _emit 0x2f
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x58557ffe
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
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
