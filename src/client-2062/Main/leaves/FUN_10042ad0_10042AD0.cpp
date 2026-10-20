// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042AD0 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_10042ad0_10042AD0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        cmp eax, 4
        ; Exact mapped bytes 0F 87 5A 01 00 00: ja 0x10042c38
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 3C 2C 04 10: jmp dword ptr [eax*4 + 0x10042c3c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x10
        mov dword ptr [ecx + 58h], 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 4F: jne 0x10042b44
        __asm _emit 0x75
        __asm _emit 0x4f
        mov edx, dword ptr [ecx + 34h]
        test edx, edx
        ; Exact mapped bytes 7D 14: jge 0x10042b10
        __asm _emit 0x7d
        __asm _emit 0x14
        mov eax, dword ptr [ecx + 3ch]
        add eax, edx
        xor edx, edx
        test eax, eax
        setg dl
        dec edx
        and edx, eax
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x10042bb3
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1F: jne 0x10042b31
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ecx + 58h]
        test eax, eax
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x10042bb6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 3ch]
        mov edx, dword ptr [ecx + 38h]
        cmp eax, edx
        ; Exact mapped bytes 7E 18: jle 0x10042b3f
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, edx
        mov dword ptr [ecx + 34h], eax
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x10042bb6
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 3ch]
        add eax, edx
        mov edx, dword ptr [ecx + 38h]
        cmp eax, edx
        ; Exact mapped bytes 7E 02: jle 0x10042b3f
        __asm _emit 0x7e
        __asm _emit 0x02
        mov eax, edx
        mov dword ptr [ecx + 34h], eax
        ; Exact mapped bytes EB 72: jmp 0x10042bb6
        __asm _emit 0xeb
        __asm _emit 0x72
        cmp eax, 2
        ; Exact mapped bytes 75 74: jne 0x10042bbd
        __asm _emit 0x75
        __asm _emit 0x74
        mov eax, dword ptr [ecx + 34h]
        test eax, eax
        ; Exact mapped bytes 7E 12: jle 0x10042b62
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ecx + 3ch]
        sub eax, edx
        mov edx, 0
        sets dl
        dec edx
        and edx, eax
        ; Exact mapped bytes EB 51: jmp 0x10042bb3
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 75 2A: jne 0x10042b8e
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ecx + 58h]
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x10042bb6
        __asm _emit 0x74
        __asm _emit 0x4b
        mov edx, dword ptr [ecx + 38h]
        mov eax, 66666667h
        neg edx
        shl edx, 1
        imul edx
        mov esi, dword ptr [ecx + 3ch]
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        neg esi
        add edx, eax
        cmp esi, edx
        ; Exact mapped bytes 7C 27: jl 0x10042bb3
        __asm _emit 0x7c
        __asm _emit 0x27
        ; Exact mapped bytes EB 23: jmp 0x10042bb1
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ecx + 3ch]
        sub eax, edx
        mov edx, dword ptr [ecx + 38h]
        neg edx
        mov esi, eax
        mov eax, 66666667h
        shl edx, 1
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp esi, edx
        ; Exact mapped bytes 7C 02: jl 0x10042bb3
        __asm _emit 0x7c
        __asm _emit 0x02
        mov edx, esi
        mov dword ptr [ecx + 34h], edx
        mov dword ptr [ecx + 58h], 0
        mov esi, dword ptr [ecx + 34h]
        mov edx, dword ptr [ecx + 44h]
        test esi, esi
        ; Exact mapped bytes 7C 21: jl 0x10042be8
        __asm _emit 0x7c
        __asm _emit 0x21
        xor edx, 0aaaaaaaah
        mov eax, 51eb851fh
        imul edx, esi
        mul edx
        shr edx, 5
        xor edx, 0aaaaaaaah
        mov dword ptr [ecx + 4ch], edx
        mov dword ptr [ecx + 54h], edx
        ; Exact mapped bytes EB 23: jmp 0x10042c0b
        __asm _emit 0xeb
        __asm _emit 0x23
        xor edx, 0aaaaaaaah
        mov eax, 51eb851fh
        imul edx, esi
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        xor edx, 0aaaaaaaah
        mov dword ptr [ecx + 4ch], edx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 60h]
        cmp ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 75 1F: jne 0x10042c38
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, esi
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 87h
        ; Exact mapped bytes 7C 05: jl 0x10042c2c
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
        ; Exact mapped bytes E8 88 A3 05 00: call 0x1009cfc0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
