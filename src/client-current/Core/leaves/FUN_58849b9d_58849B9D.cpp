// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58849B9D .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58849b9d_58849B9D() {
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 0ch]
        xor ecx, ecx
        push esi
        mov esi, dword ptr [ebp + 8]
        mov eax, esi
        shr esi, 1
        and eax, 1
        or ecx, eax
        add ecx, ecx
        dec edx
        test edx, edx
        ; Exact mapped bytes 7F F0: jg 0x58849ba9
        __asm _emit 0x7f
        __asm _emit 0xf0
        shr ecx, 1
        mov eax, ecx
        pop esi
        pop ebp
        ret
    }
}
