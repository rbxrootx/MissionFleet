// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862AA60 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5862aa60_5862AA60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 14 00 00: call 0x5862bef0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A9 24 00 00: call 0x5862cf20
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 06 00 00: call 0x5862b0d0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
