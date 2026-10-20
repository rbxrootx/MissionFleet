// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588311A9 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_588311a9() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes E8 03 00 00 00: call 0x588311b6
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
