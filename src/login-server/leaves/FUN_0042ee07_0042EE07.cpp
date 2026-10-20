// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EE07 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_0042ee07_0042EE07() {
    __asm {
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes B9 78 F5 44 00: mov ecx, 0x44f578
        __asm _emit 0xb9
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 E2 00 00 00: call 0x42eef5
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
