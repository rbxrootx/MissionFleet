// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5A40 .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_587a5a40_587A5A40() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        movzx ecx, byte ptr [esi + 158h]
        movzx eax, byte ptr [esi + 155h]
        mov edx, dword ptr [esi + 104h]
        imul ecx, eax
        cmp ecx, 8
        ; Exact mapped bytes 72 0A: jb 0x587a5a6b
        __asm _emit 0x72
        __asm _emit 0x0a
        mov eax, ecx
        shr eax, 3
        imul eax, edx
        ; Exact mapped bytes EB 0B: jmp 0x587a5a76
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, edx
        imul eax, ecx
        add eax, 7
        shr eax, 3
        push ebx
        push edi
        lea edi, [eax + 1]
        mov byte ptr [esi + 15ah], cl
        mov al, byte ptr [esi + 156h]
        push edi
        push esi
        mov byte ptr [esi + 15bh], al
        ; Exact mapped bytes E8 6C 0F 00 00: call 0x587a6a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esi + 152h]
        add esp, 8
        mov dword ptr [esi + 128h], eax
        mov byte ptr [eax], 0
        mov al, cl
        and al, 1fh
        cmp dword ptr [esi + 108h], 1
        movzx edx, al
        movzx eax, cl
        cmovne edx, eax
        mov al, dl
        and al, 2fh
        cmp dword ptr [esi + 104h], 1
        movzx ebx, al
        movzx eax, dl
        cmovne ebx, eax
        test bl, bl
        ; Exact mapped bytes 75 09: jne 0x587a5adb
        __asm _emit 0x75
        __asm _emit 0x09
        mov byte ptr [esi + 152h], 8
        ; Exact mapped bytes EB 77: jmp 0x587a5b52
        __asm _emit 0xeb
        __asm _emit 0x77
        mov byte ptr [esi + 152h], bl
        mov dl, bl
        test bl, 0f0h
        ; Exact mapped bytes 74 55: je 0x587a5b3d
        __asm _emit 0x74
        __asm _emit 0x55
        cmp dword ptr [esi + 12ch], 0
        ; Exact mapped bytes 75 4C: jne 0x587a5b3d
        __asm _emit 0x75
        __asm _emit 0x4c
        push edi
        push esi
        ; Exact mapped bytes E8 08 0F 00 00: call 0x587a6a00
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, bl
        add esp, 8
        shr ecx, 4
        mov dl, bl
        and ecx, 1
        mov dword ptr [esi + 12ch], eax
        test bl, 20h
        lea eax, [ecx + 1]
        cmove eax, ecx
        test bl, 40h
        lea ecx, [eax + 1]
        cmove ecx, eax
        test bl, bl
        lea eax, [ecx + 1]
        cmovns eax, ecx
        cmp eax, 1
        ; Exact mapped bytes 76 12: jbe 0x587a5b3d
        __asm _emit 0x76
        __asm _emit 0x12
        push edi
        push esi
        ; Exact mapped bytes E8 CE 0E 00 00: call 0x587a6a00
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esi + 130h], eax
        mov dl, bl
        test dl, 0e0h
        ; Exact mapped bytes 74 10: je 0x587a5b52
        __asm _emit 0x74
        __asm _emit 0x10
        push edi
        push esi
        ; Exact mapped bytes E8 97 0D 00 00: call 0x587a68e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esi + 124h], eax
        cmp byte ptr [esi + 150h], 0
        pop edi
        pop ebx
        ; Exact mapped bytes 74 2C: je 0x587a5b89
        __asm _emit 0x74
        __asm _emit 0x2c
        test byte ptr [esi + 7ch], 2
        mov ecx, dword ptr [esi + 108h]
        mov eax, dword ptr [esi + 104h]
        ; Exact mapped bytes 75 0C: jne 0x587a5b7b
        __asm _emit 0x75
        __asm _emit 0x0c
        add eax, 7
        add ecx, 7
        shr eax, 3
        shr ecx, 3
        mov dword ptr [esi + 10ch], ecx
        mov dword ptr [esi + 110h], eax
        pop esi
        ret
        mov ecx, dword ptr [esi + 104h]
        mov eax, dword ptr [esi + 108h]
        mov dword ptr [esi + 10ch], eax
        mov dword ptr [esi + 110h], ecx
        pop esi
        ret
    }
}
