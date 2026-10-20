// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053BF42 .. +0x3F bytes.
extern "C" __declspec(naked) void _MoveWindow_CWnd__QAEXPBUtagRECT__H_Z_0053BF42() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 0ch]
        sub eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 32 FB FF: call 0x4ef1fe
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x32
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
