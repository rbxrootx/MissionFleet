// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00494ACF .. +0x25 bytes.
extern "C" __declspec(naked) void _QueryInterface_XOleClientSite_COleControlSite__UAGJABU_GUID__PAPAX_Z_00494ACF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0c4h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 77 0B 00: call 0x54c2e6
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x77
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
