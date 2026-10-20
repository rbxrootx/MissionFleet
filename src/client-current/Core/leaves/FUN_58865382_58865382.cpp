// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865382 .. +0x172 bytes.
extern "C" __declspec(naked) void FUN_58865382_58865382() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 14h]
        push ebx
        mov ebx, dword ptr [ebp + 18h]
        push esi
        mov esi, dword ptr [ebp + 10h]
        push edi
        and dword ptr [ebx], 0
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [eax], 1
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588653af
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [eax], esi
        add eax, 4
        mov dword ptr [ebp + 0ch], eax
        xor cl, cl
        mov byte ptr [ebp - 1], cl
        cmp byte ptr [edi], 22h
        ; Exact mapped bytes 75 0D: jne 0x588653c6
        __asm _emit 0x75
        __asm _emit 0x0d
        test cl, cl
        mov al, 22h
        sete cl
        inc edi
        mov byte ptr [ebp - 1], cl
        ; Exact mapped bytes EB 35: jmp 0x588653fb
        __asm _emit 0xeb
        __asm _emit 0x35
        inc dword ptr [ebx]
        test esi, esi
        ; Exact mapped bytes 74 05: je 0x588653d1
        __asm _emit 0x74
        __asm _emit 0x05
        mov al, byte ptr [edi]
        mov byte ptr [esi], al
        inc esi
        mov al, byte ptr [edi]
        inc edi
        mov byte ptr [ebp - 2], al
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        push eax
        ; Exact mapped bytes E8 AF FF 00 00: call 0x5887538f
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x588653f1
        __asm _emit 0x74
        __asm _emit 0x0c
        inc dword ptr [ebx]
        test esi, esi
        ; Exact mapped bytes 74 05: je 0x588653f0
        __asm _emit 0x74
        __asm _emit 0x05
        mov al, byte ptr [edi]
        mov byte ptr [esi], al
        inc esi
        inc edi
        mov al, byte ptr [ebp - 2]
        test al, al
        ; Exact mapped bytes 74 19: je 0x58865411
        __asm _emit 0x74
        __asm _emit 0x19
        mov cl, byte ptr [ebp - 1]
        test cl, cl
        ; Exact mapped bytes 75 B5: jne 0x588653b4
        __asm _emit 0x75
        __asm _emit 0xb5
        cmp al, 20h
        ; Exact mapped bytes 74 04: je 0x58865407
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 9
        ; Exact mapped bytes 75 AD: jne 0x588653b4
        __asm _emit 0x75
        __asm _emit 0xad
        test esi, esi
        ; Exact mapped bytes 74 07: je 0x58865412
        __asm _emit 0x74
        __asm _emit 0x07
        mov byte ptr [esi - 1], 0
        ; Exact mapped bytes EB 01: jmp 0x58865412
        __asm _emit 0xeb
        __asm _emit 0x01
        dec edi
        mov byte ptr [ebp - 1], 0
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x588654e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 20h
        ; Exact mapped bytes 74 04: je 0x58865428
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 9
        ; Exact mapped bytes 75 05: jne 0x5886542d
        __asm _emit 0x75
        __asm _emit 0x05
        inc edi
        mov al, byte ptr [edi]
        ; Exact mapped bytes EB F3: jmp 0x58865420
        __asm _emit 0xeb
        __asm _emit 0xf3
        test al, al
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x588654e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x58865444
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [ecx], esi
        add ecx, 4
        mov dword ptr [ebp + 0ch], ecx
        mov eax, dword ptr [ebp + 14h]
        inc dword ptr [eax]
        xor edx, edx
        inc edx
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x58865452
        __asm _emit 0xeb
        __asm _emit 0x02
        inc edi
        inc eax
        mov cl, byte ptr [edi]
        cmp cl, 5ch
        ; Exact mapped bytes 74 F7: je 0x58865450
        __asm _emit 0x74
        __asm _emit 0xf7
        cmp cl, 22h
        ; Exact mapped bytes 75 2E: jne 0x5886548c
        __asm _emit 0x75
        __asm _emit 0x2e
        test al, 1
        ; Exact mapped bytes 75 1B: jne 0x5886547d
        __asm _emit 0x75
        __asm _emit 0x1b
        mov cl, byte ptr [ebp - 1]
        test cl, cl
        ; Exact mapped bytes 74 0C: je 0x58865475
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp byte ptr [edi + 1], 22h
        ; Exact mapped bytes 75 03: jne 0x58865472
        __asm _emit 0x75
        __asm _emit 0x03
        inc edi
        ; Exact mapped bytes EB 0B: jmp 0x5886547d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov cl, byte ptr [ebp - 1]
        xor edx, edx
        test cl, cl
        sete byte ptr [ebp - 1]
        shr eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x5886548c
        __asm _emit 0xeb
        __asm _emit 0x0b
        dec eax
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x5886548a
        __asm _emit 0x74
        __asm _emit 0x04
        mov byte ptr [esi], 5ch
        inc esi
        inc dword ptr [ebx]
        test eax, eax
        ; Exact mapped bytes 75 F1: jne 0x58865481
        __asm _emit 0x75
        __asm _emit 0xf1
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 74 3B: je 0x588654d1
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp byte ptr [ebp - 1], 0
        ; Exact mapped bytes 75 08: jne 0x588654a4
        __asm _emit 0x75
        __asm _emit 0x08
        cmp al, 20h
        ; Exact mapped bytes 74 31: je 0x588654d1
        __asm _emit 0x74
        __asm _emit 0x31
        cmp al, 9
        ; Exact mapped bytes 74 2D: je 0x588654d1
        __asm _emit 0x74
        __asm _emit 0x2d
        test edx, edx
        ; Exact mapped bytes 74 23: je 0x588654cb
        __asm _emit 0x74
        __asm _emit 0x23
        test esi, esi
        ; Exact mapped bytes 74 03: je 0x588654af
        __asm _emit 0x74
        __asm _emit 0x03
        mov byte ptr [esi], al
        inc esi
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes E8 D7 FE 00 00: call 0x5887538f
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x588654c9
        __asm _emit 0x74
        __asm _emit 0x0c
        inc edi
        inc dword ptr [ebx]
        test esi, esi
        ; Exact mapped bytes 74 05: je 0x588654c9
        __asm _emit 0x74
        __asm _emit 0x05
        mov al, byte ptr [edi]
        mov byte ptr [esi], al
        inc esi
        inc dword ptr [ebx]
        inc edi
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x58865449
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x588654d9
        __asm _emit 0x74
        __asm _emit 0x04
        mov byte ptr [esi], 0
        inc esi
        inc dword ptr [ebx]
        ; Exact mapped bytes E9 36 FF FF FF: jmp 0x58865416
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        pop edi
        pop esi
        pop ebx
        test ecx, ecx
        ; Exact mapped bytes 74 03: je 0x588654ed
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [ecx], 0
        mov eax, dword ptr [ebp + 14h]
        inc dword ptr [eax]
        leave
        ret
    }
}
