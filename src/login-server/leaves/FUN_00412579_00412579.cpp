// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412579 .. +0x1CF bytes.
extern "C" __declspec(naked) void FUN_00412579_00412579() {
    __asm {
        mov eax, 43a54eh
        ; Exact mapped bytes E8 85 D0 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 14h], esi
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        xor edi, edi
        mov dword ptr [ebp - 4], edi
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 10h], eax
        push 0ah
        lea ecx, [esi + 40h]
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes E8 51 B0 01 00: call 0x42d605
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        push 0ah
        lea ecx, [esi + 5ch]
        mov byte ptr [ebp - 4], 3
        ; Exact mapped bytes E8 43 B0 01 00: call 0x42d605
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 0d4h], eax
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 0d8h], eax
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 0dch], eax
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 104h], eax
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 108h], eax
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 10ch], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [esi], 43d5fch
        push 1
        mov dword ptr [esi + 8], eax
        pop eax
        mov byte ptr [ebp - 4], 0bh
        mov dword ptr [esi + 88h], eax
        or dword ptr [esi + 90h], 0ffffffffh
        ; Exact mapped bytes 66 83 4E 30 FF: or word ptr [esi + 0x30], 0xffff
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x30
        __asm _emit 0xff
        mov dword ptr [esi + 94h], edi
        mov dword ptr [esi + 8ch], eax
        mov dword ptr [esi + 2ch], edi
        mov dword ptr [esi + 0d0h], edi
        mov dword ptr [esi + 0cch], edi
        mov dword ptr [esi + 0e0h], edi
        mov dword ptr [esi + 0c0h], edi
        mov dword ptr [esi + 20h], edi
        mov dword ptr [esi + 24h], edi
        mov dword ptr [esi + 0a8h], edi
        mov dword ptr [esi + 0f8h], edi
        mov dword ptr [esi + 38h], edi
        mov dword ptr [esi + 3ch], edi
        mov dword ptr [esi + 0b4h], edi
        mov dword ptr [esi + 0fch], 19h
        mov dword ptr [esi + 100h], edi
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 0e8h], edi
        mov dword ptr [esi + 0a0h], 0fffffffeh
        mov dword ptr [esi + 9ch], edi
        mov dword ptr [esi + 28h], edi
        mov dword ptr [esi + 34h], edi
        mov dword ptr [esi + 1ch], eax
        mov dword ptr [esi + 0ech], edi
        mov dword ptr [esi + 0f0h], edi
        mov eax, dword ptr [esi + 8]
        lea ebx, [esi + 4]
        cmp eax, edi
        mov dword ptr [esi + 0f4h], edi
        mov dword ptr [esi + 78h], edi
        mov dword ptr [esi + 7ch], edi
        mov dword ptr [esi + 80h], edi
        mov dword ptr [esi + 84h], edi
        mov dword ptr [esi + 0bch], edi
        mov dword ptr [ebx], edi
        ; Exact mapped bytes 74 72: je 0x412756
        __asm _emit 0x74
        __asm _emit 0x72
        cmp dword ptr [eax + 4], edi
        ; Exact mapped bytes 74 6D: je 0x412756
        __asm _emit 0x74
        __asm _emit 0x6d
        push ebx
        mov byte ptr [ebp - 4], 0ch
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 80 9E 01 00: call 0x42c576
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CC 0C 00 00: call 0x4133ca
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 75 0C: jne 0x41270e
        __asm _emit 0x75
        __asm _emit 0x0c
        push dword ptr [ebx]
        push dword ptr [esi + 8]
        push -2
        ; Exact mapped bytes E8 08 F2 FF FF: call 0x411916
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 0fh
        ; Exact mapped bytes E8 8E 48 02 00: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        push esi
        add ecx, 1ch
        mov byte ptr [ebp - 4], 0dh
        ; Exact mapped bytes E8 0D AC 01 00: call 0x42d332
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        push 0fh
        mov dword ptr [ebp - 4], 0ch
        ; Exact mapped bytes E8 E0 48 02 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x412756
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0fh
        ; Exact mapped bytes E8 D7 48 02 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        xor edi, edi
        push edi
        push edi
        ; Exact mapped bytes E8 E2 CE 00 00: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
    }
}
