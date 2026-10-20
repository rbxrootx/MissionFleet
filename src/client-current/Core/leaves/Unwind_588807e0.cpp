// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588807E0 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588807e0() {
    __asm {
        ; Exact mapped bytes 8D 8D 8C FB FF FF: lea ecx, [ebp - 0x474]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 45 95 C2 FF: jmp 0x584a9d30
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x95
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
