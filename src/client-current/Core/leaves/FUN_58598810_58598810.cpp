// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58598810 .. +0x1DC bytes.
extern "C" __declspec(naked) void FUN_58598810_58598810() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 1D: je 0x5859883f
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 18 88 29 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x88
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], 0
        mov eax, dword ptr [ebp + 0ch]
        imul eax, dword ptr [ebp + 10h]
        mov edx, 8
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 E7 87 29 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x87
        __asm _emit 0x29
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 0a0h]
        cdq
        idiv dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0a4h]
        cdq
        idiv dword ptr [ebp + 10h]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + 0a8h]
        cdq
        idiv dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 0ach]
        cdq
        idiv dword ptr [ebp + 10h]
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0a0h]
        cmp ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes 7D 08: jge 0x585988c5
        __asm _emit 0x7d
        __asm _emit 0x08
        lea edx, [ebp - 30h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 06: jmp 0x585988cb
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 28h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        cdq
        sub eax, edx
        sar eax, 1
        imul ecx, eax
        mov eax, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 4]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        cdq
        sub eax, edx
        sar eax, 1
        imul esi, eax
        add ecx, esi
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5859891c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 8D BA 00 00 00: jge 0x585989e2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        imul edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax + 80h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax]
        mov dword ptr [eax + ecx*8], edx
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        sub ecx, dword ptr [edx + 84h]
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx]
        mov dword ptr [edx + eax*8 + 4], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58598979
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7D 5C: jge 0x585989dd
        __asm _emit 0x7d
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 4]
        imul edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ebp - 30h]
        imul eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ecx + edx*8]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx]
        lea ecx, [edx + ecx*8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + edx*8], eax
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        imul ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [edx + eax*8 + 4]
        sub edx, ecx
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx]
        lea eax, [ecx + eax*8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + ecx*8 + 4], edx
        ; Exact mapped bytes EB 93: jmp 0x58598970
        __asm _emit 0xeb
        __asm _emit 0x93
        ; Exact mapped bytes E9 31 FF FF FF: jmp 0x58598913
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
