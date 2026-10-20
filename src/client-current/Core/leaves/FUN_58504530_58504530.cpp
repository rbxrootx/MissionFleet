// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58504530 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58504530_58504530() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 70 2D F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x2d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
