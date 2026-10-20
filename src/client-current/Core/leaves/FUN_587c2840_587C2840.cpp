// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C2840 .. +0x291 bytes.
extern "C" __declspec(naked) void FUN_587c2840_587C2840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, 23h
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0bh
        ; Exact mapped bytes 0F 87 5E 02 00 00: ja 0x587c2ac4
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 587c2ae4h]
        ; Exact mapped bytes FF 24 8D D4 2A 7C 58: jmp dword ptr [ecx*4 + 0x587c2ad4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x2a
        __asm _emit 0x7c
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 90h], eax
        ; Exact mapped bytes 0F 8D 06 01 00 00: jge 0x587c299e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        ; Exact mapped bytes 0F BE 0C 08: movsx ecx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x08
        and ecx, 80h
        ; Exact mapped bytes 75 1E: jne 0x587c28d4
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 0F BE 44 02 FF: movsx eax, byte ptr [edx + eax - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0xff
        and eax, 80h
        ; Exact mapped bytes 74 66: je 0x587c293a
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        sub edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 84h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 09: jmp 0x587c2900
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 84h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7F 21: jg 0x587c2938
        __asm _emit 0x7f
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 8]
        mov dl, byte ptr [edx + esi + 2]
        mov byte ptr [ecx + eax], dl
        ; Exact mapped bytes EB BF: jmp 0x587c28f7
        __asm _emit 0xeb
        __asm _emit 0xbf
        ; Exact mapped bytes EB 64: jmp 0x587c299e
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 88h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x587c2966
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 84h]
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 7F 21: jg 0x587c299e
        __asm _emit 0x7f
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov edx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 0ch]
        mov cl, byte ptr [ecx + esi + 1]
        mov byte ptr [eax + edx], cl
        ; Exact mapped bytes EB BF: jmp 0x587c295d
        __asm _emit 0xeb
        __asm _emit 0xbf
        ; Exact mapped bytes E9 21 01 00 00: jmp 0x587c2ac4
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 90h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 0
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x587c2ac4
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 84h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], edx
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 90h]
        sub edx, dword ptr [ecx + 94h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 94h]
        push ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 50h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 9A 3F CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x3f
        __asm _emit 0xcc
        __asm _emit 0xff
        mov esi, eax
        add esi, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D 2E CD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x2e
        __asm _emit 0xcd
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 8C 89 00 00 00: jl 0x587c2ac4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes 0F BE 14 0A: movsx edx, byte ptr [edx + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x0a
        test edx, edx
        ; Exact mapped bytes 7D 17: jge 0x587c2a6c
        __asm _emit 0x7d
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        add ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 94h], ecx
        ; Exact mapped bytes EB 15: jmp 0x587c2a81
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 94h], ecx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 90h]
        sub eax, dword ptr [edx + 94h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 94h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 50h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x587c2a1b
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
