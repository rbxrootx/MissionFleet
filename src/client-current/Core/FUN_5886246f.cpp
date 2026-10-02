// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886246F .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_5886246f() {
    __asm {
        ; Exact mapped bytes E8 7D 67 00 00: call 0x58868bf1
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, eax
        mov eax, 58907420h
        test edx, edx
        lea ecx, [edx + 10h]
        cmovne eax, ecx
        ret
    }
}
