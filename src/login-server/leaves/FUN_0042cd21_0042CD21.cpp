// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CD21 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_0042cd21_0042CD21() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 45 FC: lea eax, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 68 B0 45 44 00: push 0x4445b0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 45 FC A8 F8 44 00: mov dword ptr [ebp - 4], 0x44f8a8
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xa8
        __asm _emit 0xf8
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 ED 28 FF FF: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
