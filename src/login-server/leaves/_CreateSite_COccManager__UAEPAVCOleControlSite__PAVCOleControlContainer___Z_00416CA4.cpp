// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416CA4 .. +0x3A bytes.
extern "C" __declspec(naked) void _CreateSite_COccManager__UAEPAVCOleControlSite__PAVCOleControlContainer___Z_00416CA4() {
    __asm {
        mov eax, 43a9d9h
        ; Exact mapped bytes E8 5A 89 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push 0dch
        ; Exact mapped bytes E8 33 6C 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp - 10h], ecx
        xor eax, eax
        cmp ecx, eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 08: je 0x416cd0
        __asm _emit 0x74
        __asm _emit 0x08
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 1E 00 00: call 0x418b97
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
