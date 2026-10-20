// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875424F .. +0x9 bytes.
extern "C" __declspec(naked) void Catch_All_5875424f() {
    __asm {
        ; Exact mapped bytes 8B 55 A0: mov edx, dword ptr [ebp - 0x60]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xa0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 EA 89 22 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x89
        __asm _emit 0x22
        __asm _emit 0x00
    }
}
