// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884BAF6 .. +0x340 bytes.
extern "C" __declspec(naked) void FUN_5884baf6_5884BAF6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        lea eax, [ebp - 1]
        push esi
        push edi
        mov edi, dword ptr [ebp + 10h]
        push 1
        push eax
        push edi
        mov byte ptr [ebp - 1], 50h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 1
        lea eax, [ebp - 1]
        mov byte ptr [ebp - 1], 4bh
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 1
        lea eax, [ebp + 0fh]
        mov byte ptr [ebp + 0fh], 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 1
        lea eax, [ebp + 0fh]
        mov byte ptr [ebp + 0fh], 2
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov esi, dword ptr [ebp + 8]
        push 1
        mov al, byte ptr [esi]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 1]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 2]
        add esp, 48h
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 3]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 4]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 5]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 6]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 7]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 8]
        add esp, 48h
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 8]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 0ah]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 0bh]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 0ch]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 0ch]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 0eh]
        add esp, 48h
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 0fh]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 10h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 10h]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 12h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 13h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 14h]
        add esp, 48h
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 14h]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 16h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 17h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 18h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 18h]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 20h]
        add esp, 48h
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 20h]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 24h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 24h]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 28h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 29h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 2ah]
        add esp, 48h
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 2bh]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 30h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 30h]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 32h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 33h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 34h]
        add esp, 48h
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 34h]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 36h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 37h]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push dword ptr [esi + 18h]
        lea eax, [esi + 148h]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 3ch
        cmp eax, dword ptr [esi + 18h]
        ; Exact mapped bytes 75 38: jne 0x5884be2c
        __asm _emit 0x75
        __asm _emit 0x38
        cmp dword ptr [esi + 20h], 0
        ; Exact mapped bytes 74 14: je 0x5884be0e
        __asm _emit 0x74
        __asm _emit 0x14
        push dword ptr [esi + 20h]
        push dword ptr [esi + 140h]
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        cmp eax, dword ptr [esi + 20h]
        ; Exact mapped bytes 75 1E: jne 0x5884be2c
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp dword ptr [esi + 24h], 0
        ; Exact mapped bytes 74 14: je 0x5884be28
        __asm _emit 0x74
        __asm _emit 0x14
        push dword ptr [esi + 24h]
        push dword ptr [esi + 144h]
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        cmp eax, dword ptr [esi + 24h]
        ; Exact mapped bytes 75 04: jne 0x5884be2c
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x5884be2f
        __asm _emit 0xeb
        __asm _emit 0x03
        push 0ah
        pop eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
