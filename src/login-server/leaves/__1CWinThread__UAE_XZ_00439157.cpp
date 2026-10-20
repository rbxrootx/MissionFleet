// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439157 .. +0x4F bytes.
extern "C" __declspec(naked) void __1CWinThread__UAE_XZ_00439157() {
    __asm {
        mov eax, 43a9b0h
        ; Exact mapped bytes E8 A7 64 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43e170h
        mov eax, dword ptr [esi + 28h]
        and dword ptr [ebp - 4], 0
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x439180
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E8 54 CB FF FF: call 0x435cd9
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 75 04: jne 0x43918e
        __asm _emit 0x75
        __asm _emit 0x04
        and dword ptr [eax + 4], 0
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 AD 87 FF FF: call 0x431946
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
