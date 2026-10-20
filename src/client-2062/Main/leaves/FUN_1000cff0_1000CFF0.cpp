// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000CFF0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_1000cff0_1000CFF0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 0ch]
        mov eax, dword ptr [edi + 10h]
        cmp esi, eax
        ; Exact mapped bytes 74 11: je 0x1000d00f
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 DB 4B FF FF: call 0x10001be0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 10h]
        add esi, 4
        cmp esi, eax
        ; Exact mapped bytes 75 EF: jne 0x1000cffe
        __asm _emit 0x75
        __asm _emit 0xef
        pop edi
        pop esi
        ret
    }
}
