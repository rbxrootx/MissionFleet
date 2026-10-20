// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004034D6 .. +0x25 bytes.
extern "C" __declspec(naked) void _SetOccDialogInfo_CPaneDialog__UAEHPAU_AFX_OCC_DIALOG_INFO___Z_004034D6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0d90h], ecx
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
