// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050E580 .. +0x50 bytes.
extern "C" __declspec(naked) void _DDX_Text__YGXPAVCDataExchange__HAAF_Z_0050E580() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 20: je 0x50e5ab
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0f110h
        push 5c6988h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D0 FE FF FF: call 0x50e476
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB 21: jmp 0x50e5cc
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        push edx
        push 0f110h
        push 5c698ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 AD FE FF FF: call 0x50e476
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
