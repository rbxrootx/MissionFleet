// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F87AC5 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58f87ac5() {
    __asm {
        ; Exact mapped bytes 89 55 08: mov dword ptr [ebp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes E9 06 15 FF FF: jmp 0x58f78fd3
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
