// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512FC0 .. +0x38 bytes.
extern "C" __declspec(naked) void _RemoveControlBar_CFrameWnd__QAEXPAVCControlBar___Z_00512FC0() {
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
        ; Exact mapped bytes E8 41 EE FA FF: call 0x4c1e1b
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xee
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0F: je 0x512ff2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 6ch
        ; Exact mapped bytes E8 8F EC FA FF: call 0x4c1c81
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
