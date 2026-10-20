// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A9CF0 .. +0x1A5 bytes.
extern "C" __declspec(naked) void FUN_587a9cf0_587A9CF0() {
    __asm {
        sub esp, 40ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 408h], eax
        mov ecx, dword ptr [esp + 420h]
        mov edx, dword ptr [esp + 428h]
        push esi
        mov esi, dword ptr [esp + 414h]
        mov dword ptr [esp + 8], ecx
        mov dword ptr [esp + 4], edx
        mov eax, dword ptr [esi + 80h]
        cmp eax, dword ptr [esp + 418h]
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x587a9e70
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 420h]
        push ebx
        lea ebx, [esi + 84h]
        mov dword ptr [esi + 88h], 0
        mov dword ptr [ebx], eax
        mov eax, dword ptr [esp + 42ch]
        mov dword ptr [esi + 94h], 0
        push ebp
        mov ebp, dword ptr [ecx]
        push edi
        mov edi, dword ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x587a9d70
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 90h], eax
        add ebp, dword ptr [esi + 88h]
        or edx, 0ffffffffh
        cmp ebp, -1
        cmovb edx, ebp
        add edi, dword ptr [esi + 94h]
        sub ebp, edx
        mov dword ptr [esi + 88h], edx
        or ecx, 0ffffffffh
        cmp dword ptr [esp + 434h], 0
        ; Exact mapped bytes 75 0F: jne 0x587a9da9
        __asm _emit 0x75
        __asm _emit 0x0f
        lea eax, [esp + 18h]
        mov ecx, 400h
        mov dword ptr [esi + 90h], eax
        cmp edi, ecx
        mov eax, edi
        cmovae eax, ecx
        mov dword ptr [esi + 94h], eax
        sub edi, eax
        ; Exact mapped bytes 74 04: je 0x587a9dbe
        __asm _emit 0x74
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 13: jmp 0x587a9dd1
        __asm _emit 0xeb
        __asm _emit 0x13
        xor ecx, ecx
        cmp dword ptr [esp + 428h], ecx
        setne cl
        lea ecx, [ecx*2 + 2]
        cmp byte ptr [esi + 15ch], 0
        ; Exact mapped bytes 74 15: je 0x587a9def
        __asm _emit 0x74
        __asm _emit 0x15
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x587a9def
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebx]
        mov al, byte ptr [eax]
        and al, 0f0h
        cmp al, 70h
        ; Exact mapped bytes 77 22: ja 0x587a9e0a
        __asm _emit 0x77
        __asm _emit 0x22
        mov byte ptr [esi + 15ch], 0
        push ecx
        push ebx
        ; Exact mapped bytes E8 4A 40 00 00: call 0x587ade40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        ; Exact mapped bytes 75 1A: jne 0x587a9e19
        __asm _emit 0x75
        __asm _emit 0x1a
        lea ebx, [esi + 84h]
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x587a9d70
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 9ch], 588b96c8h
        mov ebx, 0fffffffdh
        cmp dword ptr [esp + 434h], 0
        ; Exact mapped bytes 75 0A: jne 0x587a9e2d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [esi + 90h], 0
        add ebp, dword ptr [esi + 88h]
        add edi, dword ptr [esi + 94h]
        ; Exact mapped bytes 74 06: je 0x587a9e41
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [esp + 10h]
        sub dword ptr [eax], edi
        test ebp, ebp
        ; Exact mapped bytes 74 06: je 0x587a9e4b
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [esp + 14h]
        sub dword ptr [eax], ebp
        push ebx
        push esi
        ; Exact mapped bytes E8 2E 6C FF FF: call 0x587a0a80
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, ebx
        pop edi
        pop ebp
        pop ebx
        pop esi
        mov ecx, dword ptr [esp + 408h]
        xor ecx, esp
        ; Exact mapped bytes E8 E7 71 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x71
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 40ch
        ret
        mov ecx, dword ptr [esp + 40ch]
        mov eax, 0fffffffeh
        mov dword ptr [esi + 9ch], 588b96e8h
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 C2 71 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x71
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 40ch
        ret
    }
}
