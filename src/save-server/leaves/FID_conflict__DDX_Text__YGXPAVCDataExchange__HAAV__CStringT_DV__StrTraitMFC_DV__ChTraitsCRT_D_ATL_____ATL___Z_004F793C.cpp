// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F793C .. +0x6C bytes.
extern "C" __declspec(naked) void FID_conflict__DDX_Text__YGXPAVCDataExchange__HAAV__CStringT_DV__StrTraitMFC_DV__ChTraitsCRT_D_ATL_____ATL___Z_004F793C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 F9 FF FF: call 0x4f72d0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 37: je 0x4f7990
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F4 BE 68 00: call dword ptr [0x68bef4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 CE 58 FD FF: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F8 BE 68 00: call dword ptr [0x68bef8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 45 58 FD FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x4f79a2
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 12 D4 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A1 44 FF FF: call 0x4ebe43
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x44
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
