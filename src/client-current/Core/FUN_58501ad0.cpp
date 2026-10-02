// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501AD0 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58501ad0() {
    __asm {
        push ebp
        mov ebp, esp
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 63 06 00 00: call 0x58502140
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop ebp
        ret
    }
}
