// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045C30A .. +0x31 bytes.
extern "C" __declspec(naked) void __5_YGAAVCArchive__AAV0_AAVCOleCurrency___Z_0045C30A() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 99 0C 00: call 0x525c4f
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x99
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 24 99 0C 00: call 0x525c4f
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x99
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 07 98 0C 00: call 0x525b3e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
