// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58981440 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58981440() {
    __asm {
        ; Exact mapped bytes 8D 4D E4: lea ecx, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E9 E0 02 FF FF: jmp 0x58971728
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
