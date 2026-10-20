// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004603C9 .. +0x25 bytes.
extern "C" __declspec(naked) void _QueryInterface_XOleDocumentSite_COleDocObjectItem__UAGJABU_GUID__PAPAX_Z_004603C9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 84h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C2 A9 0E 00: call 0x54adaa
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa9
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
