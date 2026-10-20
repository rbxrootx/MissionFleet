// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F8490 .. +0x24F bytes.
extern "C" __declspec(naked) void FUN_100f8490_100F8490() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 90h
        test eax, eax
        push ebx
        ; Exact mapped bytes 8B 1D 88 51 17 10: mov ebx, dword ptr [0x10175188]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push ebp
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes 75 24: jne 0x100f84ce
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [esi + 124h]
        mov edi, dword ptr [esp + 0b0h]
        push 505050h
        push edi
        mov dword ptr [eax + 60h], 505050h
        push 101ac990h
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x100f85c1
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 400h], 1
        ; Exact mapped bytes 66 8B 15 8C C9 1A 10: mov dx, word ptr [0x101ac98c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 54 24 14: mov word ptr [esp + 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        xor edx, edx
        mov dword ptr [esp + 17h], edx
        ; Exact mapped bytes 8B 0D 88 C9 1A 10: mov ecx, dword ptr [0x101ac988]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [esp + 1bh], edx
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 8A 0D 8E C9 1A 10: mov cl, byte ptr [0x101ac98e]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x8e
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        mov byte ptr [esp + 1fh], dl
        ; Exact mapped bytes 66 8B 15 84 C9 1A 10: mov dx, word ptr [0x101ac984]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        mov byte ptr [esp + 16h], cl
        ; Exact mapped bytes 8B 0D 80 C9 1A 10: mov ecx, dword ptr [0x101ac980]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 54 24 24: mov word ptr [esp + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        xor edx, edx
        mov dword ptr [esp + 20h], ecx
        ; Exact mapped bytes 8A 0D 86 C9 1A 10: mov cl, byte ptr [0x101ac986]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x86
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [esp + 27h], edx
        mov dword ptr [esp + 2bh], edx
        mov byte ptr [esp + 26h], cl
        ; Exact mapped bytes 8B 0D 78 C9 1A 10: mov ecx, dword ptr [0x101ac978]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        mov byte ptr [esp + 2fh], dl
        ; Exact mapped bytes 66 8B 15 7C C9 1A 10: mov dx, word ptr [0x101ac97c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [esp + 30h], ecx
        ; Exact mapped bytes 8A 0D 7E C9 1A 10: mov cl, byte ptr [0x101ac97e]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x7e
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 54 24 34: mov word ptr [esp + 0x34], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        xor edx, edx
        mov byte ptr [esp + 36h], cl
        ; Exact mapped bytes 8B 0D 70 C9 1A 10: mov ecx, dword ptr [0x101ac970]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [esp + 37h], edx
        mov dword ptr [esp + 3bh], edx
        push eax
        mov eax, dword ptr [esp + 0b8h]
        mov byte ptr [esp + 43h], dl
        ; Exact mapped bytes 66 8B 15 74 C9 1A 10: mov dx, word ptr [0x101ac974]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [esp + 44h], ecx
        ; Exact mapped bytes 8A 0D 76 C9 1A 10: mov cl, byte ptr [0x101ac976]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x76
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 54 24 48: mov word ptr [esp + 0x48], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        xor edx, edx
        mov byte ptr [esp + 4ah], cl
        mov dword ptr [esp + 4bh], edx
        shl eax, 4
        mov dword ptr [esp + 4fh], edx
        lea ecx, [esp + eax + 4]
        mov byte ptr [esp + 53h], dl
        push ecx
        lea edx, [esp + 58h]
        push 101ac964h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edi, dword ptr [esp + 0c0h]
        add esp, 10h
        lea eax, [esp + 50h]
        push 0ffffffh
        push edi
        push eax
        mov ecx, dword ptr [esi + 124h]
        ; Exact mapped bytes E8 64 BA 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0d0ch]
        mov eax, dword ptr [edx + 0b4ch]
        mov edx, edi
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        shr ecx, 0ah
        and ecx, 1fh
        sub edx, ecx
        cmp edx, 1
        ; Exact mapped bytes 0F 8E DD 00 00 00: jle 0x100f86d2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 0a8h]
        test ebp, ebp
        ; Exact mapped bytes 75 10: jne 0x100f8610
        __asm _emit 0x75
        __asm _emit 0x10
        push 505050h
        push edi
        push 101ac958h
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x100f86c7
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dword ptr [esi + 400h], 1
        ; Exact mapped bytes 8A 0D 54 C9 1A 10: mov cl, byte ptr [0x101ac954]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes A1 50 C9 1A 10: mov eax, dword ptr [0x101ac950]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [esp + 15h], edx
        mov byte ptr [esp + 14h], cl
        ; Exact mapped bytes 8A 0D 4C C9 1A 10: mov cl, byte ptr [0x101ac94c]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [esp + 19h], edx
        ; Exact mapped bytes 66 89 54 24 1D: mov word ptr [esp + 0x1d], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1d
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes A1 48 C9 1A 10: mov eax, dword ptr [0x101ac948]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0xc9
        __asm _emit 0x1a
        __asm _emit 0x10
        mov byte ptr [esp + 1fh], dl
        mov dword ptr [esp + 25h], edx
        mov byte ptr [esp + 24h], cl
        mov dword ptr [esp + 29h], edx
        xor ecx, ecx
        ; Exact mapped bytes 66 89 54 24 2D: mov word ptr [esp + 0x2d], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2d
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes A0 48 CE 1A 10: mov al, byte ptr [0x101ace48]
        __asm _emit 0xa0
        __asm _emit 0x48
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [esp + 31h], ecx
        mov byte ptr [esp + 2fh], dl
        mov dword ptr [esp + 35h], ecx
        mov dword ptr [esp + 41h], edx
        mov byte ptr [esp + 30h], al
        mov byte ptr [esp + 40h], al
        mov eax, dword ptr [esp + 0b8h]
        mov dword ptr [esp + 39h], ecx
        mov dword ptr [esp + 45h], edx
        ; Exact mapped bytes 66 89 4C 24 3D: mov word ptr [esp + 0x3d], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3d
        mov dword ptr [esp + 49h], edx
        shl eax, 4
        mov byte ptr [esp + 3fh], cl
        ; Exact mapped bytes 66 89 54 24 4D: mov word ptr [esp + 0x4d], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4d
        lea ecx, [esp + eax + 10h]
        mov byte ptr [esp + 4fh], dl
        push ebp
        push ecx
        lea edx, [esp + 58h]
        push 101ac938h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 10h
        lea eax, [esp + 50h]
        push 0ffffffh
        push edi
        push eax
        mov ecx, dword ptr [esi + 128h]
        ; Exact mapped bytes E8 5E B9 00 00: call 0x10104030
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 90h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
