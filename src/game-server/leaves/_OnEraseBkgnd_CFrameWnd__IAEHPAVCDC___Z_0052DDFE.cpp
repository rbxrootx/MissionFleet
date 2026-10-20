// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052DDFE .. +0x2C bytes.
extern "C" __declspec(naked) void _OnEraseBkgnd_CFrameWnd__IAEHPAVCDC___Z_0052DDFE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 07: je 0x52de18
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 0C: jmp 0x52de24
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E F9 00 00: call 0x53d7b2
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
