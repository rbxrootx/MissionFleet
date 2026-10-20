// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437B37 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_00437b37_00437B37() {
    __asm {
        ; Exact mapped bytes C7 01 38 F5 43 00: mov dword ptr [ecx], 0x43f538
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x38
        __asm _emit 0xf5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E9 BC 6A FF FF: jmp 0x42e5fe
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
