// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10047CE0 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_10047ce0_10047CE0() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        push edi
        mov edi, dword ptr [esp + 1ch]
        push eax
        mov esi, ecx
        mov ecx, dword ptr [esp + 14h]
        push 0
        push 0
        push edi
        push ebx
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 AC 6C 0B 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [esi], 1017523ch
        test eax, eax
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes 74 2A: je 0x10047d3f
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [eax + 10h]
        push ebp
        mov dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [eax + 14h]
        lea edx, [eax + 18h]
        mov dword ptr [esi + 10h], ecx
        lea ecx, [esi + 14h]
        mov ebp, dword ptr [edx]
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [edx + 8]
        mov dword ptr [ecx + 8], ebp
        pop ebp
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 0ch], edx
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes 66 8B 44 24 20: mov ax, word ptr [esp + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        xor eax, eax
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 6ch], edi
        mov dword ptr [esi + 70h], eax
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi], 10175ab0h
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 64h], 2
        mov dword ptr [esi + 58h], 0ah
        mov dword ptr [esi + 5ch], 384h
        mov dword ptr [esi + 54h], 40000000h
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
