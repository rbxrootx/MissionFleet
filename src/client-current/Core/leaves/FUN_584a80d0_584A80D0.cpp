// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A80D0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_584a80d0_584A80D0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 05: jne 0x584a80e0
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 0F: jmp 0x584a80ef
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 14h]
        sub eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, dword ptr [ebp + 8]
        cdq
        idiv ecx
        pop ebp
        ret
    }
}
