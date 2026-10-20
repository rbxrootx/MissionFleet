// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DD5B .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0042dd5b_0042DD5B() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        test ebx, ebx
        mov esi, ecx
        ; Exact mapped bytes 74 09: je 0x42dd71
        __asm _emit 0x74
        __asm _emit 0x09
        push ebx
        ; Exact mapped bytes E8 77 1C FF FF: call 0x41f9e5
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 02: jmp 0x42dd73
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea edi, [eax + eax]
        mov ecx, esi
        push edi
        ; Exact mapped bytes E8 04 FE FF FF: call 0x42db82
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        inc edi
        push edi
        push ebx
        push dword ptr [esi]
        ; Exact mapped bytes E8 FC 02 00 00: call 0x42e084
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, esi
        push -1
        ; Exact mapped bytes E8 30 02 00 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
