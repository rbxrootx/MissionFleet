// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437E3B .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00437e3b_00437E3B() {
    __asm {
        mov eax, 43b214h
        ; Exact mapped bytes E8 C3 77 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        mov eax, dword ptr [ebp + 8]
        and dword ptr [ebp - 4], 0
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        lea esi, [eax - 34h]
        and dword ptr [ebx], 0
        push edi
        mov eax, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp + 8], 8000ffffh
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        mov edi, eax
        mov eax, dword ptr [esi + 20h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x437e78
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 03: jmp 0x437e7b
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [edi + 20h], esi
        mov eax, dword ptr [edi + 20h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 14 C2 43 00: call dword ptr [0x43c214]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        add edi, 34h
        and dword ptr [ebp + 8], 0
        mov dword ptr [ebx], edi
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
