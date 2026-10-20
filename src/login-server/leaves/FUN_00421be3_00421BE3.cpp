// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421BE3 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_00421be3_00421BE3() {
    __asm {
        ; Exact mapped bytes E8 DB 08 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 0C: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
