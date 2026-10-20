// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F3450 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_100f3450_100F3450() {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        push edi
        xor edi, edi
        lea esi, [ebx + 83ch]
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x100f348d
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        push edi
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 42 E7 FF FF: call 0x100f1bb0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x100f348d
        __asm _emit 0x75
        __asm _emit 0x1b
        push eax
        push eax
        push eax
        mov eax, dword ptr [esi]
        push -1
        mov ecx, dword ptr [eax + 50h]
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 80011035h
        ; Exact mapped bytes E8 C3 8A 07 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x8a
        __asm _emit 0x07
        __asm _emit 0x00
        inc edi
        add esi, 4
        cmp edi, 20h
        ; Exact mapped bytes 7C C7: jl 0x100f345d
        __asm _emit 0x7c
        __asm _emit 0xc7
        pop edi
        pop esi
        pop ebx
        ret
    }
}
