// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58488040 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_58488040() {
    __asm {
        push ebp
        mov ebp, esp
        push 58894d20h
        ; Exact mapped bytes E8 40 67 3A 00: call 0x5882e78d
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x67
        __asm _emit 0x3a
        __asm _emit 0x00
    }
}
