// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005277CF .. +0x27 bytes.
extern "C" __declspec(naked) void __0CCommonDialog__QAE_PAVCWnd___Z_005277CF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 6C FA FF: call 0x4ce3f7
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x6c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 6346f0h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
