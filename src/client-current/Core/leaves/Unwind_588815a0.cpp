// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588815A0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588815a0() {
    __asm {
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E9 48 86 C2 FF: jmp 0x584a9bf0
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x86
        __asm _emit 0xc2
        __asm _emit 0xff
    }
}
