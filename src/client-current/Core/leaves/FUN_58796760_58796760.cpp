// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58796760 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58796760_58796760() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 0D CF FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0d
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 0D CF FF: call 0x58487490
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0d
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
