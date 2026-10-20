// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002A910 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_1002a910_1002A910() {
    __asm {
        push -1
        push 1016db88h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0ch], edi
        mov dword ptr [edi], 1017571ch
        mov dword ptr [esp + 18h], 0
        lea esi, [edi + 50h]
        mov ebx, 4
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x1002a957
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], 0
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 E8: jne 0x1002a945
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, edi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 24 42 0D 00: call 0x100feb90
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x42
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
