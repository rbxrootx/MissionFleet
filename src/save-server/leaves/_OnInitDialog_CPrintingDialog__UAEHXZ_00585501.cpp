// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00585501 .. +0x2B bytes.
extern "C" __declspec(naked) void _OnInitDialog_CPrintingDialog__UAEHXZ_00585501() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 0F C6 FA FF: call 0x531b1c
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc6
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 0F F5 FF: call 0x4d645e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0f
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 F0 F4 FF: call 0x4d4618
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf0
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EA 95 F4 FF: call 0x4ceb12
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
