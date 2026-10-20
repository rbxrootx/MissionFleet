// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885150C .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_5885150c_5885150C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 20h]
        test edx, edx
        ; Exact mapped bytes 75 23: jne 0x58851542
        __asm _emit 0x75
        __asm _emit 0x23
        push esi
        xor ebx, ebx
        mov byte ptr [esi + 1ch], 1
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov dword ptr [esi + 18h], 16h
        ; Exact mapped bytes E8 F7 F9 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x58851609
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        push edi
        mov edi, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x5885155f
        __asm _emit 0x75
        __asm _emit 0x12
        test edi, edi
        ; Exact mapped bytes 75 16: jne 0x58851567
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [ebp + 14h], edi
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x588515ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x58851608
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x588515ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 7C: je 0x588515ea
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ebx, dword ptr [esi + 18h]
        push dword ptr [ebp + 24h]
        mov dword ptr [ebp - 4], ebx
        mov ebx, dword ptr [esi + 1ch]
        mov dword ptr [ebp - 8], ebx
        xor ebx, ebx
        push esi
        push edx
        cmp ecx, eax
        ; Exact mapped bytes 76 2A: jbe 0x588515af
        __asm _emit 0x76
        __asm _emit 0x2a
        inc eax
        push eax
        push edi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 00 00 00: call 0x5885160d
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp eax, -2
        ; Exact mapped bytes 74 36: je 0x588515d1
        __asm _emit 0x74
        __asm _emit 0x36
        test eax, eax
        ; Exact mapped bytes 79 69: jns 0x58851608
        __asm _emit 0x79
        __asm _emit 0x69
        mov byte ptr [edi], bl
        cmp eax, -2
        ; Exact mapped bytes 75 5F: jne 0x58851605
        __asm _emit 0x75
        __asm _emit 0x5f
        mov dword ptr [esi + 18h], 22h
        ; Exact mapped bytes EB 44: jmp 0x588515f3
        __asm _emit 0xeb
        __asm _emit 0x44
        push ecx
        push edi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 00 00 00: call 0x5885160d
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        add esp, 1ch
        mov byte ptr [edi + ecx - 1], bl
        cmp eax, -2
        ; Exact mapped bytes 75 D0: jne 0x5885159b
        __asm _emit 0x75
        __asm _emit 0xd0
        cmp dword ptr [ebp + 18h], -1
        ; Exact mapped bytes 75 CE: jne 0x5885159f
        __asm _emit 0x75
        __asm _emit 0xce
        cmp byte ptr [esi + 1ch], bl
        ; Exact mapped bytes 74 2F: je 0x58851605
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp dword ptr [esi + 18h], 22h
        ; Exact mapped bytes 75 29: jne 0x58851605
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi + 18h], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [esi + 1ch], eax
        ; Exact mapped bytes EB 1B: jmp 0x58851605
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov dword ptr [esi + 18h], 16h
        xor ebx, ebx
        push esi
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov byte ptr [esi + 1ch], 1
        ; Exact mapped bytes E8 2C F9 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
