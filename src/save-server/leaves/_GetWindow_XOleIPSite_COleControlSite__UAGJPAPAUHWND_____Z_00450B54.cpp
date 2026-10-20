// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00450B54 .. +0x3B bytes.
extern "C" __declspec(naked) void _GetWindow_XOleIPSite_COleControlSite__UAGJPAPAUHWND_____Z_00450B54() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0bch
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 3B AA 0D 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xaa
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
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
