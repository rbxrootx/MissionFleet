// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589810C0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_589810c0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 E8 01 FF FF: jmp 0x589712b0
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
