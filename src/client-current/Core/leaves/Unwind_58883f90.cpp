// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58883F90 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58883f90() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 68 7B D0 FF: jmp 0x5858bb00
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x7b
        __asm _emit 0xd0
        __asm _emit 0xff
    }
}
