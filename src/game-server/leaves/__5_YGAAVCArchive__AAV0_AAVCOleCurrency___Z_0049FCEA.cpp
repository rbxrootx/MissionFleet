// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049FCEA .. +0x31 bytes.
extern "C" __declspec(naked) void __5_YGAAVCArchive__AAV0_AAVCOleCurrency___Z_0049FCEA() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8A 21 09 00: call 0x531e86
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 21 09 00: call 0x531e86
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E 20 09 00: call 0x531d75
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
