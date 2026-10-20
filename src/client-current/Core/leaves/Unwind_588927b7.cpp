// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588927B7 .. +0xE bytes.
extern "C" __declspec(naked) void Unwind_588927b7() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 C1 A4 20 00 00: add ecx, 0x20a4
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6D 03 FA FF: jmp 0x58832b32
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
