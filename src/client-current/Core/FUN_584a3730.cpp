// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3730 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_584a3730() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 0ch], 18h
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 6B 37 FE FF: call 0x58486eb0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
