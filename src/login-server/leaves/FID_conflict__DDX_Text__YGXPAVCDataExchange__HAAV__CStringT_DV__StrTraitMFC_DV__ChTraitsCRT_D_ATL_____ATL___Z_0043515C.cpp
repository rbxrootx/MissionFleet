// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043515C .. +0x52 bytes.
extern "C" __declspec(naked) void FID_conflict__DDX_Text__YGXPAVCDataExchange__HAAV__CStringT_DV__StrTraitMFC_DV__ChTraitsCRT_D_ATL_____ATL___Z_0043515C() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        push dword ptr [ebp + 0ch]
        mov ecx, edi
        ; Exact mapped bytes E8 2F FE FF FF: call 0x434f9d
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [edi], 0
        mov esi, eax
        ; Exact mapped bytes 74 28: je 0x43519d
        __asm _emit 0x74
        __asm _emit 0x28
        push esi
        ; Exact mapped bytes FF 15 E4 C4 43 00: call dword ptr [0x43c4e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        lea ecx, [eax + 1]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 63 8E FF FF: call 0x42dfec
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push esi
        ; Exact mapped bytes FF 15 E8 C4 43 00: call dword ptr [0x43c4e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push -1
        ; Exact mapped bytes E8 29 8E FF FF: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0B: jmp 0x4351a8
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 10h]
        push dword ptr [eax]
        push esi
        ; Exact mapped bytes E8 5C F8 FF FF: call 0x434a04
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
