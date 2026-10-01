// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902CE0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58902ce0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 3ch]
        mov dword ptr [edi + 28h], ebx
        test esi, esi
        ; Exact mapped bytes 74 22: je 0x58902d15
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 4000h
        ; Exact mapped bytes 66 85 C1: test cx, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc1
        ; Exact mapped bytes 74 08: je 0x58902d09
        __asm _emit 0x74
        __asm _emit 0x08
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 D7 FF FF FF: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 38h]
        cmp esi, dword ptr [edi + 3ch]
        ; Exact mapped bytes 74 04: je 0x58902d15
        __asm _emit 0x74
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 DE: jne 0x58902cf3
        __asm _emit 0x75
        __asm _emit 0xde
        pop edi
        pop esi
        pop ebx
        ret 4
    }
}
