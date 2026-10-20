// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055FC32 .. +0x5C bytes.
extern "C" __declspec(naked) void _Exec_XOleCommandTarget_COleFrameHook__UAGJPBU_GUID__KKPAUtagVARIANT__1_Z_0055FC32() {
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
        ; Exact mapped bytes E8 AA B4 F9 FF: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb4
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 20: je 0x55fc85
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
        ; Exact mapped bytes E8 AB 53 F4 FF: call 0x4a502d
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x53
        __asm _emit 0xf4
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
