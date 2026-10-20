// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588830A8 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588830a8() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 54: add ecx, 0x54
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x54
        ; Exact mapped bytes E9 FD F4 C1 FF: jmp 0x584a25b0
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xf4
        __asm _emit 0xc1
        __asm _emit 0xff
    }
}
