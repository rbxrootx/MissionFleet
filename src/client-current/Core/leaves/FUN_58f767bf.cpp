// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F767BF .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58f767bf() {
    __asm {
        ; Exact mapped bytes 32 04 37: xor al, byte ptr [edi + esi]
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x37
        ; Exact mapped bytes E9 EA 9F 00 00: jmp 0x58f807b1
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
