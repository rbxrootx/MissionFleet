// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F71789 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58f71789() {
    __asm {
        ; Exact mapped bytes 0F 85 F7 6B F5 FF: jne 0x58ec8386
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x6b
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 06 6C: cmp byte ptr [eax + ecx + 6], 0x6c
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x6c
        ; Exact mapped bytes E9 A2 17 F5 FF: jmp 0x58ec2f3b
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x17
        __asm _emit 0xf5
        __asm _emit 0xff
    }
}
