// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562CB2 .. +0x5C bytes.
extern "C" __declspec(naked) void _Exec_XOleCommandTarget_COleFrameHook__UAGJPBU_GUID__KKPAUtagVARIANT__1_Z_00562CB2() {
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
        ; Exact mapped bytes E8 2A 75 F7 FF: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 20: je 0x562d05
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 3B E9 EF FF: call 0x46163d
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
