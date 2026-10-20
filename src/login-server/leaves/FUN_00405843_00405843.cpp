// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00405843 .. +0x2FA bytes.
extern "C" __declspec(naked) void FUN_00405843_00405843() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439461h
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
        sub esp, 0ach
        mov dword ptr [ebp - 90h], ecx
        push 0
        ; Exact mapped bytes E8 C2 03 00 00: call 0x405c30
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 94h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov ecx, eax
        ; Exact mapped bytes E8 9B 8A 02 00: call 0x42e327
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 18h], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 0E EA FF FF: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 0c0000000h
        mov eax, dword ptr [ebp - 90h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 50 C2 43 00: call dword ptr [0x43c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], -1
        ; Exact mapped bytes 0F 84 20 02 00 00: je 0x405af8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 5
        ; Exact mapped bytes E8 51 03 00 00: call 0x405c30
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov ecx, eax
        add ecx, 7ch
        ; Exact mapped bytes E8 27 8A 02 00: call 0x42e327
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 90h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 3C C2 43 00: call dword ptr [0x43c23c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x405927
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [ebp - 24h]
        cmp eax, dword ptr [edx + 138h]
        ; Exact mapped bytes 0F 8D B2 01 00 00: jge 0x405aee
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ecx + 140h]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        mov edx, dword ptr [ecx + 138h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        push 448e24h
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 67 71 02 00: call 0x42cadf
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 18h
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 88h], esp
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 93 7F 02 00: call 0x42d920
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 9ch]
        mov dword ptr [ebp - 0a0h], eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 88 02 00 00: call 0x405c30
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov ecx, eax
        add ecx, 7ch
        mov byte ptr [ebp - 4], 0
        ; Exact mapped bytes E8 03 02 00 00: call 0x405bd0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        ; Exact mapped bytes E8 52 02 00 00: call 0x405c30
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], eax
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        mov ecx, eax
        add ecx, 0d8h
        ; Exact mapped bytes E8 3E 02 00 00: call 0x405c40
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], -1
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x405ae1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], -1
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x405ae1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 1ch]
        push eax
        push 5ch
        lea ecx, [ebp - 84h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 54 C2 43 00: call dword ptr [0x43c254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 84h]
        push eax
        push 448e34h
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 89 70 02 00: call 0x42cadf
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 8ch], esp
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 B5 7E 02 00: call 0x42d920
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], eax
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 0b0h], eax
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes E8 AA 01 00 00: call 0x405c30
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, dword ptr [ebp - 0b4h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov ecx, eax
        add ecx, 7ch
        mov byte ptr [ebp - 4], 0
        ; Exact mapped bytes E8 C5 00 00 00: call 0x405b70
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov eax, dword ptr [ebp - 28h]
        add eax, 48h
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 48 C2 43 00: call dword ptr [0x43c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 1ch]
        push edx
        push 4
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 4C C2 43 00: call dword ptr [0x43c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes E9 2B FF FF FF: jmp 0x405a0c
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes FF 15 40 C2 43 00: call dword ptr [0x43c240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E9 30 FE FF FF: jmp 0x40591e
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 31 01 00 00: call 0x405c30
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0b8h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov ecx, eax
        add ecx, 7ch
        ; Exact mapped bytes E8 07 88 02 00: call 0x42e327
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 7C 80 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
