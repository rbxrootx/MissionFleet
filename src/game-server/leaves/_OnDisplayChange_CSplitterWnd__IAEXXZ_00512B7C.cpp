// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512B7C .. +0x31 bytes.
extern "C" __declspec(naked) void _OnDisplayChange_CSplitterWnd__IAEXXZ_00512B7C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 93 02 00: call 0x53beb6
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x512ba9
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 9B 02 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x512ba9
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
