// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446F20 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_00446f20_00446F20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        mov dword ptr [ebp - 68h], ecx
        mov al, byte ptr [ebp - 8]
        mov byte ptr [ebp - 4], al
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 60h], edx
        mov al, byte ptr [ebp - 1ch]
        mov byte ptr [ebp - 18h], al
        mov ecx, dword ptr [ebp - 64h]
        sub ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F 8C 9B 00 00 00: jl 0x446ffa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 12: jmp 0x446f85
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 74 0C: je 0x446f99
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 20h]
        mov al, byte ptr [edx]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB DA: jmp 0x446f73
        __asm _emit 0xeb
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 4E: je 0x446ff8
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 08: jne 0x446fc7
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 6ch], edx
        ; Exact mapped bytes EB 17: jmp 0x446fde
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 88 EC 01 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 79: jmp 0x447073
        __asm _emit 0xeb
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 14h], edx
        mov al, byte ptr [ebp - 3ch]
        mov byte ptr [ebp - 38h], al
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB 12: jmp 0x447035
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 40h]
        add edx, 1
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 48h]
        add eax, 1
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 74 0C: je 0x447049
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 40h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB DA: jmp 0x447023
        __asm _emit 0xeb
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 58h], eax
        mov cl, byte ptr [ebp - 54h]
        mov byte ptr [ebp - 50h], cl
        lea edx, [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 5D 12 00 00: call 0x4482d0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
