// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58B3269B .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58b3269b() {
    __asm {
        ; Exact mapped bytes 11 51 04: adc dword ptr [ecx + 4], edx
        __asm _emit 0x11
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes E9 64 84 1E 00: jmp 0x58d1ab07
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x00
    }
}
