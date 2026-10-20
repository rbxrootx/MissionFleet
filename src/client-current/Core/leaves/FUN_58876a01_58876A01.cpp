// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58876A01 .. +0x27C bytes.
extern "C" __declspec(naked) void FUN_58876a01_58876A01() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 0ch]
        and dword ptr [ebp - 10h], 0
        push ebx
        push esi
        mov esi, dword ptr [eax + 0b4h]
        push edi
        push esi
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes E8 4F 26 FF FF: call 0x58869074
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, dword ptr [ebp + 8]
        xor ebx, ebx
        push 31h
        mov dword ptr [ecx + 160h], eax
        pop eax
        push 7
        pop edx
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 05: jmp 0x58876a44
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 8]
        mov esi, edi
        push 7
        pop edi
        add eax, -30h
        xor edx, edx
        div edi
        mov edi, edx
        lea eax, [ecx + edi*4]
        push eax
        push dword ptr [ebp - 4]
        lea eax, [ebp - 14h]
        push esi
        push 1
        push eax
        ; Exact mapped bytes E8 4B CF FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 4]
        or ebx, eax
        mov eax, dword ptr [ebp + 8]
        add esi, -7
        lea eax, [eax + edi*4]
        add eax, 1ch
        push eax
        push esi
        push dword ptr [ebp - 8]
        lea eax, [ebp - 14h]
        push 1
        push eax
        ; Exact mapped bytes E8 2A CF FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        mov eax, dword ptr [ebp + 8]
        lea eax, [eax + edi*4]
        add eax, 0b4h
        push eax
        push dword ptr [ebp - 4]
        lea eax, [ebp - 14h]
        push dword ptr [ebp - 8]
        push 2
        push eax
        ; Exact mapped bytes E8 0B CF FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        mov eax, dword ptr [ebp + 8]
        lea eax, [eax + edi*4]
        mov edi, dword ptr [ebp - 8]
        add eax, 0d0h
        push eax
        push esi
        push edi
        lea eax, [ebp - 14h]
        push 2
        push eax
        ; Exact mapped bytes E8 ED CE FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        add esp, 50h
        mov eax, dword ptr [ebp - 4]
        inc eax
        sub dword ptr [ebp - 0ch], 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 85 68 FF FF FF: jne 0x58876a3f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push 38h
        pop esi
        add eax, 68h
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], 0ch
        add eax, -30h
        add esi, 0ch
        push eax
        push esi
        push edi
        lea eax, [ebp - 14h]
        push 1
        push eax
        ; Exact mapped bytes E8 AD CE FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 4]
        or ebx, eax
        lea eax, [ebp - 14h]
        push dword ptr [ebp - 8]
        push edi
        push 1
        push eax
        ; Exact mapped bytes E8 99 CE FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        mov eax, dword ptr [ebp - 4]
        add eax, 84h
        push eax
        push esi
        push edi
        lea eax, [ebp - 14h]
        push 2
        push eax
        ; Exact mapped bytes E8 81 CE FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 8]
        or ebx, eax
        mov eax, dword ptr [ebp - 4]
        add eax, 0b4h
        push eax
        push esi
        push edi
        lea eax, [ebp - 14h]
        push 2
        push eax
        ; Exact mapped bytes E8 66 CE FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        add esp, 50h
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        inc esi
        sub dword ptr [ebp - 0ch], 1
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], esi
        ; Exact mapped bytes 75 8D: jne 0x58876aed
        __asm _emit 0x75
        __asm _emit 0x8d
        mov esi, dword ptr [ebp + 8]
        lea eax, [esi + 98h]
        push eax
        push 28h
        push edi
        lea eax, [ebp - 14h]
        push 1
        push eax
        ; Exact mapped bytes E8 36 CE FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        lea eax, [esi + 9ch]
        push eax
        push 29h
        push edi
        lea eax, [ebp - 14h]
        push 1
        push eax
        ; Exact mapped bytes E8 1F CE FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        lea eax, [esi + 14ch]
        push eax
        push 28h
        push edi
        lea eax, [ebp - 14h]
        push 2
        push eax
        ; Exact mapped bytes E8 08 CE FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        lea eax, [esi + 150h]
        push eax
        push 29h
        push edi
        lea eax, [ebp - 14h]
        push 2
        push eax
        ; Exact mapped bytes E8 F1 CD FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 50h
        or ebx, eax
        lea eax, [esi + 0a0h]
        push eax
        push 1fh
        push edi
        lea eax, [ebp - 14h]
        push 1
        push eax
        ; Exact mapped bytes E8 D7 CD FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        lea eax, [esi + 0a4h]
        push eax
        push 20h
        push edi
        lea eax, [ebp - 14h]
        push 1
        push eax
        ; Exact mapped bytes E8 C0 CD FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        lea eax, [esi + 0a8h]
        push eax
        push 1003h
        push edi
        lea eax, [ebp - 14h]
        push 1
        push eax
        ; Exact mapped bytes E8 A6 CD FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        lea eax, [esi + 0ach]
        push eax
        push 1009h
        push edi
        lea eax, [ebp - 14h]
        push 0
        push eax
        ; Exact mapped bytes E8 8C CD FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 50h
        or ebx, eax
        lea eax, [esi + 154h]
        push eax
        push 1fh
        push edi
        push 2
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 72 CD FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        lea eax, [esi + 158h]
        push eax
        push 20h
        push edi
        lea eax, [ebp - 14h]
        push 2
        push eax
        ; Exact mapped bytes E8 5B CD FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        or ebx, eax
        lea eax, [esi + 15ch]
        push eax
        push 1003h
        push edi
        lea eax, [ebp - 14h]
        push 2
        push eax
        ; Exact mapped bytes E8 41 CD FF FF: call 0x588739ae
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 3ch
        or eax, ebx
        neg eax
        sbb al, al
        pop edi
        pop esi
        inc al
        pop ebx
        leave
        ret
    }
}
