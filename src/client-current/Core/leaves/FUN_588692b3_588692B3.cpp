// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588692B3 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_588692b3_588692B3() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 1F: je 0x588692df
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x588692df
        __asm _emit 0x74
        __asm _emit 0x18
        cmp eax, esi
        ; Exact mapped bytes 74 14: je 0x588692df
        __asm _emit 0x74
        __asm _emit 0x14
        push edi
        push 2eh
        pop ecx
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        and dword ptr [eax + 0ch], 0
        push eax
        ; Exact mapped bytes E8 80 CC 00 00: call 0x58875f5d
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        ret
    }
}
