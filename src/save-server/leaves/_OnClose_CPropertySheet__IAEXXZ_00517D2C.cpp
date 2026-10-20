// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517D2C .. +0x36 bytes.
extern "C" __declspec(naked) void _OnClose_CPropertySheet__IAEXXZ_00517D2C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ch], 2
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 0D: je 0x517d56
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        ; Exact mapped bytes EB 08: jmp 0x517d5e
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 7A FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x7a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
