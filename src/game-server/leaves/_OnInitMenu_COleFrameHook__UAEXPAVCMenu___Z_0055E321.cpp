// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E321 .. +0x39 bytes.
extern "C" __declspec(naked) void _OnInitMenu_COleFrameHook__UAEXPAVCMenu___Z_0055E321() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        push 58a6d0h
        ; Exact mapped bytes E8 C8 CD F9 FF: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xcd
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x55e354
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 80h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
