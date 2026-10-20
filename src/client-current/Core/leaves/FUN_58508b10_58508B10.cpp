// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58508B10 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_58508b10_58508B10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        sub ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 9E E8 F7 FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
