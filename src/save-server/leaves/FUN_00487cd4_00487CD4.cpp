// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00487CD4 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_00487cd4_00487CD4() {
    __asm {
        push ebp
        mov ebp, esp
        push 600h
        push 0
        ; Exact mapped bytes E8 79 FF FF FF: call 0x487c5c
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 487cb2h
        ; Exact mapped bytes E8 03 DF FD FF: call 0x465bf0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A2 FC 75 68 00: mov byte ptr [0x6875fc], al
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        ret
    }
}
