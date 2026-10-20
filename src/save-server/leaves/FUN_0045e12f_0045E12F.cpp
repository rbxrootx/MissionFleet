// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E12F .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_0045e12f_0045E12F() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E 7B 0C 00: call 0x525c4f
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x7b
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 7A 0C 00: call 0x525bf0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
