// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413336 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_00413336_00413336() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 83 65 FC 00: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 68 74 D5 43 00: push 0x43d574
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xd5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E8 CE A8 01 00: call 0x42dc19
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
