// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437E60 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_00437e60_00437E60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 74 29: je 0x437eb9
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 74 1E: je 0x437eb9
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 24h]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB CF: jmp 0x437e88
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 75 61: jne 0x437f22
        __asm _emit 0x75
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 4E: je 0x437f20
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 4]
        sub edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 08: jne 0x437eef
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 17: jmp 0x437f06
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 60 DD 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 4]
        sub eax, ecx
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes EB 1A: jmp 0x437f3c
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov al, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 1ch], al
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 44 FC 00 00: call 0x447b80
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
