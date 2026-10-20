// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589810FE .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_589810fe() {
    __asm {
        ; Exact mapped bytes 8D 8D 44 E2 FF FF: lea ecx, [ebp - 0x1dbc]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B7 25 DD FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x25
        __asm _emit 0xdd
        __asm _emit 0xff
    }
}
