// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046D680 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_0046d680_0046D680() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes E8 78 1C 00 00: call 0x46f300
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 08: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x08
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
