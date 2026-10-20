// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58986B10 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58986b10() {
    __asm {
        ; Exact mapped bytes 8B 4D CC: mov ecx, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xcc
        ; Exact mapped bytes E9 78 C5 DB FF: jmp 0x58743090
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xc5
        __asm _emit 0xdb
        __asm _emit 0xff
    }
}
