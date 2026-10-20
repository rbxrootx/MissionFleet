// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516A3E .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_00516a3e_00516A3E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 637890h
        ; Exact mapped bytes E8 AE 37 FC FF: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x516a6b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        add eax, 88h
        ; Exact mapped bytes EB 06: jmp 0x516a71
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        add eax, 3ch
        mov esp, ebp
        pop ebp
        ret
    }
}
