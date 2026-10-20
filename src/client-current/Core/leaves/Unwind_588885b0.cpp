// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588885B0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588885b0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 18 46 CE FF: jmp 0x5856cbd0
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x46
        __asm _emit 0xce
        __asm _emit 0xff
    }
}
