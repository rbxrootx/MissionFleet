// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F340C5 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58f340c5() {
    __asm {
        ; Exact mapped bytes 88 06: mov byte ptr [esi], al
        __asm _emit 0x88
        __asm _emit 0x06
        ; Exact mapped bytes E9 90 6D F7 FF: jmp 0x58eaae5c
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x6d
        __asm _emit 0xf7
        __asm _emit 0xff
    }
}
