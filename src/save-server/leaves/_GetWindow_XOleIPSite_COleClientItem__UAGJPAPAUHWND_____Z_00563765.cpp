// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00563765 .. +0x36 bytes.
extern "C" __declspec(naked) void _GetWindow_XOleIPSite_COleClientItem__UAGJPAPAUHWND_____Z_00563765() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 70h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 2F 7E FC FF: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax]
        neg eax
        sbb eax, eax
        and eax, 7fffbffbh
        add eax, 80004005h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
