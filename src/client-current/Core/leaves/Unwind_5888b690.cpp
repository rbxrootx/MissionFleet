// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B690 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_5888b690() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 28 01 CE FF: jmp 0x5856b7c0
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0xce
        __asm _emit 0xff
    }
}
