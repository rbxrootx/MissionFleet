// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049FCBF .. +0x2B bytes.
extern "C" __declspec(naked) void __6_YGAAVCArchive__AAV0_VCOleCurrency___Z_0049FCBF() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D 1E 09 00: call 0x531b4b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 1E 09 00: call 0x531b4b
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 1E 09 00: call 0x531b8e
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x1e
        __asm _emit 0x09
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
