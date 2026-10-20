// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DF280 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_588df280() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        sub esp, 28h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 4]
        mov dl, byte ptr [ecx + 354h]
        push edi
        cmp dl, byte ptr [esi + 354h]
        ; Exact mapped bytes 0F 84 87 01 00 00: je 0x588df42a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 0ch]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x588df37e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, edi
        cmp dword ptr [ebp + 80h], 40000000h
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x588df373
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dl, byte ptr [ebp + 354h]
        cmp dl, byte ptr [ecx + 354h]
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x588df373
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [esi + 8]
        mov ecx, dword ptr [ebp + 4]
        imul eax, eax
        sub ecx, dword ptr [esi + 4]
        lea edx, [eax*8]
        sub edx, eax
        add edx, edx
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, ecx
        imul edx, ecx
        add eax, edx
        cmp dword ptr [ebp + 0dd0h], eax
        ; Exact mapped bytes 0F 8D 17 01 00 00: jge 0x588df42a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 1390h]
        mov dword ptr [esp + 10h], 0
        mov dword ptr [esp + 14h], eax
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 2E: je 0x588df359
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edi, dword ptr [eax]
        test edi, edi
        ; Exact mapped bytes 74 28: je 0x588df359
        __asm _emit 0x74
        __asm _emit 0x28
        cmp dword ptr [edi + 0ch], 0
        ; Exact mapped bytes 74 17: je 0x588df34e
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [edi + 0ch]
        mov ebx, dword ptr [ecx + 54ch]
        push esi
        ; Exact mapped bytes E8 2A B2 E5 FF: call 0x5873a570
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb2
        __asm _emit 0xe5
        __asm _emit 0xff
        cmp eax, ebx
        ; Exact mapped bytes 0F 82 DC 00 00 00: jb 0x588df42a
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 8]
        test edi, edi
        ; Exact mapped bytes 75 DC: jne 0x588df331
        __asm _emit 0x75
        __asm _emit 0xdc
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        inc ecx
        add eax, 10h
        cmp ecx, 8
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 7C B7: jl 0x588df325
        __asm _emit 0x7c
        __asm _emit 0xb7
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebp, dword ptr [ebp + 78h]
        test ebp, ebp
        ; Exact mapped bytes 0F 85 32 FF FF FF: jne 0x588df2b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 20d54h]
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [esp + 14h], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x588df42a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x588df3a0
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax + 0ch]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 70 00 00 00: je 0x588df41b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8ch], 4
        ; Exact mapped bytes 7D 67: jge 0x588df41b
        __asm _emit 0x7d
        __asm _emit 0x67
        mov ebx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 18h]
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 14h]
        mov edi, dword ptr [esi + 1ch]
        add eax, ebx
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [esi + 20h]
        add eax, ebx
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [ebp + 90h]
        mov ebx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 8]
        add ecx, edx
        add edi, edx
        mov edx, dword ptr [eax + 14h]
        add edx, ebx
        mov ebx, dword ptr [eax + 18h]
        add ebx, ebp
        mov dword ptr [esp + 2ch], ebx
        mov ebx, dword ptr [eax + 1ch]
        add ebx, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 20h]
        add eax, ebp
        cmp edx, ecx
        mov dword ptr [esp + 10h], ebp
        ; Exact mapped bytes 7F 14: jg 0x588df417
        __asm _emit 0x7f
        __asm _emit 0x14
        cmp ebx, edi
        ; Exact mapped bytes 7C 10: jl 0x588df417
        __asm _emit 0x7c
        __asm _emit 0x10
        mov edx, dword ptr [esp + 1ch]
        cmp dword ptr [esp + 2ch], edx
        ; Exact mapped bytes 7F 06: jg 0x588df417
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 7D 1F: jge 0x588df436
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 14h]
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esp + 14h], eax
        test eax, eax
        ; Exact mapped bytes 0F 85 76 FF FF FF: jne 0x588df3a0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 28h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
    }
}
