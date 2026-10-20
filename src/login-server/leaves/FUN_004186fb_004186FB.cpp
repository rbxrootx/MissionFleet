// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004186FB .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_004186fb_004186FB() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x418709
        __asm _emit 0x74
        __asm _emit 0x03
        mov eax, dword ptr [eax + 1ch]
        push dword ptr [esp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 04 C5 43 00: call dword ptr [0x43c504]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 12: jne 0x41872c
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esi]
        push dword ptr [esp + 0ch]
        mov ecx, esi
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x41872c
        __asm _emit 0x74
        __asm _emit 0x03
        mov edi, dword ptr [eax + 20h]
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [eax], edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
