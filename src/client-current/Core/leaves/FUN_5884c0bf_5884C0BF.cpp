// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C0BF .. +0x227 bytes.
extern "C" __declspec(naked) void FUN_5884c0bf_5884C0BF() {
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
        xor esi, esi
        inc esi
        mov byte ptr [ebp - 1], 50h
        push esi
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push esi
        lea eax, [ebp - 1]
        mov byte ptr [ebp - 1], 4bh
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push esi
        lea eax, [ebp + 0fh]
        mov byte ptr [ebp + 0fh], 3
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push esi
        lea eax, [ebp + 0fh]
        mov byte ptr [ebp + 0fh], 4
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov esi, dword ptr [ebp + 8]
        push 1
        mov al, byte ptr [esi + 2]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
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
        mov al, byte ptr [esi + 2ch]
        add esp, 48h
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov al, byte ptr [esi + 2dh]
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
        add esp, 48h
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
        add esp, 48h
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
        add esp, 48h
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
        mov al, byte ptr [esi + 1ch]
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [esi + 1ch]
        shr eax, 8
        mov byte ptr [ebp + 0fh], al
        lea eax, [ebp + 0fh]
        push 1
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 48h
        lea eax, [esi + 148h]
        push dword ptr [esi + 18h]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        cmp eax, dword ptr [esi + 18h]
        ; Exact mapped bytes 74 05: je 0x5884c2c3
        __asm _emit 0x74
        __asm _emit 0x05
        push 0ah
        pop eax
        ; Exact mapped bytes EB 1C: jmp 0x5884c2df
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x5884c2dd
        __asm _emit 0x74
        __asm _emit 0x14
        push dword ptr [esi + 1ch]
        push dword ptr [esi + 13ch]
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 0ch
        cmp eax, dword ptr [esi + 1ch]
        ; Exact mapped bytes 75 E1: jne 0x5884c2be
        __asm _emit 0x75
        __asm _emit 0xe1
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
