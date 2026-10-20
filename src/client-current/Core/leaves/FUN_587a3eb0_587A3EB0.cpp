// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A3EB0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_587a3eb0_587A3EB0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, 400h
        push ebx
        push ebp
        push esi
        mov ebp, dword ptr [eax + 8]
        push edi
        lea edi, [eax + 0ch]
        mov eax, dword ptr [esp + 14h]
        mov ebx, dword ptr [eax + 0bch]
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        cmp ecx, ebp
        mov esi, ebp
        cmovbe esi, ecx
        test edi, edi
        ; Exact mapped bytes 74 1E: je 0x587a3ef9
        __asm _emit 0x74
        __asm _emit 0x1e
        test esi, esi
        ; Exact mapped bytes 74 1A: je 0x587a3ef9
        __asm _emit 0x74
        __asm _emit 0x1a
        push esi
        push edi
        push eax
        ; Exact mapped bytes E8 D9 29 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push edi
        push dword ptr [esp + 28h]
        ; Exact mapped bytes E8 BE B6 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        add esp, 18h
        sub ebp, esi
        ; Exact mapped bytes 74 11: je 0x587a3f0e
        __asm _emit 0x74
        __asm _emit 0x11
        test ebx, ebx
        ; Exact mapped bytes 74 12: je 0x587a3f13
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [eax + 0c0h]
        lea edi, [ebx + 4]
        mov ebx, dword ptr [ebx]
        ; Exact mapped bytes EB C2: jmp 0x587a3ed0
        __asm _emit 0xeb
        __asm _emit 0xc2
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        push 588b8a28h
        push eax
        ; Exact mapped bytes E8 62 AF FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
