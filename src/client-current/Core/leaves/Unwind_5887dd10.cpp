// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887DD10 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5887dd10() {
    __asm {
        ; Exact mapped bytes 8D 4D E4: lea ecx, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E9 78 46 C2 FF: jmp 0x584a2390
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x46
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
