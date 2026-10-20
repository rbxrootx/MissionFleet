// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58836A02 .. +0x9 bytes.
extern "C" __declspec(naked) void Catch_All_58836a02() {
    __asm {
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 37 62 14 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
