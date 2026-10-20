// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896C2B0 .. +0x1AD bytes.
extern "C" __declspec(naked) void FUN_5896c2b0() {
    __asm {
        sub esp, 14h
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        lea edx, [esp + 20h]
        push edx
        lea edx, [esp + 1ch]
        push edx
        lea edx, [esp + 18h]
        push edx
        mov esi, ecx
        mov eax, dword ptr [esi + 18h]
        lea edx, [esp + 20h]
        push edx
        mov edx, dword ptr [esi + 44h]
        push edx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [esp + 28h], ebx
        mov dword ptr [esp + 2ch], ebx
        mov dword ptr [esp + 30h], ebx
        mov ecx, dword ptr [eax]
        push edx
        push eax
        mov eax, dword ptr [ecx + 2ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 7D 36: jge 0x5896c328
        __asm _emit 0x7d
        __asm _emit 0x36
        ; Exact mapped bytes 8B 3D 54 C1 98 58: mov edi, dword ptr [0x5898c154]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 1
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [eax]
        push ebx
        lea edx, [esp + 20h]
        push edx
        lea edx, [esp + 1ch]
        push edx
        lea edx, [esp + 18h]
        push edx
        lea edx, [esp + 20h]
        push edx
        mov edx, dword ptr [esi + 44h]
        push edx
        mov edx, dword ptr [esi + 54h]
        push edx
        push eax
        mov eax, dword ptr [ecx + 2ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 7C D0: jl 0x5896c2f8
        __asm _emit 0x7c
        __asm _emit 0xd0
        cmp dword ptr [esp + 14h], ebx
        ; Exact mapped bytes 74 09: je 0x5896c337
        __asm _emit 0x74
        __asm _emit 0x09
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 14h
        ret
        push ebp
        cmp dword ptr [esi + 50h], ebx
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x5896c3d2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        sub eax, dword ptr [esi + 38h]
        mov edi, dword ptr [esp + 10h]
        cmp eax, edi
        ; Exact mapped bytes 77 02: ja 0x5896c351
        __asm _emit 0x77
        __asm _emit 0x02
        mov edi, eax
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + 3ch]
        ; Exact mapped bytes 8B 2D 90 C1 98 58: mov ebp, dword ptr [0x5898c190]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x90
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push ebx
        lea ecx, [esp + 20h]
        push ecx
        push edi
        push edx
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x5896c3e4
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [esp + 10h]
        add dword ptr [esi + 38h], edi
        cmp edi, eax
        ; Exact mapped bytes 0F 83 90 00 00 00: jae 0x5896c40c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 20h], ebx
        ; Exact mapped bytes 74 6D: je 0x5896c3ee
        __asm _emit 0x74
        __asm _emit 0x6d
        mov edx, dword ptr [esi + 30h]
        mov ecx, dword ptr [esi + 34h]
        sub eax, edi
        sub ecx, edx
        mov ebx, eax
        cmp ecx, eax
        ; Exact mapped bytes 77 02: ja 0x5896c393
        __asm _emit 0x77
        __asm _emit 0x02
        mov ebx, ecx
        mov eax, dword ptr [esi + 3ch]
        push 0
        push 0
        push edx
        push eax
        ; Exact mapped bytes FF 15 64 C1 98 58: call dword ptr [0x5898c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, dword ptr [esp + 14h]
        push 0
        lea ecx, [esp + 20h]
        push ecx
        mov ecx, dword ptr [esi + 3ch]
        push ebx
        lea eax, [edi + edx]
        push eax
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5896c3e4
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [esi + 30h]
        mov eax, dword ptr [esp + 10h]
        add edx, ebx
        add edi, ebx
        mov dword ptr [esi + 38h], edx
        cmp edi, eax
        ; Exact mapped bytes 72 B3: jb 0x5896c381
        __asm _emit 0x72
        __asm _emit 0xb3
        xor ebx, ebx
        ; Exact mapped bytes EB 3A: jmp 0x5896c40c
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        push ecx
        push ebx
        push edx
        ; Exact mapped bytes E8 66 08 01 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x5896c405
        __asm _emit 0xeb
        __asm _emit 0x21
        pop ebp
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 14h
        ret
        sub eax, edi
        push eax
        mov eax, dword ptr [esp + 18h]
        add edi, eax
        push ebx
        push edi
        ; Exact mapped bytes E8 4A 08 01 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 50h], 1
        mov eax, dword ptr [esp + 1ch]
        add esp, 0ch
        mov ecx, dword ptr [esi + 18h]
        mov edx, dword ptr [ecx]
        push ebx
        push ebx
        push eax
        mov eax, dword ptr [esp + 20h]
        push eax
        push ecx
        mov ecx, dword ptr [edx + 4ch]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        cmp dword ptr [esi + 50h], ebx
        ; Exact mapped bytes 74 1D: je 0x5896c441
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [esi + 38h]
        cmp edx, dword ptr [esi + 34h]
        ; Exact mapped bytes 72 15: jb 0x5896c441
        __asm _emit 0x72
        __asm _emit 0x15
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 48h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 28h]
        push eax
        ; Exact mapped bytes FF 15 C0 C0 98 58: call dword ptr [0x5898c0c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 54h]
        add eax, dword ptr [esp + 10h]
        xor edx, edx
        div dword ptr [esi + 14h]
        pop ebp
        pop edi
        mov eax, 1
        mov dword ptr [esi + 54h], edx
        pop esi
        pop ebx
        add esp, 14h
        ret
    }
}
