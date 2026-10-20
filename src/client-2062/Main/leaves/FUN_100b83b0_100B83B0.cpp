// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B83B0 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_100b83b0_100B83B0() {
    __asm {
        ; Exact mapped bytes 66 8B 81 C2 00 00 00: mov ax, word ptr [ecx + 0xc2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes 66 3D 0C 00: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes 75 36: jne 0x100b83f5
        __asm _emit 0x75
        __asm _emit 0x36
        mov al, byte ptr [esp + 0ch]
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        and al, 1
        add ecx, 8ch
        mov dl, al
        lea esi, [edx + edx]
        mov edx, 3
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 8B 78 24: mov di, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x24
        and edi, 0fffdh
        or edi, esi
        dec edx
        ; Exact mapped bytes 66 89 78 24: mov word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 75 E8: jne 0x100b83d8
        __asm _emit 0x75
        __asm _emit 0xe8
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 0B 00: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 75 36: jne 0x100b8431
        __asm _emit 0x75
        __asm _emit 0x36
        mov al, byte ptr [esp + 0ch]
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        and al, 1
        add ecx, 8ch
        mov dl, al
        lea esi, [edx + edx]
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 8B 78 24: mov di, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x24
        and edi, 0fffdh
        or edi, esi
        dec edx
        ; Exact mapped bytes 66 89 78 24: mov word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 75 E8: jne 0x100b8414
        __asm _emit 0x75
        __asm _emit 0xe8
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 0A 00: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 75 31: jne 0x100b8468
        __asm _emit 0x75
        __asm _emit 0x31
        mov al, byte ptr [esp + 0ch]
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        and al, 1
        add ecx, 8ch
        mov dl, al
        lea esi, [edx + edx]
        mov edx, 4
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 8B 78 24: mov di, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x24
        and edi, 0fffdh
        or edi, esi
        dec edx
        ; Exact mapped bytes 66 89 78 24: mov word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x24
        ; Exact mapped bytes 75 E8: jne 0x100b8450
        __asm _emit 0x75
        __asm _emit 0xe8
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
