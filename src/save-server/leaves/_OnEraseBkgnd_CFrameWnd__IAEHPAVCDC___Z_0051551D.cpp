// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051551D .. +0x2C bytes.
extern "C" __declspec(naked) void _OnEraseBkgnd_CFrameWnd__IAEHPAVCDC___Z_0051551D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 07: je 0x515537
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 0C: jmp 0x515543
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF 7C 01 00: call 0x52d212
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
