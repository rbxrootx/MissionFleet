// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D3C890 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_58d3c890() {
    __asm {
        ; Exact mapped bytes 89 75 08: mov dword ptr [ebp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E9 3D 30 1F 00: jmp 0x58f2f8d5
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x1f
        __asm _emit 0x00
    }
}
