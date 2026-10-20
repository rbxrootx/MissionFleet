// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005223C0 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_005223c0_005223C0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 D4 E7 5D 00: push 0x5de7d4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xe7
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 19 4B FE FF: call 0x506ee6
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
