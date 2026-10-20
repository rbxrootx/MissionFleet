// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F3A950 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58f3a950() {
    __asm {
        ; Exact mapped bytes 89 4D F8: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes E9 6D D1 04 00: jmp 0x58f87ac5
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
