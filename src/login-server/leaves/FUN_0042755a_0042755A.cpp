// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042755A .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_0042755a_0042755A() {
    __asm {
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 D6 7A FF FF: call 0x41f037
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
