// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585DF0E0 .. +0x1D1 bytes.
extern "C" __declspec(naked) void FUN_585df0e0_585DF0E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58885d67h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 34h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 10694h]
        mov ecx, dword ptr [ebp - 10h]
        add eax, dword ptr [ecx + 1068ch]
        xor edx, edx
        mov ecx, 1eh
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 77 01 00 00: jne 0x585df2a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2210ch]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 71 CB EA FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 96h
        div ecx
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 85 4D 01 00 00: jne 0x585df2a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 21aech], 2
        ; Exact mapped bytes 0F 8D 3D 01 00 00: jge 0x585df2a2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        imul ecx, dword ptr [eax + 2210ch], 0ah
        push ecx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 36 CB EA FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 3
        div ecx
        mov dword ptr [ebp - 38h], edx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2210ch]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 16 CB EA FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xcb
        __asm _emit 0xea
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 1770h
        div ecx
        add edx, 0fa0h
        mov dword ptr [ebp - 40h], edx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2210ch]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 F0 CA EA FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xca
        __asm _emit 0xea
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 0dach
        div ecx
        add edx, 5dch
        mov dword ptr [ebp - 3ch], edx
        push 568h
        ; Exact mapped bytes E8 28 1E 25 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x1e
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 52: je 0x585df241
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 77 EA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x77
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 21aech]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 21ae8h]
        mov dword ptr [ebp - 2ch], edx
        push 2710h
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C4 95 16 00: call 0x58748800
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x95
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x585df248
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 30h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 40h]
        push ecx
        push 64h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 57 96 16 00: call 0x587488c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 21ae8h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 21aech]
        push edx
        push 0
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 23 10 FE FF: call 0x585c02b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 21aech]
        add edx, 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 21aech], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
