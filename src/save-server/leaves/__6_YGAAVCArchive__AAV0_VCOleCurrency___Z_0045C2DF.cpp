// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045C2DF .. +0x2B bytes.
extern "C" __declspec(naked) void __6_YGAAVCArchive__AAV0_VCOleCurrency___Z_0045C2DF() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 96 0C 00: call 0x525914
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 96 0C 00: call 0x525914
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 96 0C 00: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
