// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850AE00 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5850ae00_5850AE00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E7 5B 32 00: call 0x588309ff
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x5b
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
