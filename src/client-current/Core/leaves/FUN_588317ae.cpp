// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588317AE .. +0xD bytes.
extern "C" __declspec(naked) void FUN_588317ae() {
    __asm {
        ; Exact mapped bytes E8 2A 46 03 00: call 0x58865ddd
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E8 71 DA 01 00: call 0x5884f229
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
