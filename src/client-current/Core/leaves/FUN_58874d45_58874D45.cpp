// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874D45 .. +0x1A5 bytes.
extern "C" __declspec(naked) void FUN_58874d45_58874D45() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 720h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        cmp dword ptr [edi + 4], 0fde9h
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x58874e79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 718h]
        push eax
        push dword ptr [edi + 4]
        ; Exact mapped bytes FF 15 AC 43 89 58: call dword ptr [0x588943ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x58874e79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov esi, 100h
        mov eax, ebx
        mov byte ptr [ebp + eax - 104h], al
        inc eax
        cmp eax, esi
        ; Exact mapped bytes 72 F4: jb 0x58874d8e
        __asm _emit 0x72
        __asm _emit 0xf4
        mov al, byte ptr [ebp - 712h]
        lea ecx, [ebp - 712h]
        mov byte ptr [ebp - 104h], 20h
        ; Exact mapped bytes EB 1F: jmp 0x58874dce
        __asm _emit 0xeb
        __asm _emit 0x1f
        movzx edx, byte ptr [ecx + 1]
        movzx eax, al
        ; Exact mapped bytes EB 0D: jmp 0x58874dc5
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp eax, esi
        ; Exact mapped bytes 73 0D: jae 0x58874dc9
        __asm _emit 0x73
        __asm _emit 0x0d
        mov byte ptr [ebp + eax - 104h], 20h
        inc eax
        cmp eax, edx
        ; Exact mapped bytes 76 EF: jbe 0x58874db8
        __asm _emit 0x76
        __asm _emit 0xef
        add ecx, 2
        mov al, byte ptr [ecx]
        test al, al
        ; Exact mapped bytes 75 DD: jne 0x58874daf
        __asm _emit 0x75
        __asm _emit 0xdd
        push ebx
        push dword ptr [edi + 4]
        lea eax, [ebp - 704h]
        push eax
        push esi
        lea eax, [ebp - 104h]
        push eax
        push 1
        push ebx
        ; Exact mapped bytes E8 71 ED FF FF: call 0x58873b5e
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        push dword ptr [edi + 4]
        lea eax, [ebp - 204h]
        push esi
        push eax
        push esi
        lea eax, [ebp - 104h]
        push eax
        push esi
        push dword ptr [edi + 21ch]
        push ebx
        ; Exact mapped bytes E8 CE D5 FF FF: call 0x588723dc
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 40h
        lea eax, [ebp - 304h]
        push ebx
        push dword ptr [edi + 4]
        push esi
        push eax
        push esi
        lea eax, [ebp - 104h]
        push eax
        push 200h
        push dword ptr [edi + 21ch]
        push ebx
        ; Exact mapped bytes E8 A6 D5 FF FF: call 0x588723dc
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        lea eax, [edi + 19h]
        mov ecx, ebx
        movzx edx, word ptr [ebp + ecx*2 - 704h]
        test dl, 1
        ; Exact mapped bytes 74 0C: je 0x58874e57
        __asm _emit 0x74
        __asm _emit 0x0c
        or byte ptr [eax], 10h
        mov dl, byte ptr [ebp + ecx - 204h]
        ; Exact mapped bytes EB 13: jmp 0x58874e6a
        __asm _emit 0xeb
        __asm _emit 0x13
        test dl, 2
        ; Exact mapped bytes 74 0C: je 0x58874e68
        __asm _emit 0x74
        __asm _emit 0x0c
        or byte ptr [eax], 20h
        mov dl, byte ptr [ebp + ecx - 304h]
        ; Exact mapped bytes EB 02: jmp 0x58874e6a
        __asm _emit 0xeb
        __asm _emit 0x02
        mov dl, bl
        inc ecx
        mov byte ptr [eax + 100h], dl
        inc eax
        sub esi, 1
        ; Exact mapped bytes 75 C7: jne 0x58874e3e
        __asm _emit 0x75
        __asm _emit 0xc7
        ; Exact mapped bytes EB 62: jmp 0x58874edb
        __asm _emit 0xeb
        __asm _emit 0x62
        push -5ah
        pop eax
        push -7ah
        pop edx
        sub edx, edi
        lea ecx, [edi + 19h]
        mov dword ptr [ebp - 71ch], edx
        sub eax, edi
        push -19h
        pop edx
        sub edx, edi
        mov dword ptr [ebp - 720h], eax
        mov edi, dword ptr [ebp - 71ch]
        xor ebx, ebx
        mov esi, 100h
        add eax, ecx
        cmp eax, 19h
        ; Exact mapped bytes 77 08: ja 0x58874eb3
        __asm _emit 0x77
        __asm _emit 0x08
        or byte ptr [ecx], 10h
        lea eax, [ecx + 20h]
        ; Exact mapped bytes EB 0E: jmp 0x58874ec1
        __asm _emit 0xeb
        __asm _emit 0x0e
        lea eax, [edi + ecx]
        cmp eax, 19h
        ; Exact mapped bytes 77 0A: ja 0x58874ec5
        __asm _emit 0x77
        __asm _emit 0x0a
        or byte ptr [ecx], 20h
        lea eax, [ecx - 20h]
        add al, dl
        ; Exact mapped bytes EB 02: jmp 0x58874ec7
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, bl
        mov byte ptr [ecx + 100h], al
        inc ecx
        lea eax, [ecx + edx]
        cmp eax, esi
        mov eax, dword ptr [ebp - 720h]
        ; Exact mapped bytes 72 C9: jb 0x58874ea4
        __asm _emit 0x72
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 68 C1 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ret
    }
}
