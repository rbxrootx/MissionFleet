// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044A0AF .. +0x21 bytes.
extern "C" __declspec(naked) void _OnEvent_COccManager__UAEHPAVCCmdTarget__IPAUAFX_EVENT__PAUAFX_CMDHANDLERINFO___Z_0044A0AF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 16 00 00: call 0x44b770
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
