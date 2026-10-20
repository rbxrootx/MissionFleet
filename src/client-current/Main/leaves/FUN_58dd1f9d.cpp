// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58DD1F9D .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_58dd1f9d() {
    __asm {
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes E9 4A 4A 1A 00: jmp 0x58f769f0
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x4a
        __asm _emit 0x1a
        __asm _emit 0x00
    }
}
