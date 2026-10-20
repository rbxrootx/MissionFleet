// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A5540 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_587a5540_587A5540() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        sub esp, 8
        push ebx
        mov ebx, dword ptr [esp + 18h]
        test bl, 2
        ; Exact mapped bytes 74 6C: je 0x587a55bd
        __asm _emit 0x74
        __asm _emit 0x6c
        mov al, 8
        cmp ebx, 3
        ; Exact mapped bytes 74 06: je 0x587a555e
        __asm _emit 0x74
        __asm _emit 0x06
        mov al, byte ptr [ecx + 155h]
        mov edx, dword ptr [esp + 14h]
        mov ah, byte ptr [edx]
        test ah, ah
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x587a560b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ah, al
        ; Exact mapped bytes 0F 87 97 00 00 00: ja 0x587a560b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov bl, byte ptr [edx + 1]
        mov byte ptr [esp + 7], bl
        test bl, bl
        mov ebx, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x587a560b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esp + 7], al
        ; Exact mapped bytes 77 7E: ja 0x587a560b
        __asm _emit 0x77
        __asm _emit 0x7e
        mov cl, byte ptr [edx + 2]
        mov byte ptr [esp + 18h], cl
        test cl, cl
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 74 6F: je 0x587a560b
        __asm _emit 0x74
        __asm _emit 0x6f
        cmp byte ptr [esp + 18h], al
        ; Exact mapped bytes 77 69: ja 0x587a560b
        __asm _emit 0x77
        __asm _emit 0x69
        mov al, byte ptr [esp + 7]
        mov byte ptr [esp + 9], al
        mov al, byte ptr [esp + 18h]
        mov byte ptr [esp + 8], ah
        mov byte ptr [esp + 0ah], al
        mov eax, 3
        ; Exact mapped bytes EB 1C: jmp 0x587a55d9
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [esp + 14h]
        mov al, byte ptr [edx + 3]
        test al, al
        ; Exact mapped bytes 74 43: je 0x587a560b
        __asm _emit 0x74
        __asm _emit 0x43
        cmp al, byte ptr [ecx + 155h]
        ; Exact mapped bytes 77 3B: ja 0x587a560b
        __asm _emit 0x77
        __asm _emit 0x3b
        mov byte ptr [esp + 8], al
        mov eax, 1
        test bl, 4
        ; Exact mapped bytes 74 14: je 0x587a55f2
        __asm _emit 0x74
        __asm _emit 0x14
        mov dl, byte ptr [edx + 4]
        test dl, dl
        ; Exact mapped bytes 74 26: je 0x587a560b
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dl, byte ptr [ecx + 155h]
        ; Exact mapped bytes 77 1E: ja 0x587a560b
        __asm _emit 0x77
        __asm _emit 0x1e
        mov byte ptr [esp + eax + 8], dl
        inc eax
        push eax
        lea eax, [esp + 0ch]
        push eax
        push 73424954h
        push ecx
        ; Exact mapped bytes E8 0D E8 FF FF: call 0x587a3e10
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop ebx
        add esp, 8
        ret
        push 588b8cfch
        push ecx
        ; Exact mapped bytes E8 1A 9E FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop ebx
        add esp, 8
        ret
    }
}
