// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58570B60 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_58570b60_58570B60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 BE 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xbe
        __asm _emit 0x2b
        __asm _emit 0x00
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 98 71 F5 FF: call 0x584c7d20
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x71
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
