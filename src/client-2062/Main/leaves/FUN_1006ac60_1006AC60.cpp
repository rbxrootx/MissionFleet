// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006AC60 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_1006ac60_1006AC60() {
    __asm {
        sub esp, 0ch
        mov eax, dword ptr [esp + 18h]
        push ebx
        mov ebx, ecx
        mov dword ptr [esp + 4], eax
        mov ecx, dword ptr [esp + 14h]
        push ebp
        mov eax, dword ptr [ebx + 21a34h]
        ; Exact mapped bytes 8B 2D A4 50 17 10: mov ebp, dword ptr [0x101750a4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        mov dword ptr [esp + 0ch], ecx
        ; Exact mapped bytes 75 2E: jne 0x1006acb5
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebx + 21a38h]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x1006acb5
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 21a30h]
        mov ecx, dword ptr [ebx + 21a3ch]
        inc eax
        lea edx, [esp + 20h]
        mov dword ptr [ebx + 21a30h], eax
        push 0
        push edx
        lea eax, [esp + 10h]
        push 0ch
        push eax
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esp + 8]
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x1006ad16
        __asm _emit 0x74
        __asm _emit 0x59
        push esi
        push edi
        push eax
        ; Exact mapped bytes E8 DB 1A 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        mov esi, dword ptr [esp + 28h]
        mov edx, ecx
        mov edi, eax
        shr ecx, 2
        mov dword ptr [esp + 1ch], eax
        add esp, 4
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov eax, dword ptr [ebx + 21a34h]
        pop edi
        test eax, eax
        pop esi
        ; Exact mapped bytes 75 2E: jne 0x1006ad1e
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebx + 21a38h]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x1006ad1e
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 10h]
        lea eax, [esp + 20h]
        push 0
        push eax
        mov eax, dword ptr [ebx + 21a3ch]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes EB 08: jmp 0x1006ad1e
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 10h], 0
        mov ecx, dword ptr [ebx + 10490h]
        mov eax, dword ptr [ebx + 10498h]
        dec ecx
        cmp eax, ecx
        ; Exact mapped bytes 75 04: jne 0x1006ad33
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 03: jmp 0x1006ad36
        __asm _emit 0xeb
        __asm _emit 0x03
        lea ecx, [eax + 1]
        mov edx, dword ptr [ebx + 1049ch]
        mov dword ptr [ebx + 10498h], ecx
        cmp ecx, edx
        ; Exact mapped bytes 74 2D: je 0x1006ad73
        __asm _emit 0x74
        __asm _emit 0x2d
        lea edx, [eax + eax*2]
        mov eax, dword ptr [ebx + 104a0h]
        lea ecx, [eax + edx*4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebx + 10494h]
        inc eax
        mov dword ptr [ebx + 10494h], eax
        pop ebp
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
