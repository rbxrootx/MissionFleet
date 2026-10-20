// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100482C0 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_100482c0_100482C0() {
    __asm {
        mov eax, dword ptr [ecx + 78h]
        push esi
        test eax, eax
        ; Exact mapped bytes 75 3F: jne 0x10048307
        __asm _emit 0x75
        __asm _emit 0x3f
        mov al, byte ptr [ecx + 61h]
        cmp al, 1
        ; Exact mapped bytes 75 1A: jne 0x100482e9
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ecx + 64h]
        mov eax, dword ptr [ecx + 6ch]
        sub eax, edx
        test eax, eax
        ; Exact mapped bytes 7E 59: jle 0x10048334
        __asm _emit 0x7e
        __asm _emit 0x59
        add eax, dword ptr [ecx + 4]
        cmp eax, edx
        ; Exact mapped bytes 7E 02: jle 0x100482e4
        __asm _emit 0x7e
        __asm _emit 0x02
        mov eax, edx
        mov dword ptr [ecx + 50h], eax
        pop esi
        ret
        cmp al, 2
        ; Exact mapped bytes 75 47: jne 0x10048334
        __asm _emit 0x75
        __asm _emit 0x47
        mov edx, dword ptr [ecx + 68h]
        mov eax, dword ptr [ecx + 70h]
        sub eax, edx
        test eax, eax
        ; Exact mapped bytes 7E 3B: jle 0x10048334
        __asm _emit 0x7e
        __asm _emit 0x3b
        add eax, dword ptr [ecx + 8]
        cmp eax, edx
        ; Exact mapped bytes 7E 02: jle 0x10048302
        __asm _emit 0x7e
        __asm _emit 0x02
        mov eax, edx
        mov dword ptr [ecx + 54h], eax
        pop esi
        ret
        mov dl, byte ptr [ecx + 61h]
        cmp dl, 1
        ; Exact mapped bytes 75 11: jne 0x10048320
        __asm _emit 0x75
        __asm _emit 0x11
        mov esi, dword ptr [ecx + 4]
        mov edx, dword ptr [ecx + 7ch]
        add esi, eax
        cmp esi, edx
        ; Exact mapped bytes 7C 19: jl 0x10048334
        __asm _emit 0x7c
        __asm _emit 0x19
        mov dword ptr [ecx + 50h], edx
        pop esi
        ret
        cmp dl, 2
        ; Exact mapped bytes 75 0F: jne 0x10048334
        __asm _emit 0x75
        __asm _emit 0x0f
        mov esi, dword ptr [ecx + 8]
        mov edx, dword ptr [ecx + 7ch]
        add esi, eax
        cmp esi, edx
        ; Exact mapped bytes 7C 03: jl 0x10048334
        __asm _emit 0x7c
        __asm _emit 0x03
        mov dword ptr [ecx + 54h], edx
        pop esi
        ret
    }
}
