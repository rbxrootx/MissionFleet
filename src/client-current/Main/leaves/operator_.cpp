// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4F10 .. +0x37 bytes.
extern "C" __declspec(naked) void operator_() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi]
        cmp eax, -4
        ; Exact mapped bytes 74 28: je 0x587c4f42
        __asm _emit 0x74
        __asm _emit 0x28
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x587c4f23
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 4F 7D 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x7d
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        cmp dword ptr [eax + 18h], 10h
        ; Exact mapped bytes 72 05: jb 0x587c4f30
        __asm _emit 0x72
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes EB 03: jmp 0x587c4f33
        __asm _emit 0xeb
        __asm _emit 0x03
        lea ecx, [eax + 4]
        mov eax, dword ptr [eax + 14h]
        add eax, ecx
        cmp dword ptr [esi + 4], eax
        ; Exact mapped bytes 72 05: jb 0x587c4f42
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 30 7D 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x7d
        __asm _emit 0x1b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        pop esi
        ret
    }
}
