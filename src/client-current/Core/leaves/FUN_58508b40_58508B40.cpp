// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58508B40 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58508b40_58508B40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        or ecx, 0ffffffffh
        ; Exact mapped bytes F0 0F C1 08: lock xadd dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x08
        dec ecx
        ; Exact mapped bytes 75 05: jne 0x58508b5c
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 02: jmp 0x58508b5e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
