// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883E96 .. +0x11 bytes.
extern "C" __declspec(naked) void Catch_All_58883e96() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E8 22 CF FF FF: call 0x58880dc0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 D1 8D 0F 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x8d
        __asm _emit 0x0f
        __asm _emit 0x00
    }
}
