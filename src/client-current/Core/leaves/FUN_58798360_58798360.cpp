// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798360 .. +0x1CB bytes.
extern "C" __declspec(naked) void FUN_58798360_58798360() {
    __asm {
        sub esp, 10h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 20h]
        mov eax, ecx
        push edi
        mov edi, dword ptr [esp + 28h]
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [eax]
        cmp byte ptr [edi + 0dh], 0
        ; Exact mapped bytes 74 3E: je 0x587983bb
        __asm _emit 0x74
        __asm _emit 0x3e
        lea edi, [eax + 8]
        mov eax, dword ptr [eax + 4]
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 75 17: jne 0x587983a0
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [edi]
        mov ebx, dword ptr [esp + 2ch]
        add ecx, 10h
        push ebx
        ; Exact mapped bytes E8 58 10 00 00: call 0x587993f0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x5879847e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        mov eax, esi
        pop edi
        mov dword ptr [esi], ecx
        mov byte ptr [esi + 8], 0
        mov dword ptr [esi + 4], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ebp, [edi + 10h]
        mov ebx, dword ptr [esp + 2ch]
        mov ecx, ebx
        push ebp
        cmp edi, dword ptr [eax]
        ; Exact mapped bytes 75 26: jne 0x587983ef
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes E8 22 10 00 00: call 0x587993f0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x5879847e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi], edi
        mov eax, esi
        pop edi
        mov dword ptr [esi + 4], 1
        mov byte ptr [esi + 8], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC 0F 00 00: call 0x587993f0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 52: je 0x5879844a
        __asm _emit 0x74
        __asm _emit 0x52
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 2ch], edi
        ; Exact mapped bytes E8 7B 0F 00 00: call 0x58799380
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebp, dword ptr [eax]
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 E0 0F 00 00: call 0x587993f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 6A: je 0x5879847e
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [ebp + 8]
        mov al, byte ptr [eax + 0dh]
        test al, al
        mov byte ptr [esi + 8], 0
        mov eax, esi
        ; Exact mapped bytes 74 13: je 0x58798437
        __asm _emit 0x74
        __asm _emit 0x13
        pop edi
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 4], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [esi], edi
        pop edi
        mov dword ptr [esi + 4], 1
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push ebx
        mov ecx, ebp
        ; Exact mapped bytes E8 9E 0F 00 00: call 0x587993f0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x58798512
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 2ch], edi
        ; Exact mapped bytes E8 B9 0E 00 00: call 0x58799320
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax]
        cmp byte ptr [ebp + 0dh], 0
        ; Exact mapped bytes 75 6D: jne 0x587984dc
        __asm _emit 0x75
        __asm _emit 0x6d
        lea eax, [ebp + 10h]
        mov ecx, ebx
        push eax
        ; Exact mapped bytes E8 76 0F 00 00: call 0x587993f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 5E: jne 0x587984dc
        __asm _emit 0x75
        __asm _emit 0x5e
        mov ecx, dword ptr [esp + 10h]
        lea eax, [esp + 14h]
        push ebx
        push eax
        ; Exact mapped bytes E8 A3 00 00 00: call 0x58798530
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 1ch]
        cmp byte ptr [edi + 0dh], 0
        ; Exact mapped bytes 75 28: jne 0x587984bf
        __asm _emit 0x75
        __asm _emit 0x28
        lea eax, [edi + 10h]
        mov ecx, ebx
        push eax
        ; Exact mapped bytes E8 4E 0F 00 00: call 0x587993f0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 19: jne 0x587984bf
        __asm _emit 0x75
        __asm _emit 0x19
        mov dword ptr [esi], edi
        mov eax, esi
        pop edi
        mov dword ptr [esi + 4], 2
        mov byte ptr [esi + 8], 1
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 18h]
        pop edi
        mov dword ptr [esi], eax
        mov eax, esi
        mov dword ptr [esi + 4], ecx
        mov byte ptr [esi + 8], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8]
        mov al, byte ptr [eax + 0dh]
        test al, al
        mov byte ptr [esi + 8], 0
        mov eax, esi
        ; Exact mapped bytes 74 13: je 0x587984ff
        __asm _emit 0x74
        __asm _emit 0x13
        mov dword ptr [esi], edi
        pop edi
        mov dword ptr [esi + 4], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        pop edi
        mov dword ptr [esi], ebp
        mov dword ptr [esi + 4], 1
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [esi], edi
        mov eax, esi
        pop edi
        mov byte ptr [esi + 8], 1
        mov dword ptr [esi + 4], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
