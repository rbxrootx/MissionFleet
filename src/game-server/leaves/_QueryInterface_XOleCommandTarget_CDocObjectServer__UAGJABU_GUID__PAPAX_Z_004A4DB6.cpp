// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4DB6 .. +0x26 bytes.
extern "C" __declspec(naked) void _QueryInterface_XOleCommandTarget_CDocObjectServer__UAGJABU_GUID__PAPAX_Z_004A4DB6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 3ch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes E8 64 75 0A 00: call 0x54c33a
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x75
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
