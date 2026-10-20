// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EB4A0 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_588eb4a0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x588eb546
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x588eb4e5
        __asm _emit 0x74
        __asm _emit 0x2f
        movzx ecx, word ptr [eax + 0ch]
        imul ecx, dword ptr [eax + 8]
        dec ecx
        xor eax, eax
        cmp dword ptr [esi + 50h], ecx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x588eb4e5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, esi
        ; Exact mapped bytes E8 4E 77 01 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 97 77 01 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ret
        mov ecx, dword ptr [esi + 58h]
        cmp ecx, dword ptr [esi + 5ch]
        ; Exact mapped bytes 7C 05: jl 0x588eb4f2
        __asm _emit 0x7c
        __asm _emit 0x05
        inc dword ptr [esi + 50h]
        ; Exact mapped bytes EB 0C: jmp 0x588eb4fe
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 50h]
        cmp eax, 69h
        ; Exact mapped bytes 7D 04: jge 0x588eb4fe
        __asm _emit 0x7d
        __asm _emit 0x04
        inc eax
        mov dword ptr [esi + 50h], eax
        inc ecx
        mov dword ptr [esi + 58h], ecx
        push -1
        mov ecx, esi
        ; Exact mapped bytes E8 95 79 01 00: call 0x58902ea0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 26 17 09 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x17
        __asm _emit 0x09
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x588eb51c
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3C 79 01 00: call 0x58902e60
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x588eb546
        __asm _emit 0x74
        __asm _emit 0x1b
        push edi
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x588eb548
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x588eb530
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
