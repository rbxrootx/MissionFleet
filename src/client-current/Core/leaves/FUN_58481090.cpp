// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58481090 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58481090() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B9 0C 73 94 58: mov ecx, 0x5894730c
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 38 02 00: call 0x584a4950
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
