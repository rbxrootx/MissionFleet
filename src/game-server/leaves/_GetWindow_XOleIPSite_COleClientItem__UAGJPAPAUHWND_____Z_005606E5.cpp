// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005606E5 .. +0x36 bytes.
extern "C" __declspec(naked) void _GetWindow_XOleIPSite_COleClientItem__UAGJPAPAUHWND_____Z_005606E5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 70h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 4F B4 FD FF: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb4
        __asm _emit 0xfd
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
