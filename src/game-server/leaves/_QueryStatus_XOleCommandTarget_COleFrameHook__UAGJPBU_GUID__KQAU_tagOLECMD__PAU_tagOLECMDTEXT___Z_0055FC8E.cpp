// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055FC8E .. +0x58 bytes.
extern "C" __declspec(naked) void _QueryStatus_XOleCommandTarget_COleFrameHook__UAGJPBU_GUID__KQAU_tagOLECMD__PAU_tagOLECMDTEXT___Z_0055FC8E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], 80040104h
        mov eax, dword ptr [ebp + 8]
        sub eax, 44h
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 24h]
        push edx
        push 58a6d0h
        ; Exact mapped bytes E8 4E B4 F9 FF: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb4
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1C: je 0x55fcdd
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 02 51 F4 FF: call 0x4a4ddc
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x51
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
