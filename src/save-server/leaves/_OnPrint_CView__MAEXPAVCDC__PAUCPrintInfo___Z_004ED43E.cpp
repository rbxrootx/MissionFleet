// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED43E .. +0x32 bytes.
extern "C" __declspec(naked) void _OnPrint_CView__MAEXPAVCDC__PAUCPrintInfo___Z_004ED43E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0cbh
        push 677b4ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 08 CE FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 F8 00 00 00: call dword ptr [eax + 0xf8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
