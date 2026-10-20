// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A25D4 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_004a25d4_004A25D4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1D: je 0x4a2600
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 54 86 FC FF: call 0x46ac40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov ecx, 9
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 0C: jmp 0x4a260c
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 37 86 FC FF: call 0x46ac40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
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
