// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58CFE6D3 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58cfe6d3() {
    __asm {
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes BD C2 06 FB 46: mov ebp, 0x46fb06c2
        __asm _emit 0xbd
        __asm _emit 0xc2
        __asm _emit 0x06
        __asm _emit 0xfb
        __asm _emit 0x46
        ; Exact mapped bytes 66 0F CD: bswap bp
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xcd
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 00 38 E8 FF: jmp 0x58b81ee3
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x38
        __asm _emit 0xe8
        __asm _emit 0xff
    }
}
