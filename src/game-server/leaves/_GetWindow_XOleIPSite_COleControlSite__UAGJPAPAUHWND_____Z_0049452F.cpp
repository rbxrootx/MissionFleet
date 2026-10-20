// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049452F .. +0x3B bytes.
extern "C" __declspec(naked) void _GetWindow_XOleIPSite_COleControlSite__UAGJPAPAUHWND_____Z_0049452F() {
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
        ; Exact mapped bytes E8 00 76 0A 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x76
        __asm _emit 0x0a
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
