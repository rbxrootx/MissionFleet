// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588997D0 .. +0x11 bytes.
extern "C" __declspec(naked) void Catch_All_588997d0() {
    __asm {
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E8 F8 88 EF FF: call 0x587920d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x88
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 97 34 0E 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x34
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}
