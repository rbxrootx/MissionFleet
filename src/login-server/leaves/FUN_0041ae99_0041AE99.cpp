// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041AE99 .. +0x1A2 bytes.
extern "C" __declspec(naked) void FUN_0041ae99_0041AE99() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes E8 91 59 01 00: call 0x430840
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        mov dword ptr [ebp - 8], edi
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes FF 15 1C C4 43 00: call dword ptr [0x43c41c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        push 0
        inc eax
        pop ebx
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 74 51: je 0x41af1b
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 1C C5 43 00: call dword ptr [0x43c51c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 02 44 01 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        push ecx
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF 15 90 C4 43 00: call dword ptr [0x43c490]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 24h]
        push eax
        push dword ptr [edi + 1ch]
        ; Exact mapped bytes FF 15 90 C4 43 00: call dword ptr [0x43c490]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        push ebx
        sub eax, dword ptr [ebp - 30h]
        push ebx
        push ebx
        mov ecx, edi
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov eax, dword ptr [ebp - 2ch]
        sub eax, dword ptr [ebp - 34h]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        ; Exact mapped bytes E8 85 33 01 00: call 0x42e297
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov ecx, edi
        ; Exact mapped bytes E8 0C 34 01 00: call 0x42e327
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        lea edi, [esi + 48h]
        push edi
        push 43ecc0h
        mov eax, dword ptr [eax + 4ch]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 5C: jl 0x41af8f
        __asm _emit 0x7c
        __asm _emit 0x5c
        mov eax, dword ptr [edi]
        lea edi, [esi + 4ch]
        push edi
        push 4402f8h
        mov ecx, dword ptr [eax]
        push ebx
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        cmp dword ptr [edi], ebx
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 07: jne 0x41af53
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 80004003h
        cmp dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 0F 8D A4 00 00 00: jge 0x41b000
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], ebx
        ; Exact mapped bytes 74 26: je 0x41af87
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 18h]
        push ebx
        sub eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 8]
        push eax
        mov eax, dword ptr [ebp - 1ch]
        sub eax, dword ptr [ebp - 24h]
        push eax
        push dword ptr [ebp - 20h]
        push dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 19 33 01 00: call 0x42e297
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ebx
        ; Exact mapped bytes E8 A0 33 01 00: call 0x42e327
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x41b036
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        lea edx, [ebp - 0ch]
        push edx
        push 43ecd0h
        mov eax, dword ptr [eax + 4ch]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        cmp eax, ebx
        ; Exact mapped bytes 0F 8C 8B 00 00 00: jl 0x41b036
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        lea edx, [ebp - 10h]
        push edx
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 10h]
        cmp eax, ebx
        ; Exact mapped bytes 75 07: jne 0x41afcf
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 80004005h
        ; Exact mapped bytes EB 67: jmp 0x41b036
        __asm _emit 0xeb
        __asm _emit 0x67
        mov ecx, dword ptr [eax]
        lea edi, [esi + 8]
        push edi
        push 440468h
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        cmp eax, ebx
        ; Exact mapped bytes 7C 46: jl 0x41b036
        __asm _emit 0x7c
        __asm _emit 0x46
        mov edi, dword ptr [edi]
        lea ecx, [esi + 0ch]
        push ecx
        push 440458h
        mov eax, dword ptr [edi]
        push edi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, esi
        ; Exact mapped bytes E8 9D 00 00 00: call 0x41b0a4
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], ebx
        mov esi, eax
        ; Exact mapped bytes 74 26: je 0x41b034
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 18h]
        push ebx
        sub eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 8]
        push eax
        mov eax, dword ptr [ebp - 1ch]
        sub eax, dword ptr [ebp - 24h]
        push eax
        push dword ptr [ebp - 20h]
        push dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6C 32 01 00: call 0x42e297
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ebx
        ; Exact mapped bytes E8 F3 32 01 00: call 0x42e327
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
