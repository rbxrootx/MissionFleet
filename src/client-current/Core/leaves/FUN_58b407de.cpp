// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B407DE .. +0x7 bytes.
extern "C" __declspec(naked) void FUN_58b407de() {
    __asm {
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 8F C6 FB FF: jmp 0x58afce73
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xc6
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
    }
}
