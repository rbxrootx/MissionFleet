// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D8D2 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_0042d8d2_0042D8D2() {
    __asm {
        ; Exact mapped bytes E8 4A F4 FF FF: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
