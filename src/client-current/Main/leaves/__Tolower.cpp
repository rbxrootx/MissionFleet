// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971539 .. +0x10D bytes.
extern "C" __declspec(naked) void __Tolower() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov esi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 75 12: jne 0x5897155b
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes E8 52 C0 00 00: call 0x5897d5a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 41 C0 00 00: call 0x5897d59a
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x58971563
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [esi + 4]
        cmp dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 75 17: jne 0x58971583
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 8]
        lea ecx, [eax - 41h]
        cmp ecx, 19h
        ; Exact mapped bytes 0F 87 C8 00 00 00: ja 0x58971643
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 20h
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x58971643
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push edi
        mov edi, 100h
        cmp ebx, edi
        ; Exact mapped bytes 73 1D: jae 0x589715ae
        __asm _emit 0x73
        __asm _emit 0x1d
        test esi, esi
        ; Exact mapped bytes 75 10: jne 0x589715a5
        __asm _emit 0x75
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes E8 F9 BF 00 00: call 0x5897d594
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x589715b2
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x5897162b
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        test byte ptr [eax + ebx*2], 1
        ; Exact mapped bytes 74 7D: je 0x5897162b
        __asm _emit 0x74
        __asm _emit 0x7d
        test esi, esi
        ; Exact mapped bytes 75 1B: jne 0x589715cd
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 8], ebx
        sar dword ptr [ebp - 8], 8
        ; Exact mapped bytes E8 D0 BF 00 00: call 0x5897d58e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 8]
        movzx eax, word ptr [eax + ecx*2]
        and eax, 8000h
        ; Exact mapped bytes EB 1C: jmp 0x589715e9
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
        ; Exact mapped bytes 74 12: je 0x589715ff
        __asm _emit 0x74
        __asm _emit 0x12
        mov al, byte ptr [ebp - 8]
        push 2
        mov byte ptr [ebp + 0ch], al
        mov byte ptr [ebp + 0dh], bl
        mov byte ptr [ebp + 0eh], 0
        pop eax
        ; Exact mapped bytes EB 0A: jmp 0x58971609
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
        push edi
        push dword ptr [ebp - 0ch]
        push 0
        ; Exact mapped bytes E8 64 BF 00 00: call 0x5897d588
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5897162f
        __asm _emit 0x75
        __asm _emit 0x04
        mov eax, ebx
        ; Exact mapped bytes EB 12: jmp 0x58971641
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp eax, 1
        movzx eax, byte ptr [ebp - 4]
        ; Exact mapped bytes 74 09: je 0x58971641
        __asm _emit 0x74
        __asm _emit 0x09
        movzx ecx, byte ptr [ebp - 3]
        shl eax, 8
        or eax, ecx
        pop edi
        pop ebx
        pop esi
        leave
        ret
    }
}
