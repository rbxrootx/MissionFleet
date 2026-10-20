// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10005B80 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_10005b80_10005B80() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        test eax, eax
        mov ecx, dword ptr [esi + 0ch]
        mov dword ptr [esi + 24h], eax
        ; Exact mapped bytes 74 35: je 0x10005bc6
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes E8 3A 8A 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x8a
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 5B: jne 0x10005bf8
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0ch]
        mov edx, dword ptr [eax + 4]
        mov al, byte ptr [edx + 330h]
        mov dl, byte ptr [ecx + 330h]
        cmp al, dl
        ; Exact mapped bytes 75 40: jne 0x10005bf8
        __asm _emit 0x75
        __asm _emit 0x40
        push 1017f03ch
        ; Exact mapped bytes E8 FE 9B 0E 00: call 0x100ef7c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9b
        __asm _emit 0x0e
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 05 8A 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x8a
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 26: jne 0x10005bf8
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0ch]
        mov eax, dword ptr [edx + 4]
        mov dl, byte ptr [eax + 330h]
        mov al, byte ptr [ecx + 330h]
        cmp dl, al
        ; Exact mapped bytes 75 0A: jne 0x10005bf8
        __asm _emit 0x75
        __asm _emit 0x0a
        push 1017f030h
        ; Exact mapped bytes E8 C8 9B 0E 00: call 0x100ef7c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x9b
        __asm _emit 0x0e
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
