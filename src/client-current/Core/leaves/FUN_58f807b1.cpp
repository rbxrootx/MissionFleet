// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F807B1 .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58f807b1() {
    __asm {
        ; Exact mapped bytes 88 06: mov byte ptr [esi], al
        __asm _emit 0x88
        __asm _emit 0x06
        ; Exact mapped bytes E9 5E 14 BF FF: jmp 0x58b71c16
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x14
        __asm _emit 0xbf
        __asm _emit 0xff
    }
}
