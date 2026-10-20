// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052B8A1 .. +0x38 bytes.
extern "C" __declspec(naked) void _RemoveControlBar_CFrameWnd__QAEXPAVCControlBar___Z_0052B8A1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 70 C1 FB FF: call 0x4e7a2b
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0F: je 0x52b8d3
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 BE BF FB FF: call 0x4e7891
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
