// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D87E69 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58d87e69() {
    __asm {
        ; Exact mapped bytes 80 E9 41: sub cl, 0x41
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0x41
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
        ; Exact mapped bytes 80 F9 D2: cmp cl, 0xd2
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xd2
        ; Exact mapped bytes 80 F9 19: cmp cl, 0x19
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x19
        ; Exact mapped bytes E9 CA 33 E6 FF: jmp 0x58beb243
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x33
        __asm _emit 0xe6
        __asm _emit 0xff
    }
}
