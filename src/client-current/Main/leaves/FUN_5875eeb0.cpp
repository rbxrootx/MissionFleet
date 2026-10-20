// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875EEB0 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_5875eeb0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 78h]
        push edi
        test eax, eax
        ; Exact mapped bytes 7E 26: jle 0x5875eee3
        __asm _emit 0x7e
        __asm _emit 0x26
        mov eax, dword ptr [esi + 70h]
        lea ecx, [eax - 1]
        mov eax, dword ptr [esi + 64h]
        sub eax, dword ptr [esi + 5ch]
        cdq
        idiv ecx
        mov ebx, eax
        mov eax, dword ptr [esi + 68h]
        sub eax, dword ptr [esi + 60h]
        cdq
        idiv ecx
        mov ebp, eax
        mov eax, dword ptr [esi + 6ch]
        cdq
        idiv ecx
        mov edi, eax
        ; Exact mapped bytes EB 28: jmp 0x5875ef0b
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes 7D 52: jge 0x5875ef37
        __asm _emit 0x7d
        __asm _emit 0x52
        mov eax, dword ptr [esi + 70h]
        lea ecx, [eax - 1]
        mov eax, dword ptr [esi + 5ch]
        sub eax, dword ptr [esi + 64h]
        cdq
        idiv ecx
        mov ebx, eax
        mov eax, dword ptr [esi + 60h]
        sub eax, dword ptr [esi + 68h]
        cdq
        idiv ecx
        mov ebp, eax
        mov eax, dword ptr [esi + 6ch]
        cdq
        idiv ecx
        mov edi, eax
        neg edi
        test byte ptr [esi + 58h], 1
        ; Exact mapped bytes 74 13: je 0x5875ef24
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        add eax, ebp
        add ecx, ebx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 6C 43 1A 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x43
        __asm _emit 0x1a
        __asm _emit 0x00
        test byte ptr [esi + 58h], 10h
        ; Exact mapped bytes 74 0D: je 0x5875ef37
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [esi + 28h]
        add edx, edi
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 A9 3D 1A 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x3d
        __asm _emit 0x1a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
