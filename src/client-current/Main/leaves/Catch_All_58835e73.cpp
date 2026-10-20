// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58835E73 .. +0x9 bytes.
extern "C" __declspec(naked) void Catch_All_58835e73() {
    __asm {
        ; Exact mapped bytes 8B 4D 94: mov ecx, dword ptr [ebp - 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x94
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 C6 6D 14 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x6d
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
