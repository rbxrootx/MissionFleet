// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58864C40 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58864c40() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push 0
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 00 00 00: call 0x58864c70
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        pop ebp
        ret
    }
}
