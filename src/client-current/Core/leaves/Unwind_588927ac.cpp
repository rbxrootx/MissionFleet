// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588927AC .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588927ac() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 28: add ecx, 0x28
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x28
        ; Exact mapped bytes E9 8B 03 FA FF: jmp 0x58832b42
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0xfa
        __asm _emit 0xff
    }
}
