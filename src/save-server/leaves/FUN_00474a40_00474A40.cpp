// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474A40 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00474a40_00474A40() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        add eax, 0fh
        and al, 0f0h
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 8], 780h
        ; Exact mapped bytes 77 10: ja 0x474a67
        __asm _emit 0x77
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 0D 4C 02 68 00: mov dword ptr [0x68024c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x474a69
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ret
    }
}
