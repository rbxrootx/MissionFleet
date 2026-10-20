// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58987340 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58987340() {
    __asm {
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E9 48 BD DB FF: jmp 0x58743090
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0xdb
        __asm _emit 0xff
    }
}
