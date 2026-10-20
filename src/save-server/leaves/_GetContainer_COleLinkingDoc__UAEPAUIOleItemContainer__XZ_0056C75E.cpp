// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C75E .. +0x34 bytes.
extern "C" __declspec(naked) void _GetContainer_COleLinkingDoc__UAEPAUIOleItemContainer__XZ_0056C75E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 13eh
        push 67d450h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 E6 DA F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xda
        __asm _emit 0xf6
        __asm _emit 0xff
        lea ecx, [ebp - 4]
        push ecx
        push 641288h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB E5 FD FF: call 0x54ad56
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
