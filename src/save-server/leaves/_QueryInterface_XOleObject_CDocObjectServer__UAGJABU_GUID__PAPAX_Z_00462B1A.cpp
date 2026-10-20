// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00462B1A .. +0x26 bytes.
extern "C" __declspec(naked) void _QueryInterface_XOleObject_CDocObjectServer__UAGJABU_GUID__PAPAX_Z_00462B1A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 30h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes E8 70 82 0E 00: call 0x54adaa
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x82
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
