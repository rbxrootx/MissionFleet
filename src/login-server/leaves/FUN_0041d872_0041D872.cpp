// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D872 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0041d872_0041D872() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        ; Exact mapped bytes 74 06: je 0x41d882
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [edi]
        push edi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov esi, dword ptr [esp + 0ch]
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x41d892
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [esi], edi
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
