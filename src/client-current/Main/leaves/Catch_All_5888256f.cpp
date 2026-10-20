// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888256F .. +0x9 bytes.
extern "C" __declspec(naked) void Catch_All_5888256f() {
    __asm {
        ; Exact mapped bytes 8B 55 C4: mov edx, dword ptr [ebp - 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc4
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 CA A6 0F 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa6
        __asm _emit 0x0f
        __asm _emit 0x00
    }
}
