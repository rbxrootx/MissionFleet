// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425466 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00425466_00425466() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        mov eax, ebx
        dec ebx
        push esi
        push edi
        test eax, eax
        ; Exact mapped bytes 7E 26: jle 0x42549a
        __asm _emit 0x7e
        __asm _emit 0x26
        mov edi, dword ptr [esp + 1ch]
        mov esi, dword ptr [esp + 10h]
        ; Exact mapped bytes 0F BE 06: movsx eax, byte ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x06
        push edi
        inc esi
        push dword ptr [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 75 FF FF FF: call 0x425400
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [edi], -1
        ; Exact mapped bytes 74 07: je 0x42549a
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, ebx
        dec ebx
        test eax, eax
        ; Exact mapped bytes 7F E2: jg 0x42547c
        __asm _emit 0x7f
        __asm _emit 0xe2
        pop edi
        pop esi
        pop ebx
        ret
    }
}
