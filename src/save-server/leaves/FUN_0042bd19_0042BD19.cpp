// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042BD19 .. +0x218 bytes.
extern "C" __declspec(naked) void FUN_0042bd19_0042BD19() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b7d4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 2ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 38h]
        mov ecx, 0bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        cmp dword ptr [eax + 0c8h], 0
        ; Exact mapped bytes 74 46: je 0x42bd9c
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1A: je 0x42bd88
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 6D 90 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x42bd8f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 0c8h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 62 01 00 00: je 0x42bf08
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 59 8F 0F 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x8f
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 1ch], 0
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F4 F0 FF FF: call 0x42aec7
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x42bde5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 73 8F 0F 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x8f
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 7D 1C: jge 0x42be0e
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 85 91 0F 00: call 0x524f83
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE D0: movsx edx, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xd0
        imul edx, edx, 1dh
        mov eax, dword ptr [ebp - 1ch]
        add eax, edx
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB CE: jmp 0x42bddc
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 1fh
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 0d4h]
        imul eax, eax, 11h
        add eax, dword ptr [ebp - 1ch]
        add eax, ecx
        mov dword ptr [ebp - 1ch], eax
        push 98h
        ; Exact mapped bytes E8 2E 06 0A 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 12: je 0x42be54
        __asm _emit 0x74
        __asm _emit 0x12
        push 800h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 81 2B 00 00: call 0x42e9d0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x42be5b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 28h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0c8h], eax
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov ecx, dword ptr [edx + 0c8h]
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax + 0c8h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 59 8F 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 0cch], 1
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 0d0h], 0
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes E8 31 03 00 00: call 0x42c1f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [ebp - 1ch]
        xor edx, edx
        div ecx
        imul edx, edx, 0dh
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 0d8h], edx
        mov ecx, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes E8 0E 03 00 00: call 0x42c1f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [ebp - 1ch]
        xor edx, edx
        div ecx
        imul edx, edx, 11h
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 0dch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E6 09 0A 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x42bf15
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 0cch], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 38h
        cmp ebp, esp
        ; Exact mapped bytes E8 C5 8E 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
