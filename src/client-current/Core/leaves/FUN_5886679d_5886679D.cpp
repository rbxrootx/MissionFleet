// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886679D .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_5886679d_5886679D() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 10h]
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 24 15 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        xor esi, esi
        cmp dword ptr [eax + 8], esi
        ; Exact mapped bytes 75 14: jne 0x588667d1
        __asm _emit 0x75
        __asm _emit 0x14
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 82 FE FF: call 0x5884ea30
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov esi, eax
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x58866874
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 0ch]
        test ebx, ebx
        ; Exact mapped bytes 74 14: je 0x588667ec
        __asm _emit 0x74
        __asm _emit 0x14
        cmp byte ptr [ebx], 0
        ; Exact mapped bytes 75 08: jne 0x588667e5
        __asm _emit 0x75
        __asm _emit 0x08
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x58866874
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x588667fe
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes E8 7E BC FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 AF A7 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 76: jmp 0x58866874
        __asm _emit 0xeb
        __asm _emit 0x76
        mov edi, ecx
        lea edx, [edi + 1]
        mov al, byte ptr [edi]
        inc edi
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x58866803
        __asm _emit 0x75
        __asm _emit 0xf9
        sub edi, edx
        mov edx, ebx
        lea eax, [edx + 1]
        mov dword ptr [ebp - 8], eax
        mov al, byte ptr [edx]
        inc edx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x58866814
        __asm _emit 0x75
        __asm _emit 0xf9
        sub edx, dword ptr [ebp - 8]
        sub edi, edx
        add edi, ecx
        cmp byte ptr [ecx], al
        ; Exact mapped bytes 74 4E: je 0x58866874
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, ecx
        sub edx, ebx
        cmp ecx, edi
        ; Exact mapped bytes 77 46: ja 0x58866874
        __asm _emit 0x77
        __asm _emit 0x46
        mov eax, ebx
        mov bl, byte ptr [ecx]
        mov byte ptr [ebp - 2], bl
        test bl, bl
        ; Exact mapped bytes 74 13: je 0x5886684c
        __asm _emit 0x74
        __asm _emit 0x13
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 74 34: je 0x58866872
        __asm _emit 0x74
        __asm _emit 0x34
        mov bl, byte ptr [eax]
        cmp byte ptr [edx + eax], bl
        ; Exact mapped bytes 75 07: jne 0x5886684c
        __asm _emit 0x75
        __asm _emit 0x07
        inc eax
        cmp byte ptr [edx + eax], 0
        ; Exact mapped bytes 75 ED: jne 0x58866839
        __asm _emit 0x75
        __asm _emit 0xed
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 74 21: je 0x58866872
        __asm _emit 0x74
        __asm _emit 0x21
        mov ebx, dword ptr [ebp - 10h]
        inc ecx
        movzx eax, byte ptr [ebp - 2]
        inc edx
        test byte ptr [eax + ebx + 19h], 4
        mov ebx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 07: je 0x5886686b
        __asm _emit 0x74
        __asm _emit 0x07
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 74 0B: je 0x58866874
        __asm _emit 0x74
        __asm _emit 0x0b
        inc ecx
        inc edx
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 75 BA: jne 0x5886682a
        __asm _emit 0x75
        __asm _emit 0xba
        ; Exact mapped bytes EB 02: jmp 0x58866874
        __asm _emit 0xeb
        __asm _emit 0x02
        mov esi, ecx
        cmp byte ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x58866884
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 18h]
        and dword ptr [ecx + 350h], 0fffffffdh
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
    }
}
