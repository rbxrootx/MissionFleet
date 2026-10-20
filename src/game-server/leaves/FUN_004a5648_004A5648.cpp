// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5648 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_004a5648_004A5648() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fcafh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 50h
        push esi
        mov eax, dword ptr [ebp + 8]
        sub eax, 40h
        mov dword ptr [ebp - 54h], eax
        push 0cdh
        push 5d0270h
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes E8 E0 5A 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x5a
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp - 54h]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 18: je 0x4a56b9
        __asm _emit 0x74
        __asm _emit 0x18
        lea ecx, [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp - 54h]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0A: jne 0x4a56c9
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 8000ffffh
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x4a5793
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 1C 24 0D 00: call 0x577aed
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x24
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 48h], 1
        mov dword ptr [ebp - 14h], 10h
        lea ecx, [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 17 FE FF FF: call 0x4a550d
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x4a5715
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 58h], 8000ffffh
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 0B 25 0D 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x25
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        ; Exact mapped bytes EB 7E: jmp 0x4a5793
        __asm _emit 0xeb
        __asm _emit 0x7e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 23: je 0x4a573e
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 54h]
        cmp dword ptr [eax + 24h], -1
        ; Exact mapped bytes 75 0F: jne 0x4a5733
        __asm _emit 0x75
        __asm _emit 0x0f
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 DE EF 08 00: call 0x53470a
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 0B: jmp 0x4a573e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [edx], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 36: je 0x4a577a
        __asm _emit 0x74
        __asm _emit 0x36
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 09 F0 08 00: call 0x534755
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 0ffffh
        ; Exact mapped bytes 75 0B: jne 0x4a575e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 0ffffh
        ; Exact mapped bytes EB 1C: jmp 0x4a577a
        __asm _emit 0xeb
        __asm _emit 0x1c
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 EF EF 08 00: call 0x534755
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 CC EF 08 00: call 0x53473c
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xef
        __asm _emit 0x08
        __asm _emit 0x00
        sub esi, eax
        add esi, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], esi
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 8B 24 0D 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x24
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
