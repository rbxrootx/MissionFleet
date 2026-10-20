// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58892C06 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_58892c06() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 83 C1 10: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x10
        ; Exact mapped bytes E9 6C C7 FA FF: jmp 0x5883f37d
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xc7
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
