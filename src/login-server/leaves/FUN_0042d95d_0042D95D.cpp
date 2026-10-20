// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D95D .. +0xF bytes.
extern "C" __declspec(naked) void FUN_0042d95d_0042D95D() {
    __asm {
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 6A 50: push 0x50
        __asm _emit 0x6a
        __asm _emit 0x50
        ; Exact mapped bytes B9 90 DC 44 00: mov ecx, 0x44dc90
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 AF 9D FE FF: call 0x41771a
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
