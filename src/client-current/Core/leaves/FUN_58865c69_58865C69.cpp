// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865C69 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58865c69_58865C69() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x58865c7a
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        pop ebp
        ret
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 0D: jne 0x58865c8e
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        mov dword ptr [ecx + 8], eax
        xor eax, eax
        pop ebp
        ret
    }
}
