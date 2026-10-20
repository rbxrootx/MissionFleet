// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878B730 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5878b730_5878B730() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 BD CF FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xbd
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 05 00 00: call 0x5878bd00
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
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
