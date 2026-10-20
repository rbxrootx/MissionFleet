// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861C370 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5861c370_5861C370() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E AC EB FF: call 0x584d6fd0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xac
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 67 4C 04 00: call 0x58660ff0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C CF E9 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcf
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 C2 04 00: call 0x586685c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA CA E9 FF: call 0x584b8e70
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xca
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
