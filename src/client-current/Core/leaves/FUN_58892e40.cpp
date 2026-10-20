// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892E40 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58892e40() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 68 BF 90 58: mov ecx, 0x5890bf68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 6E C1 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x6e
        __asm _emit 0xc1
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
