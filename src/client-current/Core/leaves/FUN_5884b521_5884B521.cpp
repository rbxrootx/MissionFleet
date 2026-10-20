// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884B521 .. +0x1D6 bytes.
extern "C" __declspec(naked) void FUN_5884b521_5884B521() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov eax, dword ptr [edi + 6af94h]
        lea esi, [edi + 1af70h]
        mov ebx, dword ptr [edi + 6af80h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [edi + 6af84h]
        add esi, eax
        cmp eax, 7efah
        ; Exact mapped bytes 76 0A: jbe 0x5884b55b
        __asm _emit 0x76
        __asm _emit 0x0a
        add eax, 0ffff8106h
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 04: jmp 0x5884b55f
        __asm _emit 0xeb
        __asm _emit 0x04
        and dword ptr [ebp - 10h], 0
        push 588c24d0h
        push 1
        push edi
        ; Exact mapped bytes E8 24 E0 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 6af84h]
        lea eax, [edi + 1b072h]
        add eax, ecx
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov al, byte ptr [ebx + esi - 1]
        mov byte ptr [ebp + 0bh], al
        mov al, byte ptr [ebx + esi]
        mov byte ptr [ebp - 1], al
        mov eax, dword ptr [edi + 6af80h]
        cmp eax, dword ptr [edi + 6af9ch]
        ; Exact mapped bytes 72 04: jb 0x5884b59f
        __asm _emit 0x72
        __asm _emit 0x04
        shr dword ptr [ebp - 8], 2
        mov eax, dword ptr [edi + 6af70h]
        sub eax, 106h
        cmp eax, ecx
        push 588c24e0h
        sbb al, al
        inc al
        movzx eax, al
        push eax
        push edi
        ; Exact mapped bytes E8 D1 DF FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        add esp, 0ch
        cmp edx, dword ptr [edi + 6af84h]
        push 588c24f8h
        setb al
        movzx eax, al
        push eax
        push edi
        ; Exact mapped bytes E8 B3 DF FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        add esp, 0ch
        mov al, byte ptr [ebp - 1]
        lea ecx, [edi + edx]
        cmp byte ptr [ecx + ebx + 1af70h], al
        ; Exact mapped bytes 0F 85 D9 00 00 00: jne 0x5884b6cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp + 0bh]
        cmp byte ptr [ecx + ebx + 1af6fh], al
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x5884b6cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx + 1af70h]
        cmp al, byte ptr [esi]
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x5884b6cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx + 1af71h]
        cmp al, byte ptr [esi + 1]
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x5884b6cf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add esi, 2
        add ecx, 1af72h
        inc esi
        mov al, byte ptr [esi]
        cmp al, byte ptr [ecx + 1]
        ; Exact mapped bytes 75 3E: jne 0x5884b675
        __asm _emit 0x75
        __asm _emit 0x3e
        inc esi
        mov al, byte ptr [esi]
        cmp al, byte ptr [ecx + 2]
        ; Exact mapped bytes 75 36: jne 0x5884b675
        __asm _emit 0x75
        __asm _emit 0x36
        inc esi
        mov al, byte ptr [esi]
        cmp al, byte ptr [ecx + 3]
        ; Exact mapped bytes 75 2E: jne 0x5884b675
        __asm _emit 0x75
        __asm _emit 0x2e
        inc esi
        mov al, byte ptr [esi]
        cmp al, byte ptr [ecx + 4]
        ; Exact mapped bytes 75 26: jne 0x5884b675
        __asm _emit 0x75
        __asm _emit 0x26
        inc esi
        mov al, byte ptr [esi]
        cmp al, byte ptr [ecx + 5]
        ; Exact mapped bytes 75 1E: jne 0x5884b675
        __asm _emit 0x75
        __asm _emit 0x1e
        inc esi
        mov al, byte ptr [esi]
        cmp al, byte ptr [ecx + 6]
        ; Exact mapped bytes 75 16: jne 0x5884b675
        __asm _emit 0x75
        __asm _emit 0x16
        inc esi
        mov al, byte ptr [esi]
        cmp al, byte ptr [ecx + 7]
        ; Exact mapped bytes 75 0E: jne 0x5884b675
        __asm _emit 0x75
        __asm _emit 0x0e
        inc esi
        add ecx, 8
        mov al, byte ptr [esi]
        cmp al, byte ptr [ecx]
        ; Exact mapped bytes 75 04: jne 0x5884b675
        __asm _emit 0x75
        __asm _emit 0x04
        cmp esi, edx
        ; Exact mapped bytes 72 BA: jb 0x5884b62f
        __asm _emit 0x72
        __asm _emit 0xba
        mov eax, dword ptr [edi + 6af70h]
        add eax, 1af6fh
        add eax, edi
        cmp eax, esi
        push 588c2504h
        sbb al, al
        inc al
        movzx eax, al
        push eax
        push edi
        ; Exact mapped bytes E8 F9 DE FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        sub esi, ecx
        lea eax, [esi + 102h]
        lea esi, [ecx - 102h]
        cmp eax, ebx
        ; Exact mapped bytes 7E 1D: jle 0x5884b6cf
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov ebx, eax
        mov dword ptr [edi + 6af88h], edx
        cmp eax, dword ptr [edi + 6afa0h]
        ; Exact mapped bytes 7D 2C: jge 0x5884b6ee
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov cl, byte ptr [eax + esi - 1]
        mov al, byte ptr [eax + esi]
        mov byte ptr [ebp + 0bh], cl
        mov byte ptr [ebp - 1], al
        and edx, 7fffh
        mov edx, dword ptr [edi + edx*4 + 2af70h]
        mov dword ptr [ebp + 0ch], edx
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 76 0A: jbe 0x5884b6ee
        __asm _emit 0x76
        __asm _emit 0x0a
        sub dword ptr [ebp - 8], 1
        ; Exact mapped bytes 0F 85 D7 FE FF FF: jne 0x5884b5c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
