// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CD120 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_588cd120() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr [esi + 50h]
        push 0c4h
        push 0
        push eax
        ; Exact mapped bytes E8 12 FB 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 50h
        push 0
        push ecx
        ; Exact mapped bytes E8 05 FB 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [esi + 54h]
        mov ebx, 1
        mov dword ptr [eax + 0ch], ebx
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 28h], ebx
        mov edx, dword ptr [esi + 54h]
        mov eax, 2
        mov dword ptr [edx + 30h], eax
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 34h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 38h], 80h
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 3ch], 0eh
        mov edx, dword ptr [esi + 54h]
        mov ecx, 7dh
        mov dword ptr [edx + 40h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 44h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 48h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 4ch], ebx
        mov edx, dword ptr [esi + 50h]
        mov eax, 4
        ; Exact mapped bytes 66 89 82 84 00 00 00: mov word ptr [edx + 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 89 42 36: mov word ptr [edx + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x36
        mov eax, dword ptr [esi + 50h]
        movzx edx, byte ptr [eax + 32h]
        and dl, 0f2h
        or dl, 2
        mov byte ptr [eax + 32h], dl
        mov eax, dword ptr [esi + 50h]
        movzx edx, byte ptr [eax + 31h]
        and dl, 0c0h
        or dl, 40h
        mov byte ptr [eax + 31h], dl
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 47h], cl
        mov ecx, dword ptr [esi + 50h]
        mov byte ptr [ecx + 46h], bl
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffdh
        mov eax, dword ptr [esi + 50h]
        or dword ptr [eax + 3ch], ebx
        mov eax, dword ptr [esi + 50h]
        or dword ptr [eax + 3ch], 4
        push 5899a588h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 50h]
        add esp, 1ch
        mov edi, eax
        mov ebp, 30h
        mov edi, edi
        lea edx, [ebp + 7fffffceh]
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x588cd22c
        __asm _emit 0x74
        __asm _emit 0x12
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 74 0C: je 0x588cd22c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [ecx], al
        add ecx, ebx
        add edi, ebx
        sub ebp, ebx
        ; Exact mapped bytes 75 E6: jne 0x588cd210
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 04: jmp 0x588cd230
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebp, ebp
        ; Exact mapped bytes 75 02: jne 0x588cd232
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebx
        push 58997fd0h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 50h]
        add esp, 4
        mov edi, eax
        mov edx, 14h
        add ecx, 0a6h
        lea eax, [edx + 7fffffeah]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x588cd26f
        __asm _emit 0x74
        __asm _emit 0x12
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 74 0C: je 0x588cd26f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [ecx], al
        add ecx, ebx
        add edi, ebx
        sub edx, ebx
        ; Exact mapped bytes 75 E6: jne 0x588cd253
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 04: jmp 0x588cd273
        __asm _emit 0xeb
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x588cd275
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebx
        mov byte ptr [ecx], 0
        ; Exact mapped bytes 8B 0D 28 46 A2 58: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD 9A EC FF: call 0x58796d40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9a
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 50h]
        mov dword ptr [ecx + 80h], eax
        ; Exact mapped bytes A1 90 46 A2 58: mov eax, dword ptr [0x58a24690]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 23h
        ; Exact mapped bytes 7E 17: jle 0x588cd2b1
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0E: je 0x588cd2b1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 8ch]
        ; Exact mapped bytes EB 02: jmp 0x588cd2b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [eax + 4]
        lea edx, [eax + ecx + 2ch]
        mov eax, dword ptr [esi + 5ch]
        mov dword ptr [eax + 6ch], edx
        mov esi, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 88h]
        mov edx, dword ptr [esi + 8ch]
        pop edi
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 54h], edx
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
