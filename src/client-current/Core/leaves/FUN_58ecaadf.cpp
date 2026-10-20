// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58ECAADF .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58ecaadf() {
    __asm {
        ; Exact mapped bytes 0F 85 AC 16 E5 FF: jne 0x58d1c191
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x16
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes 80 7C 08 01 61: cmp byte ptr [eax + ecx + 1], 0x61
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x61
        ; Exact mapped bytes E9 12 C0 C7 FF: jmp 0x58b46b01
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0xc0
        __asm _emit 0xc7
        __asm _emit 0xff
    }
}
