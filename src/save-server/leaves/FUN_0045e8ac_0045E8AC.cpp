// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E8AC .. +0x272 bytes.
extern "C" __declspec(naked) void FUN_0045e8ac_0045E8AC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        push 678864h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B 9F 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        push ecx
        push 67887ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 9F 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E7 A0 0C 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        push 678884h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 9F 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 10 D4 0E 00: call 0x54bd00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        shl eax, 2
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 9D 76 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], esp
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        shl eax, 2
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 84 76 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], esp
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        shl eax, 2
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 6B 76 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], esp
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x45e950
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 7E: jge 0x45e9d6
        __asm _emit 0x7d
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx*4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3B 06 00 00: call 0x45efac
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4A 06 00 00: call 0x45efd4
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 678898h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        push 678894h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        push 678890h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 9E 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 73 A0 0C 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 88 9E 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 65 A0 0C 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7A 9E 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x45e947
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A 73 0C 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 2B 01 00 00: jle 0x45eb11
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x45e9f8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 14: jge 0x45ea14
        __asm _emit 0x7d
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [esi + ecx*4]
        mov dword ptr [eax + edx*4], ecx
        ; Exact mapped bytes EB DB: jmp 0x45e9ef
        __asm _emit 0xeb
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 0F 8F ED 00 00 00: jg 0x45eb11
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 67889ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 9E 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x45ea43
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 2C: jge 0x45ea77
        __asm _emit 0x7d
        __asm _emit 0x2c
        push 6788a4h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + ecx*4]
        push eax
        push 6788a0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 9D 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C1 9F 0C 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D6 9D 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB C3: jmp 0x45ea3a
        __asm _emit 0xeb
        __asm _emit 0xc3
        push 6788a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 9D 0C 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x9d
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5C FB FF FF: call 0x45e5f1
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 1
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx*4]
        add ecx, 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + edx*4], ecx
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4]
        cmp ecx, dword ptr [esi + eax*4]
        ; Exact mapped bytes 7E 28: jle 0x45eb00
        __asm _emit 0x7e
        __asm _emit 0x28
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 22: jle 0x45eb00
        __asm _emit 0x7e
        __asm _emit 0x22
        mov dword ptr [ebp - 10h], 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [esi + ecx*4]
        mov dword ptr [eax + edx*4], ecx
        mov edx, dword ptr [ebp - 14h]
        sub edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 06: je 0x45eb0c
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 9C: jge 0x45eaa8
        __asm _emit 0x7d
        __asm _emit 0x9c
        ; Exact mapped bytes E9 03 FF FF FF: jmp 0x45ea14
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        lea esp, [ebp - 28h]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
