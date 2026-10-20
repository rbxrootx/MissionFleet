// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CF710 .. +0x161 bytes.
extern "C" __declspec(naked) void FUN_588cf710() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr [esi + 50h]
        push 0c4h
        push 0
        push eax
        ; Exact mapped bytes E8 22 D5 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 50h
        push 0
        push ecx
        ; Exact mapped bytes E8 15 D5 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        mov ebx, 1
        mov dword ptr [edx + 10h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 0ch], ebx
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 28h], ebx
        mov edx, dword ptr [esi + 54h]
        mov eax, 2
        mov dword ptr [edx + 30h], eax
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 34h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 38h], 80h
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 3ch], 10h
        mov edx, dword ptr [esi + 54h]
        mov ecx, 7dh
        mov dword ptr [edx + 40h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 44h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 48h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 4ch], ebx
        mov edx, dword ptr [esi + 50h]
        mov eax, 0ah
        ; Exact mapped bytes 66 89 82 84 00 00 00: mov word ptr [edx + 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 89 42 36: mov word ptr [edx + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x36
        mov eax, dword ptr [esi + 50h]
        movzx edx, byte ptr [eax + 32h]
        and dl, 0f2h
        or dl, 2
        mov byte ptr [eax + 32h], dl
        mov eax, dword ptr [esi + 50h]
        movzx edx, byte ptr [eax + 31h]
        and dl, 0c0h
        or dl, 40h
        mov byte ptr [eax + 31h], dl
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 47h], cl
        mov ecx, dword ptr [esi + 50h]
        mov byte ptr [ecx + 46h], bl
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffdh
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffeh
        mov eax, dword ptr [esi + 50h]
        or dword ptr [eax + 3ch], 4
        push 5899a528h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 50h]
        add esp, 1ch
        mov edi, eax
        mov ebp, 30h
        ; Exact mapped bytes EB 03: jmp 0x588cf800
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        lea edx, [ebp + 7fffffceh]
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x588cf81c
        __asm _emit 0x74
        __asm _emit 0x12
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 74 0C: je 0x588cf81c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [ecx], al
        add ecx, ebx
        add edi, ebx
        sub ebp, ebx
        ; Exact mapped bytes 75 E6: jne 0x588cf800
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 04: jmp 0x588cf820
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebp, ebp
        ; Exact mapped bytes 75 02: jne 0x588cf822
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebx
        mov byte ptr [ecx], 0
        ; Exact mapped bytes A1 48 47 A2 58: mov eax, dword ptr [0x58a24748]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0
        ; Exact mapped bytes 7E 13: jle 0x588cf846
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0A: je 0x588cf846
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x588cf848
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 4]
        lea eax, [ecx + edx + 2ch]
        mov ecx, dword ptr [esi + 5ch]
        mov dword ptr [ecx + 6ch], eax
        mov esi, dword ptr [esi + 5ch]
        mov edx, dword ptr [esi + 88h]
        mov eax, dword ptr [esi + 8ch]
        pop edi
        mov dword ptr [esi + 50h], edx
        mov dword ptr [esi + 54h], eax
        pop esi
        pop ebp
        pop ebx
    }
}
