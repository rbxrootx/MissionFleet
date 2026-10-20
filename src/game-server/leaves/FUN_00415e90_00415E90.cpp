// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415E90 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_00415e90_00415E90() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 77 13: ja 0x415eb2
        __asm _emit 0x77
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 72 07: jb 0x415eb2
        __asm _emit 0x72
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x415eb4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ret
    }
}
