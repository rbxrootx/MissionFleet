// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D98C .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_0045d98c_0045D98C() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 82 0C 00: call 0x525c4f
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 46 82 0C 00: call 0x525bf0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x82
        __asm _emit 0x0c
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
