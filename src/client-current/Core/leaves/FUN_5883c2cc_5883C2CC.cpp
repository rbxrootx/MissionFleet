// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C2CC .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5883c2cc_5883C2CC() {
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 8]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x5883c2da
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop ebp
        ret
        push esi
        xor esi, esi
        ; Exact mapped bytes EB 0D: jmp 0x5883c2ec
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 0F BE C8: movsx ecx, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc8
        imul eax, esi, 1fh
        or ecx, 20h
        inc edx
        lea esi, [eax + ecx]
        mov al, byte ptr [edx]
        test al, al
        ; Exact mapped bytes 75 ED: jne 0x5883c2df
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}
