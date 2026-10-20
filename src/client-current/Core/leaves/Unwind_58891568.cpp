// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58891568 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58891568() {
    __asm {
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E9 C0 79 F0 FF: jmp 0x58798f30
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x79
        __asm _emit 0xf0
        __asm _emit 0xff
    }
}
