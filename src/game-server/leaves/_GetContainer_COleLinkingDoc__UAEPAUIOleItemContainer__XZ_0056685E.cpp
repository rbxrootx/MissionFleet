// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056685E .. +0x34 bytes.
extern "C" __declspec(naked) void _GetContainer_COleLinkingDoc__UAEPAUIOleItemContainer__XZ_0056685E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 13eh
        push 5d0c78h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 E6 48 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ecx, [ebp - 4]
        push ecx
        push 58ea98h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5B 5A FE FF: call 0x54c2e6
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
