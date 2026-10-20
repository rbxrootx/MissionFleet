// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10102EA0 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_10102ea0_10102EA0() {
    __asm {
        ; Exact mapped bytes C7 01 6C 5C 17 10: mov dword ptr [ecx], 0x10175c6c
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x6c
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E9 65 FD FF FF: jmp 0x10102c10
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
