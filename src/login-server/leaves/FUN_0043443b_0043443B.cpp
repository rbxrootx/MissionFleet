// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043443B .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_0043443b_0043443B() {
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
        ; Exact mapped bytes 68 A8 44 44 00: push 0x4444a8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0x44
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 45 FC F8 F6 44 00: mov dword ptr [ebp - 4], 0x44f6f8
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xf8
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 D3 B1 FE FF: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
