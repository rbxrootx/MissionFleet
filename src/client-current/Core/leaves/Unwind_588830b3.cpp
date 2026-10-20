// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588830B3 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_588830b3() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C1 5C: add ecx, 0x5c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x5c
        ; Exact mapped bytes E9 F2 F4 C1 FF: jmp 0x584a25b0
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xf4
        __asm _emit 0xc1
        __asm _emit 0xff
    }
}
