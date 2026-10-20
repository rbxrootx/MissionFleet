// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58486CC0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58486cc0_58486CC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 07 00 00: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 07 00 00: call 0x58487490
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x07
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
