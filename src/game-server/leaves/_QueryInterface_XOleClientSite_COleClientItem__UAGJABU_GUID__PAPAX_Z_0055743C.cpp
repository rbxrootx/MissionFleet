// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055743C .. +0x23 bytes.
extern "C" __declspec(naked) void _QueryInterface_XOleClientSite_COleClientItem__UAGJABU_GUID__PAPAX_Z_0055743C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 68h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 4E FF FF: call 0x54c33a
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
