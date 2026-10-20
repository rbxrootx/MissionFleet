// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050B4E7 .. +0x41 bytes.
extern "C" __declspec(naked) void _OnChangedViewList_CDocument__UAEXXZ_0050B4E7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 88 76 02 00: call 0x532b81
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x50b516
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 10: je 0x50b516
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x50b524
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
