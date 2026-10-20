// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0900 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_587b0900_587B0900() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 16bch]
        cmp eax, 8
        ; Exact mapped bytes 7E 22: jle 0x587b0932
        __asm _emit 0x7e
        __asm _emit 0x22
        mov ecx, dword ptr [esi + 14h]
        mov edx, dword ptr [esi + 8]
        movzx eax, byte ptr [esi + 16b8h]
        mov byte ptr [edx + ecx], al
        inc dword ptr [esi + 14h]
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        movzx eax, byte ptr [esi + 16b9h]
        ; Exact mapped bytes EB 10: jmp 0x587b0942
        __asm _emit 0xeb
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7E 12: jle 0x587b0948
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 14h]
        mov al, byte ptr [esi + 16b8h]
        mov byte ptr [edx + ecx], al
        inc dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 16bch]
        dec eax
        and eax, 7
        inc eax
        mov dword ptr [esi + 16c0h], eax
        xor eax, eax
        ; Exact mapped bytes 66 89 86 B8 16 00 00: mov word ptr [esi + 0x16b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 16bch], eax
        pop esi
        ret
    }
}
