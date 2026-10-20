// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042960 .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_10042960_10042960() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 1ch]
        cmp eax, ecx
        ; Exact mapped bytes 7D 2D: jge 0x1004299c
        __asm _emit 0x7d
        __asm _emit 0x2d
        test ecx, ecx
        mov edi, ecx
        ; Exact mapped bytes 75 05: jne 0x1004297a
        __asm _emit 0x75
        __asm _emit 0x05
        mov edi, 1
        sub eax, ecx
        mov ecx, dword ptr [esi + 34h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv edi
        add eax, 64h
        cmp ecx, eax
        mov dword ptr [esi + 38h], eax
        ; Exact mapped bytes 7F 02: jg 0x10042997
        __asm _emit 0x7f
        __asm _emit 0x02
        mov eax, ecx
        mov dword ptr [esi + 34h], eax
        ; Exact mapped bytes EB 09: jmp 0x100429a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esi + 48h]
        add eax, 64h
        mov dword ptr [esi + 38h], eax
        mov edi, dword ptr [esi + 34h]
        mov ecx, dword ptr [esi + 44h]
        test edi, edi
        mov dword ptr [esi + 40h], 18h
        ; Exact mapped bytes 7C 21: jl 0x100429d7
        __asm _emit 0x7c
        __asm _emit 0x21
        xor ecx, 0aaaaaaaah
        mov eax, 51eb851fh
        imul ecx, edi
        mul ecx
        shr edx, 5
        xor edx, 0aaaaaaaah
        mov dword ptr [esi + 4ch], edx
        mov dword ptr [esi + 54h], edx
        ; Exact mapped bytes EB 23: jmp 0x100429fa
        __asm _emit 0xeb
        __asm _emit 0x23
        xor ecx, 0aaaaaaaah
        mov eax, 51eb851fh
        imul ecx, edi
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        xor edx, 0aaaaaaaah
        mov dword ptr [esi + 4ch], edx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 75 1F: jne 0x10042a27
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 87h
        ; Exact mapped bytes 7C 05: jl 0x10042a1b
        __asm _emit 0x7c
        __asm _emit 0x05
        mov eax, 87h
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 99 A5 05 00: call 0x1009cfc0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 60h]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 43: jne 0x10042a78
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [esi + 0ch]
        test eax, eax
        ; Exact mapped bytes 75 3C: jne 0x10042a78
        __asm _emit 0x75
        __asm _emit 0x3c
        cmp dword ptr [esi + 38h], 0ah
        ; Exact mapped bytes 7D 36: jge 0x10042a78
        __asm _emit 0x7d
        __asm _emit 0x36
        mov dword ptr [esi + 0ch], 40000000h
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 5
        ; Exact mapped bytes 7E 19: jle 0x10042a70
        __asm _emit 0x7e
        __asm _emit 0x19
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x10042a70
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 14h]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        push ecx
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
