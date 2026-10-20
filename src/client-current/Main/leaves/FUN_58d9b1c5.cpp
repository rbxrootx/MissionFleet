// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D9B1C5 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58d9b1c5() {
    __asm {
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 AC 78 E2 FF: jmp 0x58bc2a79
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x78
        __asm _emit 0xe2
        __asm _emit 0xff
    }
}
