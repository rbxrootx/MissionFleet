// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58738020 .. +0x24F bytes.
extern "C" __declspec(naked) void FUN_58738020_58738020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 3B EC FF: call 0x585fbb70
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x3b
        __asm _emit 0xec
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 64: je 0x587380a6
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        xor edx, edx
        mov ecx, 3ch
        div ecx
        mov dword ptr [ebp - 0ch], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        xor edx, edx
        mov ecx, 3ch
        div ecx
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c4h]
        ; Exact mapped bytes E8 5D 21 D7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 588b47bch
        push 80h
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 4F 8D D7 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x8d
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB 6E: jmp 0x58738114
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0e4h]
        ; Exact mapped bytes E8 C3 C8 D4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc8
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 47: jne 0x5873810b
        __asm _emit 0x75
        __asm _emit 0x47
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0e4h]
        ; Exact mapped bytes E8 B5 F0 D9 FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf0
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        ; Exact mapped bytes E8 F4 20 D7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        push 588b47c4h
        push 80h
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 EA 8C D7 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 09: jmp 0x58738114
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0e4h]
        ; Exact mapped bytes E8 55 C8 D4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc8
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 47: jne 0x58738179
        __asm _emit 0x75
        __asm _emit 0x47
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 47 F0 D9 FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf0
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c8h]
        ; Exact mapped bytes E8 86 20 D7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        push 588b47c8h
        push 80h
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 7C 8C D7 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 09: jmp 0x58738182
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 E8 C7 D4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 42: jne 0x587381e1
        __asm _emit 0x75
        __asm _emit 0x42
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        ; Exact mapped bytes E8 DB EF D9 FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xef
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0dch]
        ; Exact mapped bytes E8 1A 20 D7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x20
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        push 588b47cch
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes EB 09: jmp 0x587381ea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 7F C7 D4 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xc7
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 47: jne 0x5873824f
        __asm _emit 0x75
        __asm _emit 0x47
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 71 EF D9 FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xef
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0e0h]
        ; Exact mapped bytes E8 B0 1F D7 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x1f
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        push 588b47d0h
        push 80h
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 A6 8B D7 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x8b
        __asm _emit 0xd7
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 09: jmp 0x58738258
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 75 0D: jne 0x5873826b
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
