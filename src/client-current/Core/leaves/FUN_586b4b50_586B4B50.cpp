// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B4B50 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_586b4b50_586B4B50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 13: je 0x586b4b72
        __asm _emit 0x74
        __asm _emit 0x13
        mov edi, dword ptr [ebp - 4]
        add edi, 0bch
        mov ecx, 35h
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
