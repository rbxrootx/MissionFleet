// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883C40 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58883c40() {
    __asm {
        ; Exact mapped bytes 8D 4D E4: lea ecx, [ebp - 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E9 08 1F D0 FF: jmp 0x58585b50
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0xd0
        __asm _emit 0xff
    }
}
