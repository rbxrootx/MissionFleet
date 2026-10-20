// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056FA34 .. +0x3B bytes.
extern "C" __declspec(naked) void _GetWindow_XOleInPlaceActiveObject_COleServerDoc__UAGJPAPAUHWND_____Z_0056FA34() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0e4h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c0h]
        ; Exact mapped bytes E8 FB C0 FC FF: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc0
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
