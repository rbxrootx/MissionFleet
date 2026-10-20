// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004948B4 .. +0x25 bytes.
extern "C" __declspec(naked) void FID_conflict__QueryInterface_XRichEditOleCallback_CRichEditView__UAGJABU_GUID__PAPAX_Z_004948B4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0c0h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 7A 0B 00: call 0x54c2e6
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7a
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
