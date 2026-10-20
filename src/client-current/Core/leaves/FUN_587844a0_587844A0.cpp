// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587844A0 .. +0x190 bytes.
extern "C" __declspec(naked) void FUN_587844a0_587844A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov edi, dword ptr [ebp - 4]
        add edi, 70h
        mov ecx, 2dh
        mov esi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 418h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 0A 01 00 00: mov ax, word ptr [edx + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x0a
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
        ; Exact mapped bytes 75 09: jne 0x587844ea
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 10h
        ; Exact mapped bytes EB 07: jmp 0x587844f1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 46h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 3ech], eax
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 10eh]
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + ecx + 10eh]
        imul eax, ecx
        imul eax, eax, 90h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 180h], eax
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 11eh]
        cmp ecx, 640h
        ; Exact mapped bytes 7E 4A: jle 0x58784599
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 11eh]
        cmp eax, 960h
        ; Exact mapped bytes 7E 2A: jle 0x5878458a
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 11eh]
        cmp edx, 0e10h
        ; Exact mapped bytes 7E 09: jle 0x5878457b
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes EB 07: jmp 0x58784582
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 2
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x58784591
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 07: jmp 0x587845a0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 404h], 44h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 408h], 3ch
        ; Exact mapped bytes E8 A7 C6 0C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc6
        __asm _emit 0x0c
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x587845d1
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 42h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 40ch], eax
        ; Exact mapped bytes E8 8A C6 0C 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc6
        __asm _emit 0x0c
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x587845ee
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        add eax, 26h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 410h], eax
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 11ah]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 1A 01 00 00: mov word ptr [ecx + 0x11a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 11ch]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 1C 01 00 00: mov word ptr [ecx + 0x11c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x1c
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
