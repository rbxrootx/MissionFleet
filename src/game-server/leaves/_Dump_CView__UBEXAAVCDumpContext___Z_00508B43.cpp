// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508B43 .. +0x4C bytes.
extern "C" __declspec(naked) void _Dump_CView__UBEXAAVCDumpContext___Z_00508B43() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D A0 FE FF: call 0x4f2be3
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 1D: je 0x508b7c
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        push eax
        push 5cb3d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 BF 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 21 C2 02 00: call 0x534d9b
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x508b89
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5cb3e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 BF 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
