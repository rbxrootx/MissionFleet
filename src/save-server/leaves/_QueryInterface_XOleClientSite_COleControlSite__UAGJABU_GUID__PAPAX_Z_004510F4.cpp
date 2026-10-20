// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004510F4 .. +0x25 bytes.
extern "C" __declspec(naked) void _QueryInterface_XOleClientSite_COleControlSite__UAGJABU_GUID__PAPAX_Z_004510F4() {
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
        ; Exact mapped bytes E8 43 9C 0F 00: call 0x54ad56
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x9c
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
