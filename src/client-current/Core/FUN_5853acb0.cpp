// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853ACB0 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_5853acb0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 14 29 28 00: call 0x587bd5d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x29
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        pop ebp
        ret
    }
}
