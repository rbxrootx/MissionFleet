// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885CE60 .. +0x128 bytes.
extern "C" __declspec(naked) void FUN_5885ce60() {
    __asm {
        mov eax, dword ptr [ecx + 0b8h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 0bch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 0b8h]
        xor eax, eax
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0c8h]
        push esi
        mov esi, 0fffeh
        ; Exact mapped bytes 66 21 72 24: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 0cch]
        ; Exact mapped bytes 66 21 72 24: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 0c8h]
        push edi
        mov edi, 24h
        mov dword ptr [edx + 50h], edi
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [edx + 50h], edi
        mov edx, dword ptr [ecx + 0c0h]
        mov esi, 1
        ; Exact mapped bytes 66 09 72 24: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes 66 09 72 24: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes 66 09 72 24: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 0d4h]
        ; Exact mapped bytes 66 09 72 24: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [edx + 50h], edi
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [edx + 50h], edi
        mov edx, dword ptr [ecx + 0e8h]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 7A 24: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7a
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0f0h]
        ; Exact mapped bytes 66 21 7A 24: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7a
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0ech]
        ; Exact mapped bytes 66 09 72 24: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0f4h]
        ; Exact mapped bytes 66 09 72 24: or word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0d8h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0e0h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [ecx + 0e4h]
        pop edi
        mov dword ptr [ecx + 50h], eax
        pop esi
        ret
    }
}
