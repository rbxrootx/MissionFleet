// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58899B10 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_58899b10() {
    __asm {
        push ebx
        push ebp
        mov ebx, dword ptr [esp + 14h]
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        mov edi, dword ptr [esp + 18h]
        mov ecx, edi
        sub ecx, esi
        mov eax, 2aaaaaabh
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        lea eax, [eax + eax*2]
        lea ebp, [ebx + eax*8]
        cmp esi, edi
        ; Exact mapped bytes 74 12: je 0x58899b51
        __asm _emit 0x74
        __asm _emit 0x12
        sub ebx, esi
        push esi
        lea ecx, [ebx + esi]
        ; Exact mapped bytes E8 F6 FC FF FF: call 0x58899840
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, 18h
        cmp esi, edi
        ; Exact mapped bytes 75 F0: jne 0x58899b41
        __asm _emit 0x75
        __asm _emit 0xf0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret
    }
}
