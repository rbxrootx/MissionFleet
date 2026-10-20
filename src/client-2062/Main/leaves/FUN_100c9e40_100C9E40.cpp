// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C9E40 .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_100c9e40_100C9E40() {
    __asm {
        mov eax, dword ptr [ecx + 88h]
        push ebx
        mov edx, dword ptr [ecx + 84h]
        push esi
        xor esi, esi
        push edi
        ; Exact mapped bytes 66 8B 70 0C: mov si, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0c
        mov edi, esi
        xor esi, esi
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        xor edi, 0aah
        mov eax, edx
        xor esi, 0aah
        add eax, edi
        add esi, eax
        mov eax, dword ptr [ecx + 68h]
        mov dword ptr [eax + 64h], edx
        mov edi, dword ptr [ecx + 88h]
        mov edx, dword ptr [ecx + 84h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 47 08: mov ax, word ptr [edi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x08
        xor eax, 0aah
        cmp eax, edx
        ; Exact mapped bytes 7E 34: jle 0x100c9ec4
        __asm _emit 0x7e
        __asm _emit 0x34
        sub eax, edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 57 50: mov dx, word ptr [edi + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x50
        mov ebx, eax
        xor edx, 0aah
        mov eax, 10624dd3h
        imul edx, esi
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [ecx + 74h]
        mov dword ptr [eax + 64h], edx
        lea edx, [ebx + ebx*4]
        shl edx, 1
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x100c9f89
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub edx, eax
        mov eax, 10624dd3h
        mov ebx, edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 57 50: mov dx, word ptr [edi + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x50
        xor edx, 0aah
        imul edx, esi
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [ecx + 74h]
        mov dword ptr [eax + 64h], edx
        mov edx, dword ptr [ecx + 88h]
        mov edx, dword ptr [edx + 10h]
        mov eax, edx
        and eax, 0fh
        cmp eax, 2
        ; Exact mapped bytes 75 1E: jne 0x100c9f1f
        __asm _emit 0x75
        __asm _emit 0x1e
        xor edx, 0fffffaafh
        mov eax, 0cccccccdh
        shr edx, 4
        and edx, 0ffh
        mul edx
        shr edx, 2
        add edx, 5
        ; Exact mapped bytes EB 67: jmp 0x100c9f86
        __asm _emit 0xeb
        __asm _emit 0x67
        cmp eax, 1
        ; Exact mapped bytes 75 1E: jne 0x100c9f42
        __asm _emit 0x75
        __asm _emit 0x1e
        xor edx, 0fffffaafh
        mov eax, 0aaaaaaabh
        shr edx, 4
        and edx, 0ffh
        mul edx
        shr edx, 2
        add edx, 0ch
        ; Exact mapped bytes EB 44: jmp 0x100c9f86
        __asm _emit 0xeb
        __asm _emit 0x44
        cmp eax, 3
        ; Exact mapped bytes 75 0E: jne 0x100c9f55
        __asm _emit 0x75
        __asm _emit 0x0e
        xor edx, 0fffffabfh
        shr edx, 5
        and edx, 7fh
        ; Exact mapped bytes EB 31: jmp 0x100c9f86
        __asm _emit 0xeb
        __asm _emit 0x31
        cmp eax, 4
        ; Exact mapped bytes 75 11: jne 0x100c9f6b
        __asm _emit 0x75
        __asm _emit 0x11
        xor edx, 0fffffabfh
        shr edx, 5
        and edx, 7fh
        add edx, 0ah
        ; Exact mapped bytes EB 1B: jmp 0x100c9f86
        __asm _emit 0xeb
        __asm _emit 0x1b
        xor edx, 0fffffaafh
        mov eax, 0aaaaaaabh
        shr edx, 4
        and edx, 0ffh
        mul edx
        shr edx, 1
        add edx, 2
        imul edx, ebx
        mov eax, dword ptr [ecx + 78h]
        pop edi
        pop esi
        pop ebx
        mov dword ptr [eax + 64h], edx
        mov edx, dword ptr [ecx + 88h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        mov edx, dword ptr [ecx + 84h]
        xor eax, 0aah
        cmp eax, edx
        ; Exact mapped bytes 74 0B: je 0x100c9fb8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 7ch]
        mov dword ptr [ecx + 50h], 1
        ret
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [edx + 50h], 0
        ret
    }
}
