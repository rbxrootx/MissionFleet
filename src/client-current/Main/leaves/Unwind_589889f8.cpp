// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589889F8 .. +0xB bytes.
extern "C" __declspec(naked) void Unwind_589889f8() {
    __asm {
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 83 C1 54: add ecx, 0x54
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x54
        ; Exact mapped bytes E9 BD AC DC FF: jmp 0x587536c0
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0xac
        __asm _emit 0xdc
        __asm _emit 0xff
    }
}
