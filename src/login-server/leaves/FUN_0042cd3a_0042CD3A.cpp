// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CD3A .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_0042cd3a_0042CD3A() {
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
        ; Exact mapped bytes 68 F8 45 44 00: push 0x4445f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0x45
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 45 FC 10 F8 44 00: mov dword ptr [ebp - 4], 0x44f810
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 D4 28 FF FF: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
