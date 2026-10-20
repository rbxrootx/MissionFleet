// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004396D0 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_004396d0_004396D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        mov dword ptr [ebp - 74h], ecx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 6ch], eax
        mov cl, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 8], cl
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 64h], eax
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 1ch], cl
        mov edx, dword ptr [ebp - 68h]
        sub edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 8C 9B 00 00 00: jl 0x4397bb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 12: jmp 0x439746
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 74 0C: je 0x43975a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 24h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB DA: jmp 0x439734
        __asm _emit 0xeb
        __asm _emit 0xda
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 4E: je 0x4397b9
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 4]
        sub edx, dword ptr [ebp + 0ch]
        add edx, 1
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 08: jne 0x439788
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 17: jmp 0x43979f
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 C7 C4 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx + 4]
        sub eax, ecx
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes EB 79: jmp 0x439834
        __asm _emit 0xeb
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 18h], eax
        mov cl, byte ptr [ebp - 40h]
        mov byte ptr [ebp - 3ch], cl
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes EB 12: jmp 0x4397f6
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 44h]
        add eax, 1
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 1
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 44h]
        cmp edx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 74 0C: je 0x43980a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp - 44h]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        ; Exact mapped bytes EB DA: jmp 0x4397e4
        __asm _emit 0xeb
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 5ch], ecx
        mov dl, byte ptr [ebp - 58h]
        mov byte ptr [ebp - 54h], dl
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 9C EA 00 00: call 0x4482d0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 74h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
