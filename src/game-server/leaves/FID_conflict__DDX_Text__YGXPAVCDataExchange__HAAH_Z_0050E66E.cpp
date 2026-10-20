// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050E66E .. +0x4F bytes.
extern "C" __declspec(naked) void FID_conflict__DDX_Text__YGXPAVCDataExchange__HAAH_Z_0050E66E() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 20: je 0x50e699
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0f110h
        push 5c69a0h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E2 FD FF FF: call 0x50e476
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB 20: jmp 0x50e6b9
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        push edx
        push 0f110h
        push 5c69a4h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C0 FD FF FF: call 0x50e476
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfd
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
