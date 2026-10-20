// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007D1B0 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_1007d1b0_1007D1B0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push edi
        lea edx, [ecx + 1ach]
        mov esi, 4
        mov edi, dword ptr [eax]
        add eax, 4
        mov dword ptr [edx - 10h], edi
        mov edi, dword ptr [eax - 4]
        mov dword ptr [edx], edi
        add edx, 4
        dec esi
        ; Exact mapped bytes 75 ED: jne 0x1007d1c1
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [ecx + 198h]
        pop edi
        pop esi
        mov edx, dword ptr [eax + 0b5ch]
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x1007d1fd
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ecx + 124h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0fff1h
        or edx, 1
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 198h]
        mov edx, dword ptr [eax + 0b60h]
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x1007d224
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ecx + 128h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0fff1h
        or edx, 1
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 198h]
        mov edx, dword ptr [eax + 0b68h]
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x1007d24b
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ecx + 12ch]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0fff1h
        or edx, 1
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 198h]
        mov edx, dword ptr [eax + 0b64h]
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x1007d272
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ecx + 130h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        and edx, 0fff1h
        or edx, 1
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 134h]
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        and eax, 0fff1h
        or al, 1
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
