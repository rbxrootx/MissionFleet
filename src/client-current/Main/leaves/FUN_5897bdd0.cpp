// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897BDD0 .. +0x19F bytes.
extern "C" __declspec(naked) void FUN_5897bdd0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esi + 13ch]
        mov eax, dword ptr [edi + 10h]
        sub eax, 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x5897bebd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 19: je 0x5897be04
        __asm _emit 0x74
        __asm _emit 0x19
        dec eax
        ; Exact mapped bytes 74 51: je 0x5897be3f
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [esi]
        push esi
        mov dword ptr [eax + 14h], 30h
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        add esp, 4
        ; Exact mapped bytes E9 46 01 00 00: jmp 0x5897bf4a
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 66 01 00 00: call 0x5897bf70
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 60 02 00 00: call 0x5897c070
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 12ch]
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 7E: jne 0x5897be9b
        __asm _emit 0x75
        __asm _emit 0x7e
        mov eax, dword ptr [esi + 134h]
        test eax, eax
        ; Exact mapped bytes 74 74: je 0x5897be9b
        __asm _emit 0x74
        __asm _emit 0x74
        mov al, byte ptr [esi + 0b1h]
        test al, al
        ; Exact mapped bytes 75 6A: jne 0x5897be9b
        __asm _emit 0x75
        __asm _emit 0x6a
        mov eax, dword ptr [edi + 14h]
        mov dword ptr [edi + 10h], 2
        inc eax
        mov dword ptr [edi + 14h], eax
        mov al, byte ptr [esi + 0b2h]
        test al, al
        ; Exact mapped bytes 75 0F: jne 0x5897be58
        __asm _emit 0x75
        __asm _emit 0x0f
        push esi
        ; Exact mapped bytes E8 21 01 00 00: call 0x5897bf70
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 1B 02 00 00: call 0x5897c070
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [esi + 15ch]
        push 0
        push esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [esi + 148h]
        push 2
        push esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov eax, dword ptr [edi + 1ch]
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x5897be85
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 14ch]
        push esi
        ; Exact mapped bytes FF 51 04: call dword ptr [ecx + 4]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x04
        add esp, 4
        mov edx, dword ptr [esi + 14ch]
        push esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        add esp, 4
        mov byte ptr [edi + 0ch], 0
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x5897bf4a
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 15ch]
        push 1
        push esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 148h]
        push 2
        push esi
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        add esp, 10h
        mov byte ptr [edi + 0ch], 0
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x5897bf4a
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 AD 00 00 00: call 0x5897bf70
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 A7 01 00 00: call 0x5897c070
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 0b0h]
        add esp, 8
        test al, al
        ; Exact mapped bytes 75 20: jne 0x5897bef6
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [esi + 150h]
        push esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [esi + 154h]
        push esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 144h]
        push 0
        push esi
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        add esp, 10h
        mov edx, dword ptr [esi + 158h]
        push esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov cl, byte ptr [esi + 0b2h]
        mov eax, dword ptr [esi + 15ch]
        push ecx
        push esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 18h]
        xor eax, eax
        mov edx, dword ptr [esi + 148h]
        cmp ecx, 1
        setle al
        dec eax
        and eax, 3
        push eax
        push esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 140h]
        push 0
        push esi
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        mov al, byte ptr [esi + 0b2h]
        add esp, 1ch
        test al, al
        ; Exact mapped bytes 74 06: je 0x5897bf46
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [edi + 0ch], 0
        ; Exact mapped bytes EB 04: jmp 0x5897bf4a
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [edi + 0ch], 1
        mov edx, dword ptr [edi + 18h]
        mov eax, dword ptr [edi + 14h]
        dec edx
        cmp eax, edx
        sete cl
        mov byte ptr [edi + 0dh], cl
        mov ecx, dword ptr [esi + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x5897bf6c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [edi + 18h]
        mov dword ptr [edx + 10h], eax
        pop edi
        pop esi
        ret
    }
}
