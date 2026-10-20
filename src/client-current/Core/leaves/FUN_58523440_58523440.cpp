// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58523440 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58523440_58523440() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58523462
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0ah
        ; Exact mapped bytes 7D 12: jge 0x5852347a
        __asm _emit 0x7d
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [edx + ecx*4 + 24h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB DF: jmp 0x58523459
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
