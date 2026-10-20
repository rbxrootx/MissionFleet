// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866130 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_58866130_58866130() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 14h]
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x58866154
        __asm _emit 0x75
        __asm _emit 0x0f
        test ebx, ebx
        ; Exact mapped bytes 75 0F: jne 0x58866158
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 24: jne 0x58866172
        __asm _emit 0x75
        __asm _emit 0x24
        pop edi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        test ebx, ebx
        ; Exact mapped bytes 74 1A: je 0x58866172
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 13: je 0x58866172
        __asm _emit 0x74
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x5886616b
        __asm _emit 0x75
        __asm _emit 0x08
        pop edi
        mov byte ptr [ebx], al
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        test edi, edi
        ; Exact mapped bytes 75 1E: jne 0x5886618d
        __asm _emit 0x75
        __asm _emit 0x1e
        mov byte ptr [ebx], 0
        ; Exact mapped bytes E8 F8 C2 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 29 AE FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        mov eax, 16h
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        sub edi, ebx
        mov ecx, ebx
        push esi
        mov esi, eax
        cmp eax, -1
        ; Exact mapped bytes 75 1B: jne 0x588661b4
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edi + ecx]
        lea ecx, [ecx + 1]
        mov byte ptr [ecx - 1], al
        test al, al
        ; Exact mapped bytes 74 6C: je 0x58866219
        __asm _emit 0x74
        __asm _emit 0x6c
        sub edx, 1
        ; Exact mapped bytes 75 EE: jne 0x588661a0
        __asm _emit 0x75
        __asm _emit 0xee
        ; Exact mapped bytes EB 2B: jmp 0x588661df
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov al, byte ptr [edi + ecx]
        lea ecx, [ecx + 1]
        mov byte ptr [ecx - 1], al
        mov dword ptr [ebp - 4], esi
        test al, al
        ; Exact mapped bytes 74 55: je 0x58866219
        __asm _emit 0x74
        __asm _emit 0x55
        sub edx, 1
        ; Exact mapped bytes 74 05: je 0x588661ce
        __asm _emit 0x74
        __asm _emit 0x05
        sub esi, 1
        ; Exact mapped bytes 75 E6: jne 0x588661b4
        __asm _emit 0x75
        __asm _emit 0xe6
        mov esi, dword ptr [ebp - 4]
        test edx, edx
        lea eax, [esi - 1]
        cmove eax, esi
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x588661df
        __asm _emit 0x75
        __asm _emit 0x02
        mov byte ptr [ecx], al
        test edx, edx
        ; Exact mapped bytes 75 36: jne 0x58866219
        __asm _emit 0x75
        __asm _emit 0x36
        cmp dword ptr [ebp + 14h], -1
        ; Exact mapped bytes 75 11: jne 0x588661fa
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        pop esi
        pop edi
        mov byte ptr [ebx + eax - 1], dl
        lea eax, [edx + 50h]
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        mov byte ptr [ebx], 0
        ; Exact mapped bytes E8 6D C2 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 22h
        ; Exact mapped bytes E8 9E AD FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        pop edi
        mov eax, 22h
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        pop esi
        pop edi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
