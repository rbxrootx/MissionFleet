// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B3250 .. +0x103 bytes.
extern "C" __declspec(naked) void FUN_588b3250() {
    __asm {
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edi
        mov edi, 2fh
        cmp dword ptr [eax + 170h], edi
        mov esi, ecx
        ; Exact mapped bytes 7E 17: jle 0x588b327d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588b327d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0bch]
        ; Exact mapped bytes EB 02: jmp 0x588b327f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 05 47 05 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x47
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x588b32af
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588b32af
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0bch]
        ; Exact mapped bytes EB 02: jmp 0x588b32b1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e1ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 83 BE E0 00 00 00 01: cmp word ptr [esi + 0xe0], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        mov eax, dword ptr [esi + 0d4h]
        mov dword ptr [esi + 0dch], 0
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes 75 05: jne 0x588b32f4
        __asm _emit 0x75
        __asm _emit 0x05
        add eax, 6eh
        ; Exact mapped bytes EB 03: jmp 0x588b32f7
        __asm _emit 0xeb
        __asm _emit 0x03
        add eax, -6eh
        mov ecx, dword ptr [esi + 0d8h]
        mov dword ptr [esi + 54h], ecx
        mov ecx, dword ptr [esi + 6ch]
        push 0ffffff00h
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes E8 10 FA 04 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 68h]
        push 0b4h
        ; Exact mapped bytes E8 C3 F9 04 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        push 10h
        ; Exact mapped bytes E8 B9 F9 04 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [esi + 7ch]
        lea edx, [esi + 0e8h]
        mov esi, 7
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 0B: je 0x588b3345
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        add edx, 4
        add eax, 8
        sub esi, 1
        ; Exact mapped bytes 75 E5: jne 0x588b3335
        __asm _emit 0x75
        __asm _emit 0xe5
        pop edi
        pop esi
        ret
    }
}
