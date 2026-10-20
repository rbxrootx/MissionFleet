// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D184 .. +0x23 bytes.
extern "C" __declspec(naked) void FID_conflict__QueryInterface_XOleContainer_COleControlContainer__UAGJABU_GUID__PAPAX_Z_0044D184() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 50h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 DB 0F 00: call 0x54ad56
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xdb
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
