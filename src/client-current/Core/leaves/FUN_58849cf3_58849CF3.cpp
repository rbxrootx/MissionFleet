// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58849CF3 .. +0x207 bytes.
extern "C" __declspec(naked) void FUN_58849cf3_58849CF3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        mov ebx, dword ptr [ebp + 8]
        or edx, 0ffffffffh
        push esi
        mov esi, dword ptr [ebp + 0ch]
        xor ecx, ecx
        push edi
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [esi + 10h]
        mov dword ptr [ebp - 8], edi
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebx + 18f8h], ecx
        mov dword ptr [ebx + 18fch], 23dh
        test eax, eax
        ; Exact mapped bytes 7E 3D: jle 0x58849d6c
        __asm _emit 0x7e
        __asm _emit 0x3d
        xor esi, esi
        ; Exact mapped bytes 66 39 34 8F: cmp word ptr [edi + ecx*4], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x34
        __asm _emit 0x8f
        ; Exact mapped bytes 74 23: je 0x58849d5a
        __asm _emit 0x74
        __asm _emit 0x23
        inc dword ptr [ebx + 18f8h]
        mov edx, ecx
        mov eax, dword ptr [ebx + 18f8h]
        mov dword ptr [ebx + eax*4 + 1004h], ecx
        xor eax, eax
        mov byte ptr [ecx + ebx + 1900h], al
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 07: jmp 0x58849d61
        __asm _emit 0xeb
        __asm _emit 0x07
        xor esi, esi
        ; Exact mapped bytes 66 89 74 8F 02: mov word ptr [edi + ecx*4 + 2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x8f
        __asm _emit 0x02
        inc ecx
        cmp ecx, eax
        ; Exact mapped bytes 7C C9: jl 0x58849d2f
        __asm _emit 0x7c
        __asm _emit 0xc9
        mov esi, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], edx
        xor ecx, ecx
        inc ecx
        cmp dword ptr [ebx + 18f8h], 2
        ; Exact mapped bytes 7D 5B: jge 0x58849dd3
        __asm _emit 0x7d
        __asm _emit 0x5b
        mov esi, dword ptr [ebp - 10h]
        cmp edx, 2
        ; Exact mapped bytes 7D 05: jge 0x58849d85
        __asm _emit 0x7d
        __asm _emit 0x05
        inc edx
        mov ecx, edx
        ; Exact mapped bytes EB 04: jmp 0x58849d89
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        mov ecx, eax
        inc dword ptr [ebx + 18f8h]
        mov eax, dword ptr [ebx + 18f8h]
        mov dword ptr [ebx + eax*4 + 1004h], ecx
        xor eax, eax
        inc eax
        ; Exact mapped bytes 66 89 04 8F: mov word ptr [edi + ecx*4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x8f
        xor eax, eax
        mov byte ptr [ebx + ecx + 1900h], al
        dec dword ptr [ebx + 1af3ch]
        test esi, esi
        ; Exact mapped bytes 74 0B: je 0x58849dc1
        __asm _emit 0x74
        __asm _emit 0x0b
        movzx eax, word ptr [esi + ecx*4 + 2]
        sub dword ptr [ebx + 1af40h], eax
        cmp dword ptr [ebx + 18f8h], 2
        ; Exact mapped bytes 7C B1: jl 0x58849d7b
        __asm _emit 0x7c
        __asm _emit 0xb1
        mov esi, dword ptr [ebp + 0ch]
        xor ecx, ecx
        mov dword ptr [ebp - 0ch], edx
        inc ecx
        mov dword ptr [esi + 18h], edx
        mov eax, dword ptr [ebx + 18f8h]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        ; Exact mapped bytes EB 0F: jmp 0x58849df4
        __asm _emit 0xeb
        __asm _emit 0x0f
        push esi
        push edi
        push ebx
        ; Exact mapped bytes E8 40 1C 00 00: call 0x5884ba2d
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor ecx, ecx
        dec esi
        inc ecx
        cmp esi, ecx
        ; Exact mapped bytes 7D ED: jge 0x58849de5
        __asm _emit 0x7d
        __asm _emit 0xed
        mov eax, dword ptr [ebx + 18f8h]
        mov edi, dword ptr [ebx + 1008h]
        push ecx
        push dword ptr [ebp - 8]
        mov eax, dword ptr [ebx + eax*4 + 1004h]
        mov dword ptr [ebx + 1008h], eax
        dec dword ptr [ebx + 18f8h]
        push ebx
        ; Exact mapped bytes E8 0C 1C 00 00: call 0x5884ba2d
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx + 1008h]
        dec dword ptr [ebx + 18fch]
        mov eax, dword ptr [ebx + 18fch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebx + eax*4 + 1004h], edi
        dec dword ptr [ebx + 18fch]
        mov eax, dword ptr [ebx + 18fch]
        mov dword ptr [ebx + eax*4 + 1004h], esi
        ; Exact mapped bytes 66 8B 04 B1: mov ax, word ptr [ecx + esi*4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xb1
        ; Exact mapped bytes 66 03 04 B9: add ax, word ptr [ecx + edi*4]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0xb9
        ; Exact mapped bytes 66 89 04 91: mov word ptr [ecx + edx*4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x91
        mov dl, byte ptr [ebx + edi + 1900h]
        mov cl, byte ptr [ebx + esi + 1900h]
        cmp dl, cl
        movzx eax, dl
        mov edx, dword ptr [ebp - 4]
        movzx ebx, cl
        mov ecx, dword ptr [ebp - 8]
        cmovae ebx, eax
        mov eax, dword ptr [ebp + 8]
        inc bl
        mov byte ptr [eax + edx + 1900h], bl
        mov ebx, dword ptr [ebp + 8]
        movzx eax, dx
        ; Exact mapped bytes 66 89 44 B1 02: mov word ptr [ecx + esi*4 + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xb1
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 44 B9 02: mov word ptr [ecx + edi*4 + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xb9
        __asm _emit 0x02
        xor eax, eax
        inc eax
        mov dword ptr [ebx + 1008h], edx
        push eax
        push ecx
        inc edx
        push ebx
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes E8 7E 1B 00 00: call 0x5884ba2d
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        cmp dword ptr [ebx + 18f8h], 2
        push 1
        pop ecx
        ; Exact mapped bytes 0F 8D 36 FF FF FF: jge 0x58849df8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec dword ptr [ebx + 18fch]
        mov ecx, dword ptr [ebx + 18fch]
        push dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebx + 1008h]
        push ebx
        mov dword ptr [ebx + ecx*4 + 1004h], eax
        ; Exact mapped bytes E8 7A 10 00 00: call 0x5884af5e
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 0ch]
        push dword ptr [ebp - 8]
        push ebx
        ; Exact mapped bytes E8 7E 12 00 00: call 0x5884b16e
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
