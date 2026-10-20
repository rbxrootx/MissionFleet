// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58901C37 .. +0x9 bytes.
extern "C" __declspec(naked) void Catch_All_58901c37() {
    __asm {
        ; Exact mapped bytes 8B 55 10: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 02 B0 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
