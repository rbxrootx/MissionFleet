// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513BF8 .. +0x35 bytes.
extern "C" __declspec(naked) void _OnSetFocus_CFrameWnd__IAEXPAVCWnd___Z_00513BF8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 10: je 0x513c1b
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 98h]
        ; Exact mapped bytes E8 F2 2C FC FF: call 0x4d690b
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x2c
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x513c27
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F2 96 01 00: call 0x52d319
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x96
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
