// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100AA3E0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_100aa3e0_100AA3E0() {
    __asm {
        ; Exact mapped bytes C7 01 C4 60 17 10: mov dword ptr [ecx], 0x101760c4
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xc4
        __asm _emit 0x60
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 B5 8A 05 00: jmp 0x10102ea0
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x8a
        __asm _emit 0x05
        __asm _emit 0x00
    }
}
