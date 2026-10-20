// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056CA65 .. +0x8E bytes.
extern "C" __declspec(naked) void _GetClassID_XPersistFile_COleLinkingDoc__UAGJPAU_GUID___Z_0056CA65() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0a4h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 75 2B: jne 0x56caab
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes A1 20 0D 64 00: mov eax, dword ptr [0x640d20]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [edx], eax
        ; Exact mapped bytes 8B 0D 24 0D 64 00: mov ecx, dword ptr [0x640d24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes A1 28 0D 64 00: mov eax, dword ptr [0x640d28]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes 8B 0D 2C 0D 64 00: mov ecx, dword ptr [0x640d2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        mov dword ptr [edx + 0ch], ecx
        mov eax, 80004005h
        ; Exact mapped bytes EB 42: jmp 0x56caed
        __asm _emit 0xeb
        __asm _emit 0x42
        push 1e9h
        push 67d450h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        push eax
        ; Exact mapped bytes E8 9C D7 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd7
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 ED E4 FD FF: call 0x54afbf
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
