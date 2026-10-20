// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436BD7 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_00436bd7_00436BD7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 D8 C0 43 00: call dword ptr [0x43c0d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 1A: je 0x436c08
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 8]
        lea ebx, [edi + 8]
        cmp eax, dword ptr [ebx]
        ; Exact mapped bytes 0F 8C B2 00 00 00: jl 0x436cae
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x436cae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 42: jmp 0x436c4a
        __asm _emit 0xeb
        __asm _emit 0x42
        push 10h
        ; Exact mapped bytes E8 8E FD FF FF: call 0x43699d
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x436c1d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [eax], 43ea1ch
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x436c1f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        and dword ptr [edi + 8], 0
        and dword ptr [edi + 0ch], 0
        lea ebx, [edi + 8]
        lea eax, [esi + 1ch]
        push eax
        mov dword ptr [ebp - 4], edi
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push edi
        lea ecx, [esi + 14h]
        ; Exact mapped bytes E8 04 FD FF FF: call 0x436944
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x436c62
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [esi + 0ch]
        shl eax, 2
        push eax
        push 0
        ; Exact mapped bytes FF 15 C8 C1 43 00: call dword ptr [0x43c1c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x436c72
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0ch]
        push 2
        shl ecx, 2
        push ecx
        push eax
        ; Exact mapped bytes FF 15 F0 C0 43 00: call dword ptr [0x43c0f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [edi + 0ch], eax
        ; Exact mapped bytes 75 05: jne 0x436c7e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 A3 60 FF FF: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx]
        mov ecx, eax
        imul ecx, ecx, 3fffffffh
        add ecx, dword ptr [esi + 0ch]
        shl ecx, 2
        push ecx
        mov ecx, dword ptr [edi + 0ch]
        push 0
        lea eax, [ecx + eax*4]
        push eax
        ; Exact mapped bytes E8 43 7E FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0ch]
        add esp, 0ch
        mov dword ptr [ebx], eax
        push edi
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 E0 C0 43 00: call dword ptr [0x43c0e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        pop edi
        pop esi
        mov dword ptr [eax + edx*4], ecx
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
