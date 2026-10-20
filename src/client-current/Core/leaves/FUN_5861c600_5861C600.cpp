// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861C600 .. +0x1B3 bytes.
extern "C" __declspec(naked) void FUN_5861c600_5861C600() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58886ffbh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
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
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + ecx + 64h]
        mov dword ptr [edx + 70h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + eax + 74h]
        mov dword ptr [ecx + 80h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0d8h], 0
        ; Exact mapped bytes 75 6A: jne 0x5861c6cb
        __asm _emit 0x75
        __asm _emit 0x6a
        push 108h
        ; Exact mapped bytes E8 99 49 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x49
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 2D: je 0x5861c6ab
        __asm _emit 0x74
        __asm _emit 0x2d
        push 40h
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        sub eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 37h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7A 91 04 00: call 0x58665820
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861c6b2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 0d8h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0dch], 0
        ; Exact mapped bytes 75 58: jne 0x5861c72f
        __asm _emit 0x75
        __asm _emit 0x58
        push 18ch
        ; Exact mapped bytes E8 23 49 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x49
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1B: je 0x5861c70f
        __asm _emit 0x74
        __asm _emit 0x1b
        push 40h
        push 0
        push 0
        push 64h
        push 64h
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 06 D4 03 00: call 0x58659b10
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd4
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861c716
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 0dch], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0e0h], 0
        ; Exact mapped bytes 75 5E: jne 0x5861c799
        __asm _emit 0x75
        __asm _emit 0x5e
        push 0a4h
        ; Exact mapped bytes E8 BF 48 21 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 21: je 0x5861c779
        __asm _emit 0x74
        __asm _emit 0x21
        push 40h
        push 0
        push 0
        push 0beh
        push 0d2h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0C 6C 04 00: call 0x58663380
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861c780
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 34h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + 0e0h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 ED 97 E6 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x97
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
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
