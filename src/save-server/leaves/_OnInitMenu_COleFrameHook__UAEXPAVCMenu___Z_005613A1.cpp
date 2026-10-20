// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005613A1 .. +0x39 bytes.
extern "C" __declspec(naked) void _OnInitMenu_COleFrameHook__UAEXPAVCMenu___Z_005613A1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        push 63ccf8h
        ; Exact mapped bytes E8 48 8E F7 FF: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x8e
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x5613d4
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
