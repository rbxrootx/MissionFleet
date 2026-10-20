// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587777F4 .. +0x9 bytes.
extern "C" __declspec(naked) void Catch_All_587777f4() {
    __asm {
        ; Exact mapped bytes 8B 55 E8: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 45 54 20 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
