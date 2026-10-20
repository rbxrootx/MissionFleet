// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861119 .. +0x150 bytes.
extern "C" __declspec(naked) void FUN_58861119_58861119() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        mov esi, ecx
        lea edx, [esi + 2ch]
        test edx, edx
        ; Exact mapped bytes 75 29: jne 0x58861155
        __asm _emit 0x75
        __asm _emit 0x29
        xor ebx, ebx
        mov dword ptr [esi + 0ch], 0ch
        ; Exact mapped bytes 66 89 5E 14: mov word ptr [esi + 0x14], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x14
        mov dword ptr [esi + 28h], ebx
        xor al, al
        mov byte ptr [esi + 24h], bl
        mov dword ptr [esi + 20h], ebx
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [esi + 18h], ebx
        mov byte ptr [esi + 16h], bl
        mov dword ptr [esi + 10h], ebx
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x58861265
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 8
        xor eax, eax
        mov edi, edx
        pop ecx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [esi + 8]
        mov edi, eax
        mov ch, byte ptr [eax]
        mov byte ptr [ebp - 2], ch
        mov cl, ch
        cmp ch, 5eh
        ; Exact mapped bytes 75 08: jne 0x58861178
        __asm _emit 0x75
        __asm _emit 0x08
        inc eax
        mov edi, eax
        mov dword ptr [esi + 8], eax
        mov cl, byte ptr [edi]
        cmp cl, 5dh
        ; Exact mapped bytes 75 0A: jne 0x58861187
        __asm _emit 0x75
        __asm _emit 0x0a
        lea edi, [eax + 1]
        mov dword ptr [esi + 8], edi
        or byte ptr [esi + 37h], 20h
        xor ebx, ebx
        mov eax, edi
        cmp byte ptr [edi], 5dh
        mov dword ptr [ebp - 8], ebx
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x58861237
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [edi]
        mov ecx, edi
        test dl, dl
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x5886122f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dl, 2dh
        ; Exact mapped bytes 75 6A: jne 0x58861212
        __asm _emit 0x75
        __asm _emit 0x6a
        lea eax, [ecx - 1]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 62: je 0x58861212
        __asm _emit 0x74
        __asm _emit 0x62
        cmp ecx, edi
        ; Exact mapped bytes 74 5E: je 0x58861212
        __asm _emit 0x74
        __asm _emit 0x5e
        lea eax, [ecx + 1]
        mov dword ptr [ebp - 14h], eax
        mov al, byte ptr [eax]
        mov byte ptr [ebp - 1], al
        cmp al, 5dh
        ; Exact mapped bytes 74 4F: je 0x58861212
        __asm _emit 0x74
        __asm _emit 0x4f
        mov cl, byte ptr [ecx - 1]
        mov ch, byte ptr [ebp - 1]
        mov edx, dword ptr [ebp - 14h]
        cmp cl, ch
        mov dword ptr [ebp - 8], edx
        movzx eax, al
        movzx edx, cl
        cmovbe edx, eax
        movzx eax, cl
        inc dl
        cmp cl, ch
        mov dword ptr [ebp - 14h], edx
        movzx edx, ch
        cmovbe edx, eax
        mov dword ptr [ebp - 0ch], edx
        mov byte ptr [ebp - 10h], dl
        cmp dl, byte ptr [ebp - 14h]
        ; Exact mapped bytes 74 26: je 0x5886121b
        __asm _emit 0x74
        __asm _emit 0x26
        push dword ptr [ebp - 10h]
        lea ecx, [esi + 2ch]
        ; Exact mapped bytes E8 69 00 00 00: call 0x58861269
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        inc al
        mov dword ptr [ebp - 0ch], eax
        mov byte ptr [ebp - 10h], al
        cmp al, byte ptr [ebp - 14h]
        ; Exact mapped bytes 75 E5: jne 0x588611f5
        __asm _emit 0x75
        __asm _emit 0xe5
        ; Exact mapped bytes EB 09: jmp 0x5886121b
        __asm _emit 0xeb
        __asm _emit 0x09
        push edx
        lea ecx, [esi + 2ch]
        ; Exact mapped bytes E8 4E 00 00 00: call 0x58861269
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        inc eax
        mov ecx, eax
        mov dword ptr [esi + 8], eax
        mov dl, byte ptr [ecx]
        cmp dl, 5dh
        ; Exact mapped bytes 0F 85 6C FF FF FF: jne 0x5886119b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ch, byte ptr [ebp - 2]
        lea edx, [esi + 2ch]
        xor ebx, ebx
        cmp byte ptr [eax], 0
        pop edi
        ; Exact mapped bytes 75 12: jne 0x5886124f
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 66 C7 46 14 00 00: mov word ptr [esi + 0x14], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0ch], 16h
        ; Exact mapped bytes E9 EA FE FF FF: jmp 0x58861139
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ch, 5eh
        ; Exact mapped bytes 75 0C: jne 0x58861260
        __asm _emit 0x75
        __asm _emit 0x0c
        lea eax, [edx + 20h]
        ; Exact mapped bytes EB 03: jmp 0x5886125c
        __asm _emit 0xeb
        __asm _emit 0x03
        not byte ptr [edx]
        inc edx
        cmp edx, eax
        ; Exact mapped bytes 75 F9: jne 0x58861259
        __asm _emit 0x75
        __asm _emit 0xf9
        inc dword ptr [esi + 8]
        mov al, 1
        pop esi
        pop ebx
        leave
        ret
    }
}
