// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58FA0E5F .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58fa0e5f() {
    __asm {
        ; Exact mapped bytes 88 4D FF: mov byte ptr [ebp - 1], cl
        __asm _emit 0x88
        __asm _emit 0x4d
        __asm _emit 0xff
        ; Exact mapped bytes E9 2C EF E3 FF: jmp 0x58ddfd93
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xef
        __asm _emit 0xe3
        __asm _emit 0xff
    }
}
