// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050E70C .. +0x6C bytes.
extern "C" __declspec(naked) void FID_conflict__DDX_Text__YGXPAVCDataExchange__HAAV__CStringT_DV__StrTraitMFC_DV__ChTraitsCRT_D_ATL_____ATL___Z_0050E70C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 F9 FF FF: call 0x50e0a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 37: je 0x50e760
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 20 26 5E 00: call dword ptr [0x5e2620]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 5E FA FD FF: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 24 26 5E 00: call dword ptr [0x5e2624]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 D5 F9 FD FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x50e772
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 42 28 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 11 87 FF FF: call 0x506e83
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
