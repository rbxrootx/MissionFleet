// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433694 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_00433694_00433694() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        push 118h
        push 0
        mov edi, ecx
        push esi
        ; Exact mapped bytes E8 31 B4 FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [esi + 12h]
        push 104h
        push dword ptr [edi + 0ch]
        push eax
        ; Exact mapped bytes FF 15 28 C2 43 00: call dword ptr [0x43c228]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        or ebx, 0ffffffffh
        cmp eax, ebx
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x433764
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        lea ecx, [ebp - 10h]
        push ecx
        lea ecx, [ebp - 8]
        push ecx
        push eax
        ; Exact mapped bytes FF 15 10 C1 43 00: call dword ptr [0x43c110]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4336fb
        __asm _emit 0x74
        __asm _emit 0x12
        push 0
        push dword ptr [edi + 4]
        ; Exact mapped bytes FF 15 0C C1 43 00: call dword ptr [0x43c10c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes 75 04: jne 0x4336ff
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 68: jmp 0x433767
        __asm _emit 0xeb
        __asm _emit 0x68
        mov edi, dword ptr [edi + 0ch]
        cmp dword ptr [edi - 8], 0
        ; Exact mapped bytes 75 06: jne 0x43370e
        __asm _emit 0x75
        __asm _emit 0x06
        and byte ptr [esi + 10h], 0
        ; Exact mapped bytes EB 0E: jmp 0x43371c
        __asm _emit 0xeb
        __asm _emit 0x0e
        push edi
        ; Exact mapped bytes FF 15 08 C1 43 00: call dword ptr [0x43c108]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 74 EF: je 0x433708
        __asm _emit 0x74
        __asm _emit 0xef
        mov byte ptr [esi + 10h], al
        lea eax, [ebp - 8]
        push ebx
        push eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 AD 94 FF FF: call 0x42cbd6
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push ebx
        mov dword ptr [esi], eax
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 9C 94 FF FF: call 0x42cbd6
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push ebx
        mov dword ptr [esi + 8], eax
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 8A 94 FF FF: call 0x42cbd6
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 4], eax
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 75 02: jne 0x433758
        __asm _emit 0x75
        __asm _emit 0x02
        mov dword ptr [esi], eax
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 75 06: jne 0x433764
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esi + 8], eax
        push 1
        pop eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
