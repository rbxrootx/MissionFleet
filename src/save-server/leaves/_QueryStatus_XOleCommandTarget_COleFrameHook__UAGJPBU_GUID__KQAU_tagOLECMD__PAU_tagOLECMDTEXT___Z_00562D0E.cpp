// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562D0E .. +0x58 bytes.
extern "C" __declspec(naked) void _QueryStatus_XOleCommandTarget_COleFrameHook__UAGJPBU_GUID__KQAU_tagOLECMD__PAU_tagOLECMDTEXT___Z_00562D0E() {
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
        push 63ccf8h
        ; Exact mapped bytes E8 CE 74 F7 FF: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1C: je 0x562d5d
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
        ; Exact mapped bytes E8 92 E6 EF FF: call 0x4613ec
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe6
        __asm _emit 0xef
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
