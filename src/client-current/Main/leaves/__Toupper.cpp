// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971B52 .. +0x112 bytes.
extern "C" __declspec(naked) void __Toupper() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov esi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 75 12: jne 0x58971b74
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes E8 39 BA 00 00: call 0x5897d5a0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 28 BA 00 00: call 0x5897d59a
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x58971b7c
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [esi + 4]
        cmp dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 75 17: jne 0x58971b9c
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 8]
        lea ecx, [eax - 61h]
        cmp ecx, 19h
        ; Exact mapped bytes 0F 87 CD 00 00 00: ja 0x58971c61
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 20h
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x58971c61
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [ebp + 8]
        cmp ebx, 100h
        ; Exact mapped bytes 73 21: jae 0x58971bc9
        __asm _emit 0x73
        __asm _emit 0x21
        test esi, esi
        ; Exact mapped bytes 75 10: jne 0x58971bbc
        __asm _emit 0x75
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes E8 06 BA 00 00: call 0x5897d5b8
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x58971bcd
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x58971c4a
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        test byte ptr [eax + ebx*2], 2
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x58971c4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 75 1B: jne 0x58971be8
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 8], ebx
        sar dword ptr [ebp - 8], 8
        ; Exact mapped bytes E8 B5 B9 00 00: call 0x5897d58e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 8]
        movzx eax, word ptr [eax + ecx*2]
        and eax, 8000h
        ; Exact mapped bytes EB 1C: jmp 0x58971c04
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [ebp - 8], ebx
        sar dword ptr [ebp - 8], 8
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffh
        ; Exact mapped bytes 0F BF 04 41: movsx eax, word ptr [ecx + eax*2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x41
        shr eax, 0fh
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x58971c1a
        __asm _emit 0x74
        __asm _emit 0x12
        mov al, byte ptr [ebp - 8]
        push 2
        mov byte ptr [ebp + 0ch], al
        mov byte ptr [ebp + 0dh], bl
        mov byte ptr [ebp + 0eh], 0
        pop eax
        ; Exact mapped bytes EB 0A: jmp 0x58971c24
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor eax, eax
        mov byte ptr [ebp + 0ch], bl
        mov byte ptr [ebp + 0dh], 0
        inc eax
        push 1
        push dword ptr [ebp - 10h]
        lea ecx, [ebp - 4]
        push 3
        push ecx
        push eax
        lea eax, [ebp + 0ch]
        push eax
        push 200h
        push dword ptr [ebp - 0ch]
        push 0
        ; Exact mapped bytes E8 45 B9 00 00: call 0x5897d588
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x58971c4e
        __asm _emit 0x75
        __asm _emit 0x04
        mov eax, ebx
        ; Exact mapped bytes EB 12: jmp 0x58971c60
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp eax, 1
        movzx eax, byte ptr [ebp - 4]
        ; Exact mapped bytes 74 09: je 0x58971c60
        __asm _emit 0x74
        __asm _emit 0x09
        movzx ecx, byte ptr [ebp - 3]
        shl eax, 8
        or eax, ecx
        pop ebx
        pop esi
        leave
        ret
    }
}
