// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A6CD5 .. +0x4B bytes.
extern "C" __declspec(naked) void _OnHide_CDocObjectServerItem__MAEXXZ_004A6CD5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7A 02 00 00: call 0x4a6f60
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 38fh
        push 5d0270h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 64 44 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 96 0C 00: call 0x570309
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4a6d14
        __asm _emit 0x74
        __asm _emit 0x0c
        push 80040181h
        ; Exact mapped bytes E8 78 67 0A 00: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x67
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x4a6d1c
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 60 9F 0C 00: call 0x570c7c
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
