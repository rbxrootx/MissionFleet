// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E941 .. +0x3A bytes.
extern "C" __declspec(naked) void _PreModal_CDialog__IAEPAUHWND____XZ_0042E941() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes E8 69 73 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x42e95a
        __asm _emit 0x74
        __asm _emit 0x09
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 A8 62 00 00: call 0x434c02
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x42e964
        __asm _emit 0x74
        __asm _emit 0x03
        mov eax, dword ptr [eax + 1ch]
        lea ecx, [esi + 54h]
        push ecx
        push eax
        ; Exact mapped bytes E8 3A 64 00 00: call 0x434da8
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov edi, eax
        ; Exact mapped bytes E8 14 0E 00 00: call 0x42f78a
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
