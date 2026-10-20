// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1016C2D0 .. +0x1DC bytes.
extern "C" __declspec(naked) void FUN_1016c2d0_1016C2D0() {
    __asm {
        sub esp, 10h
        push ebx
        xor eax, eax
        push esi
        mov esi, dword ptr [esp + 20h]
        mov dword ptr [esp + 8], eax
        push edi
        mov dl, byte ptr [esi]
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], eax
        cmp dl, 30h
        mov edi, ecx
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 0F 8C 52 01 00 00: jl 0x1016c44b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dl, 39h
        ; Exact mapped bytes 0F 8F 49 01 00 00: jg 0x1016c44b
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor al, al
        xor bl, bl
        xor ecx, ecx
        ; Exact mapped bytes 66 C7 44 24 0C 02 00: mov word ptr [esp + 0xc], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [esp + 10h], al
        mov byte ptr [esp + 11h], bl
        mov byte ptr [esp + 12h], bl
        mov byte ptr [esp + 13h], bl
        ; Exact mapped bytes 66 89 4C 24 0E: mov word ptr [esp + 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0e
        ; Exact mapped bytes EB 04: jmp 0x1016c32a
        __asm _emit 0xeb
        __asm _emit 0x04
        mov bl, byte ptr [esp + 11h]
        cmp dl, 39h
        ; Exact mapped bytes 7F 1C: jg 0x1016c34b
        __asm _emit 0x7f
        __asm _emit 0x1c
        mov bl, 0ah
        imul bl
        add al, dl
        mov dl, byte ptr [ecx + esi + 1]
        sub al, 30h
        inc ecx
        cmp dl, 30h
        ; Exact mapped bytes 7D E5: jge 0x1016c326
        __asm _emit 0x7d
        __asm _emit 0xe5
        mov bl, byte ptr [esp + 11h]
        mov byte ptr [esp + 10h], al
        ; Exact mapped bytes EB 04: jmp 0x1016c34f
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [esp + 10h], al
        cmp byte ptr [ecx + esi], 2eh
        ; Exact mapped bytes 74 0B: je 0x1016c360
        __asm _emit 0x74
        __asm _emit 0x0b
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dl, byte ptr [ecx + esi + 1]
        inc ecx
        cmp dl, 30h
        ; Exact mapped bytes 7C 1F: jl 0x1016c389
        __asm _emit 0x7c
        __asm _emit 0x1f
        cmp dl, 39h
        ; Exact mapped bytes 7F 16: jg 0x1016c385
        __asm _emit 0x7f
        __asm _emit 0x16
        mov al, bl
        mov bl, 0ah
        imul bl
        add al, dl
        mov dl, byte ptr [ecx + esi + 1]
        sub al, 30h
        inc ecx
        cmp dl, 30h
        mov bl, al
        ; Exact mapped bytes 7D E5: jge 0x1016c36a
        __asm _emit 0x7d
        __asm _emit 0xe5
        mov byte ptr [esp + 11h], bl
        cmp byte ptr [ecx + esi], 2eh
        ; Exact mapped bytes 74 0B: je 0x1016c39a
        __asm _emit 0x74
        __asm _emit 0x0b
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dl, byte ptr [ecx + esi + 1]
        inc ecx
        cmp dl, 30h
        ; Exact mapped bytes 7C 1F: jl 0x1016c3c3
        __asm _emit 0x7c
        __asm _emit 0x1f
        cmp dl, 39h
        ; Exact mapped bytes 7F 1A: jg 0x1016c3c3
        __asm _emit 0x7f
        __asm _emit 0x1a
        mov al, byte ptr [esp + 12h]
        mov bl, 0ah
        imul bl
        add al, dl
        mov dl, byte ptr [ecx + esi + 1]
        sub al, 30h
        inc ecx
        cmp dl, 30h
        mov byte ptr [esp + 12h], al
        ; Exact mapped bytes 7D E1: jge 0x1016c3a4
        __asm _emit 0x7d
        __asm _emit 0xe1
        cmp byte ptr [ecx + esi], 2eh
        ; Exact mapped bytes 74 0B: je 0x1016c3d4
        __asm _emit 0x74
        __asm _emit 0x0b
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dl, byte ptr [ecx + esi + 1]
        inc ecx
        cmp dl, 30h
        ; Exact mapped bytes 7C 1F: jl 0x1016c3fd
        __asm _emit 0x7c
        __asm _emit 0x1f
        cmp dl, 39h
        ; Exact mapped bytes 7F 1A: jg 0x1016c3fd
        __asm _emit 0x7f
        __asm _emit 0x1a
        mov al, byte ptr [esp + 13h]
        mov bl, 0ah
        imul bl
        add al, dl
        mov dl, byte ptr [ecx + esi + 1]
        sub al, 30h
        inc ecx
        cmp dl, 30h
        mov byte ptr [esp + 13h], al
        ; Exact mapped bytes 7D E1: jge 0x1016c3de
        __asm _emit 0x7d
        __asm _emit 0xe1
        cmp byte ptr [ecx + esi], 3ah
        ; Exact mapped bytes 74 0B: je 0x1016c40e
        __asm _emit 0x74
        __asm _emit 0x0b
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov al, byte ptr [ecx + esi + 1]
        lea ecx, [ecx + esi + 1]
        cmp al, 30h
        ; Exact mapped bytes 7C 20: jl 0x1016c43a
        __asm _emit 0x7c
        __asm _emit 0x20
        cmp al, 39h
        ; Exact mapped bytes 7F 1C: jg 0x1016c43a
        __asm _emit 0x7f
        __asm _emit 0x1c
        mov eax, dword ptr [esp + 0eh]
        inc ecx
        lea edx, [eax + eax*4]
        ; Exact mapped bytes 66 0F BE 41 FF: movsx ax, byte ptr [ecx - 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x41
        __asm _emit 0xff
        lea edx, [eax + edx*2 - 30h]
        mov al, byte ptr [ecx]
        cmp al, 30h
        ; Exact mapped bytes 66 89 54 24 0E: mov word ptr [esp + 0xe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0e
        ; Exact mapped bytes 7D E0: jge 0x1016c41a
        __asm _emit 0x7d
        __asm _emit 0xe0
        xor eax, eax
        mov al, byte ptr [esp + 0fh]
        mov ah, byte ptr [esp + 0eh]
        ; Exact mapped bytes 66 89 44 24 0E: mov word ptr [esp + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0e
        ; Exact mapped bytes EB 45: jmp 0x1016c490
        __asm _emit 0xeb
        __asm _emit 0x45
        push esi
        ; Exact mapped bytes 66 C7 44 24 10 02 00: mov word ptr [esp + 0x10], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 C8 51 17 10: call dword ptr [0x101751c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, -1
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 2E: jne 0x1016c490
        __asm _emit 0x75
        __asm _emit 0x2e
        push esi
        ; Exact mapped bytes FF 15 C4 51 17 10: call dword ptr [0x101751c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x1016c476
        __asm _emit 0x75
        __asm _emit 0x09
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        xor ecx, ecx
        mov eax, dword ptr [edx]
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [esp + 28h]
        mov cl, ah
        mov ch, al
        ; Exact mapped bytes 66 89 4C 24 0E: mov word ptr [esp + 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 20h]
        lea edx, [esp + 0ch]
        push 10h
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 2D FD FF FF: call 0x1016c1d0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
