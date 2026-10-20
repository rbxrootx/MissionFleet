// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD820 .. +0x4C bytes.
extern "C" __declspec(naked) void _AfxDlgProc__YGHPAUHWND____IIJ_Z_004CD820() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 0ch], 110h
        ; Exact mapped bytes 75 37: jne 0x4cd864
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FE 20 00 00: call 0x4cf934
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 6348b0h
        ; Exact mapped bytes E8 C2 C9 00 00: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 10: je 0x4cd85d
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x4cd866
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4cd866
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
