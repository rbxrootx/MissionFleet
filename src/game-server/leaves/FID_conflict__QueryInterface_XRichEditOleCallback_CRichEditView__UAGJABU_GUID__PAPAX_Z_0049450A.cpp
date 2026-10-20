// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049450A .. +0x25 bytes.
extern "C" __declspec(naked) void FID_conflict__QueryInterface_XRichEditOleCallback_CRichEditView__UAGJABU_GUID__PAPAX_Z_0049450A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0bch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD 7D 0B 00: call 0x54c2e6
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x7d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
