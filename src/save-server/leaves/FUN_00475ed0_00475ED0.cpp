// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00475ED0 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_00475ed0_00475ED0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes E8 28 94 FF FF: call 0x46f300
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C0 54: add eax, 0x54
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x54
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
