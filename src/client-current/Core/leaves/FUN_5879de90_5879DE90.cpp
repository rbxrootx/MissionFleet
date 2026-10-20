// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879DE90 .. +0x15B bytes.
extern "C" __declspec(naked) void FUN_5879de90_5879DE90() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x5879dfde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esi + 284h], 4
        mov eax, dword ptr [esp + 0ch]
        ; Exact mapped bytes 74 05: je 0x5879deaf
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 40h
        ; Exact mapped bytes 74 08: je 0x5879deb7
        __asm _emit 0x74
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 0F 85 29 01 00 00: jne 0x5879dfe0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 14h]
        movzx eax, bl
        cmp eax, 7
        ; Exact mapped bytes 77 29: ja 0x5879deed
        __asm _emit 0x77
        __asm _emit 0x29
        ; Exact mapped bytes FF 24 85 EC DF 79 58: jmp dword ptr [eax*4 + 0x5879dfec]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xdf
        __asm _emit 0x79
        __asm _emit 0x58
        push 588b75fch
        push esi
        ; Exact mapped bytes E8 5A 0C 00 00: call 0x5879eb30
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov al, 8
        ; Exact mapped bytes EB 12: jmp 0x5879deef
        __asm _emit 0xeb
        __asm _emit 0x12
        mov al, 10h
        ; Exact mapped bytes EB 0E: jmp 0x5879deef
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov al, 20h
        ; Exact mapped bytes EB 0A: jmp 0x5879deef
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov al, 40h
        ; Exact mapped bytes EB 06: jmp 0x5879deef
        __asm _emit 0xeb
        __asm _emit 0x06
        mov al, 80h
        ; Exact mapped bytes EB 02: jmp 0x5879deef
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, bl
        mov byte ptr [esi + 152h], al
        cmp dword ptr [esi + 128h], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x5879dfd7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        and eax, 0ffffff1fh
        cmp dword ptr [esi + 108h], 1
        push edi
        cmovne eax, ebx
        mov ebx, eax
        and ebx, 0ffffff2fh
        cmp dword ptr [esi + 104h], 1
        cmovne ebx, eax
        mov edi, ebx
        test bl, 0e0h
        ; Exact mapped bytes 74 1D: je 0x5879df4a
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [esi + 124h], 0
        ; Exact mapped bytes 75 14: jne 0x5879df4a
        __asm _emit 0x75
        __asm _emit 0x14
        push 588b761ch
        push esi
        ; Exact mapped bytes E8 4F 0C 00 00: call 0x5879eb90
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        and ebx, 0ffffff1fh
        mov ecx, ebx
        shr ecx, 4
        and ecx, 1
        test bl, 20h
        push ebp
        lea eax, [ecx + 1]
        cmove eax, ecx
        test bl, 40h
        lea ecx, [eax + 1]
        cmove ecx, eax
        movzx eax, byte ptr [esi + 155h]
        test bl, 80h
        lea ebp, [ecx + 1]
        cmove ebp, ecx
        movzx ecx, byte ptr [esi + 158h]
        imul ecx, eax
        mov eax, dword ptr [esi + 104h]
        cmp ecx, 8
        ; Exact mapped bytes 72 08: jb 0x5879df92
        __asm _emit 0x72
        __asm _emit 0x08
        shr ecx, 3
        imul ecx, eax
        ; Exact mapped bytes EB 09: jmp 0x5879df9b
        __asm _emit 0xeb
        __asm _emit 0x09
        imul ecx, eax
        add ecx, 7
        shr ecx, 3
        cmp dword ptr [esi + 12ch], 0
        lea edi, [ecx + 1]
        ; Exact mapped bytes 75 10: jne 0x5879dfb7
        __asm _emit 0x75
        __asm _emit 0x10
        push edi
        push esi
        ; Exact mapped bytes E8 52 8A 00 00: call 0x587a6a00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esi + 12ch], eax
        cmp ebp, 1
        pop ebp
        ; Exact mapped bytes 76 19: jbe 0x5879dfd6
        __asm _emit 0x76
        __asm _emit 0x19
        cmp dword ptr [esi + 130h], 0
        ; Exact mapped bytes 75 10: jne 0x5879dfd6
        __asm _emit 0x75
        __asm _emit 0x10
        push edi
        push esi
        ; Exact mapped bytes E8 33 8A 00 00: call 0x587a6a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esi + 130h], eax
        pop edi
        mov byte ptr [esi + 152h], bl
        pop ebx
        pop esi
        ret
        push 588b7658h
        push esi
        ; Exact mapped bytes E8 95 0E 00 00: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
