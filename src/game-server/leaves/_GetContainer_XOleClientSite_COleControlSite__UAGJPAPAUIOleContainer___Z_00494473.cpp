// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00494473 .. +0x29 bytes.
extern "C" __declspec(naked) void _GetContainer_XOleClientSite_COleControlSite__UAGJPAPAUIOleContainer___Z_00494473() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0b8h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 58d600h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 50 7E 0B 00: call 0x54c2e6
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x7e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
