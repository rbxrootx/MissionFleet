// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58989090 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_58989090() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 D8 6A F4 FF: jmp 0x588cfb70
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x6a
        __asm _emit 0xf4
        __asm _emit 0xff
    }
}
