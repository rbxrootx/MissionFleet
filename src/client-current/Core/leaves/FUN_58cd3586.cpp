// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58CD3586 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58cd3586() {
    __asm {
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes E9 7E FA E4 FF: jmp 0x58b2300c
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0xfa
        __asm _emit 0xe4
        __asm _emit 0xff
    }
}
