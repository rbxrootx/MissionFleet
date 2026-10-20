// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561B58 .. +0x23 bytes.
extern "C" __declspec(naked) void FID_conflict__QueryInterface_XOleContainer_COleControlContainer__UAGJABU_GUID__PAPAX_Z_00561B58() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 44h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 A7 FE FF: call 0x54c2e6
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
