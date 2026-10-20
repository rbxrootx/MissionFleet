// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875CBD0 .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_5875cbd0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 7D D5 02 00: call 0x5878a160
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [esi + 50h], eax
        push ecx
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A D5 02 00: call 0x5878a160
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esi + 54h], eax
        mov eax, 1
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 5ch], eax
        mov eax, dword ptr [esi + 4]
        cmp dword ptr [eax + 164h], 1dh
        ; Exact mapped bytes 7E 0F: jle 0x5875cc1f
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5875cc1f
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes EB 02: jmp 0x5875cc21
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        cmp dword ptr [eax + 164h], 1ch
        ; Exact mapped bytes 7E 0F: jle 0x5875cc39
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5875cc39
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 70h]
        ; Exact mapped bytes EB 02: jmp 0x5875cc3b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ecx
        mov ecx, dword ptr [esi + 50h]
        push eax
        ; Exact mapped bytes E8 0B A2 17 00: call 0x588d6e50
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa2
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp dword ptr [eax + 164h], 1dh
        ; Exact mapped bytes 7E 0F: jle 0x5875cc60
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5875cc60
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes EB 02: jmp 0x5875cc62
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        cmp dword ptr [eax + 164h], 1ch
        ; Exact mapped bytes 7E 0F: jle 0x5875cc7a
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5875cc7a
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 70h]
        ; Exact mapped bytes EB 02: jmp 0x5875cc7c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ecx
        mov ecx, dword ptr [esi + 54h]
        push eax
        ; Exact mapped bytes E8 CA A1 17 00: call 0x588d6e50
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xa1
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [esi + 50h]
        mov ecx, dword ptr [edx + 12ech]
        mov eax, 0abd9f8h
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [esi + 54h]
        mov ecx, dword ptr [edx + 12ech]
        mov dword ptr [ecx + 60h], eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
