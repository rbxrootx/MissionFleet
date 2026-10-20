// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0880 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_587b0880_587B0880() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 16bch]
        cmp eax, 10h
        ; Exact mapped bytes 75 37: jne 0x587b08c7
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, dword ptr [esi + 14h]
        mov edx, dword ptr [esi + 8]
        movzx eax, byte ptr [esi + 16b8h]
        mov byte ptr [edx + ecx], al
        inc dword ptr [esi + 14h]
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        movzx eax, byte ptr [esi + 16b9h]
        mov byte ptr [edx + ecx], al
        inc dword ptr [esi + 14h]
        xor eax, eax
        mov dword ptr [esi + 16bch], eax
        ; Exact mapped bytes 66 89 86 B8 16 00 00: mov word ptr [esi + 0x16b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
        cmp eax, 8
        ; Exact mapped bytes 7C 27: jl 0x587b08f3
        __asm _emit 0x7c
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 14h]
        mov edx, dword ptr [esi + 8]
        mov al, byte ptr [esi + 16b8h]
        mov byte ptr [edx + ecx], al
        movzx eax, byte ptr [esi + 16b9h]
        inc dword ptr [esi + 14h]
        add dword ptr [esi + 16bch], -8
        ; Exact mapped bytes 66 89 86 B8 16 00 00: mov word ptr [esi + 0x16b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
