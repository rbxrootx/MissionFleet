// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58753470 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_58753470() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        mov esi, dword ptr [esp + 14h]
        mov ebp, dword ptr [esp + 18h]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 38e38e39h
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        lea eax, [eax + eax*8]
        add eax, eax
        add eax, eax
        add eax, eax
        mov ecx, eax
        mov eax, ebp
        sub eax, ecx
        mov edx, esi
        cmp ebx, esi
        ; Exact mapped bytes 74 1B: je 0x587534c4
        __asm _emit 0x74
        __asm _emit 0x1b
        sub ebp, esi
        push edi
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        sub edx, 48h
        lea edi, [edx + ebp]
        mov ecx, 12h
        mov esi, edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        cmp edx, ebx
        ; Exact mapped bytes 75 ED: jne 0x587534b0
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
