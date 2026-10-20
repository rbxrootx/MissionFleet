// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588816C0 .. +0x8 bytes.
extern "C" __declspec(naked) void Unwind_588816c0() {
    __asm {
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E9 58 E4 C9 FF: jmp 0x5851fb20
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xe4
        __asm _emit 0xc9
        __asm _emit 0xff
    }
}
