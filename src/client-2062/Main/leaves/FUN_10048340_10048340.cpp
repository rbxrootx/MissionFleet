// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10048340 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_10048340_10048340() {
    __asm {
        mov eax, dword ptr [ecx + 78h]
        push ebx
        push esi
        push edi
        test eax, eax
        ; Exact mapped bytes 75 6F: jne 0x100483b9
        __asm _emit 0x75
        __asm _emit 0x6f
        mov al, byte ptr [ecx + 61h]
        cmp al, 1
        ; Exact mapped bytes 75 34: jne 0x10048385
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ecx + 64h]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, eax
        test edx, edx
        ; Exact mapped bytes 0F 8E 95 00 00 00: jle 0x100483f6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 4]
        mov edi, dword ptr [ecx + 74h]
        mov ebx, eax
        sub ebx, esi
        add ebx, edx
        cmp ebx, edi
        ; Exact mapped bytes 7E 0B: jle 0x1004837c
        __asm _emit 0x7e
        __asm _emit 0x0b
        sub eax, edi
        pop edi
        add eax, edx
        pop esi
        mov dword ptr [ecx + 50h], eax
        pop ebx
        ret
        sub esi, edx
        pop edi
        mov dword ptr [ecx + 50h], esi
        pop esi
        pop ebx
        ret
        cmp al, 2
        ; Exact mapped bytes 75 6D: jne 0x100483f6
        __asm _emit 0x75
        __asm _emit 0x6d
        mov eax, dword ptr [ecx + 68h]
        mov edx, dword ptr [ecx + 70h]
        sub edx, eax
        test edx, edx
        ; Exact mapped bytes 7E 61: jle 0x100483f6
        __asm _emit 0x7e
        __asm _emit 0x61
        mov esi, dword ptr [ecx + 8]
        mov edi, dword ptr [ecx + 74h]
        mov ebx, eax
        sub ebx, esi
        add ebx, edx
        cmp ebx, edi
        ; Exact mapped bytes 7E 0B: jle 0x100483b0
        __asm _emit 0x7e
        __asm _emit 0x0b
        sub eax, edi
        pop edi
        add eax, edx
        pop esi
        mov dword ptr [ecx + 54h], eax
        pop ebx
        ret
        sub esi, edx
        pop edi
        mov dword ptr [ecx + 54h], esi
        pop esi
        pop ebx
        ret
        mov dl, byte ptr [ecx + 61h]
        cmp dl, 1
        ; Exact mapped bytes 75 1A: jne 0x100483db
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ecx + 4]
        mov esi, dword ptr [ecx + 6ch]
        mov edi, dword ptr [ecx + 74h]
        sub esi, edx
        add esi, eax
        cmp esi, edi
        ; Exact mapped bytes 7D 24: jge 0x100483f6
        __asm _emit 0x7d
        __asm _emit 0x24
        sub edx, eax
        pop edi
        pop esi
        mov dword ptr [ecx + 50h], edx
        pop ebx
        ret
        cmp dl, 2
        ; Exact mapped bytes 75 16: jne 0x100483f6
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ecx + 8]
        mov esi, dword ptr [ecx + 70h]
        mov edi, dword ptr [ecx + 74h]
        sub esi, edx
        add esi, eax
        cmp esi, edi
        ; Exact mapped bytes 7D 05: jge 0x100483f6
        __asm _emit 0x7d
        __asm _emit 0x05
        sub edx, eax
        mov dword ptr [ecx + 54h], edx
        pop edi
        pop esi
        pop ebx
        ret
    }
}
