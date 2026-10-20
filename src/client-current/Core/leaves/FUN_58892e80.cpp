// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892E80 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58892e80() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 D8 20 96 58: mov ecx, 0x589620d8
        __asm _emit 0xb9
        __asm _emit 0xd8
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 23 EA FF: call 0x587351c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x23
        __asm _emit 0xea
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
