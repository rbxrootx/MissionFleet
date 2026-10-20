// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976FA0 .. +0xF7 bytes.
extern "C" __declspec(naked) void FUN_58976fa0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        xor ebp, ebp
        mov eax, dword ptr [esi + 3ch]
        mov ebx, dword ptr [esi + 44h]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 7E 1C: jle 0x58976fd2
        __asm _emit 0x7e
        __asm _emit 0x1c
        add ebx, 10h
        mov eax, dword ptr [ebx]
        push eax
        push esi
        ; Exact mapped bytes E8 DE 00 00 00: call 0x589770a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        add ebp, eax
        mov eax, dword ptr [esi + 3ch]
        inc edi
        add ebx, 54h
        cmp edi, eax
        ; Exact mapped bytes 7C E7: jl 0x58976fb9
        __asm _emit 0x7c
        __asm _emit 0xe7
        mov al, byte ptr [esi + 0b1h]
        test al, al
        ; Exact mapped bytes 75 55: jne 0x58977031
        __asm _emit 0x75
        __asm _emit 0x55
        mov al, byte ptr [esi + 0d4h]
        test al, al
        ; Exact mapped bytes 75 4B: jne 0x58977031
        __asm _emit 0x75
        __asm _emit 0x4b
        cmp dword ptr [esi + 38h], 8
        ; Exact mapped bytes 75 45: jne 0x58977031
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 3ch]
        mov eax, dword ptr [esi + 44h]
        mov edx, 1
        test ecx, ecx
        mov bl, dl
        ; Exact mapped bytes 7E 14: jle 0x58977011
        __asm _emit 0x7e
        __asm _emit 0x14
        add eax, 18h
        cmp dword ptr [eax - 4], edx
        ; Exact mapped bytes 7F 04: jg 0x58977009
        __asm _emit 0x7f
        __asm _emit 0x04
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 7E 02: jle 0x5897700b
        __asm _emit 0x7e
        __asm _emit 0x02
        xor bl, bl
        add eax, 54h
        dec ecx
        ; Exact mapped bytes 75 EF: jne 0x58977000
        __asm _emit 0x75
        __asm _emit 0xef
        test ebp, ebp
        ; Exact mapped bytes 74 1E: je 0x58977033
        __asm _emit 0x74
        __asm _emit 0x1e
        test bl, bl
        ; Exact mapped bytes 74 1A: je 0x58977033
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [esi]
        push 0
        push esi
        xor bl, bl
        mov dword ptr [ecx + 14h], 4bh
        mov edx, dword ptr [esi]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        add esp, 8
        ; Exact mapped bytes EB 02: jmp 0x58977033
        __asm _emit 0xeb
        __asm _emit 0x02
        xor bl, bl
        mov al, byte ptr [esi + 0b1h]
        test al, al
        ; Exact mapped bytes 74 13: je 0x58977050
        __asm _emit 0x74
        __asm _emit 0x13
        push 0c9h
        push esi
        ; Exact mapped bytes E8 38 01 00 00: call 0x58977180
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov al, byte ptr [esi + 0d4h]
        test al, al
        ; Exact mapped bytes 74 13: je 0x5897706d
        __asm _emit 0x74
        __asm _emit 0x13
        push 0c2h
        push esi
        ; Exact mapped bytes E8 1B 01 00 00: call 0x58977180
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        test bl, bl
        ; Exact mapped bytes 74 13: je 0x58977084
        __asm _emit 0x74
        __asm _emit 0x13
        push 0c0h
        push esi
        ; Exact mapped bytes E8 04 01 00 00: call 0x58977180
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        push 0c1h
        push esi
        ; Exact mapped bytes E8 F1 00 00 00: call 0x58977180
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
