// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005D760 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_1005d760_1005D760() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebx
        push esi
        push edi
        test eax, eax
        mov ebx, ecx
        ; Exact mapped bytes 75 07: jne 0x1005d774
        __asm _emit 0x75
        __asm _emit 0x07
        mov esi, 0eh
        ; Exact mapped bytes EB 1A: jmp 0x1005d78e
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x1005d780
        __asm _emit 0x75
        __asm _emit 0x07
        mov esi, 11h
        ; Exact mapped bytes EB 0E: jmp 0x1005d78e
        __asm _emit 0xeb
        __asm _emit 0x0e
        sub eax, 2
        neg eax
        sbb eax, eax
        and al, 0fdh
        add eax, 11h
        mov esi, eax
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], esi
        ; Exact mapped bytes 7E 17: jle 0x1005d7b2
        __asm _emit 0x7e
        __asm _emit 0x17
        test esi, esi
        ; Exact mapped bytes 7C 13: jl 0x1005d7b2
        __asm _emit 0x7c
        __asm _emit 0x13
        mov ecx, dword ptr [eax + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x1005d7b2
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, esi
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005d7b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esp + 10h]
        push 1
        push 0
        push eax
        mov ecx, dword ptr [ebx + edi*4 + 4bch]
        ; Exact mapped bytes E8 07 57 FD FF: call 0x10032ed0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esi + 1]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x1005d7ef
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1005d7ef
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1005d7ef
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005d7f1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + edi*4 + 4bch]
        push 1
        push 0
        push eax
        ; Exact mapped bytes E8 8E 56 FD FF: call 0x10032e90
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esi + 2]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x1005d828
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1005d828
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1005d828
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1005d82a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebx + edi*4 + 4bch]
        push 0
        push 0
        push 0
        push eax
        ; Exact mapped bytes E8 03 57 FD FF: call 0x10032f40
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
