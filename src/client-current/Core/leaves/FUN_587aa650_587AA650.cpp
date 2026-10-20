// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA650 .. +0x217 bytes.
extern "C" __declspec(naked) void FUN_587aa650_587AA650() {
    __asm {
        sub esp, 2ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [esp + 38h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 3ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 40h]
        xor esi, esi
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes E8 97 FD FF FF: call 0x587aa410
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 39 35 C8 5E 96 58: cmp dword ptr [0x58965ec8], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 BD 01 00 00: je 0x587aa842
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 45 05 00 00: call 0x587aabd0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 A5 01 00 00: je 0x587aa83b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        ; Exact mapped bytes E8 34 05 00 00: call 0x587aabd0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 94 01 00 00: je 0x587aa83b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 B3 FD FF FF: call 0x587aa460
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp eax, -1
        ; Exact mapped bytes 0F 85 7B 01 00 00: jne 0x587aa834
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 11 04 00 00: call 0x587aaad0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        ; Exact mapped bytes 0F 84 61 01 00 00: je 0x587aa82d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 14h]
        mov dword ptr [esp + 14h], edi
        push eax
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes E8 2E 05 00 00: call 0x587aac10
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x587aa81d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 90 9C 96 58: mov ecx, dword ptr [0x58969c90]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 75 43: jne 0x587aa73a
        __asm _emit 0x75
        __asm _emit 0x43
        push 580h
        push ecx
        ; Exact mapped bytes FF 35 C8 5E 96 58: push dword ptr [0x58965ec8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes C7 05 94 9C 96 58 20 00 00 00: mov dword ptr [0x58969c94], 0x20
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 5C 41 89 58: call dword ptr [0x5889415c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, eax
        ; Exact mapped bytes 89 0D 90 9C 96 58: mov dword ptr [0x58969c90], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 75 55: jne 0x587aa774
        __asm _emit 0x75
        __asm _emit 0x55
        mov esi, 9
        test esi, esi
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x587aa847
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes E8 1E 04 00 00: call 0x587aab50
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x587aa847
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 98 9C 96 58: mov eax, dword ptr [0x58969c98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 94 9C 96 58: mov edx, dword ptr [0x58969c94]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, edx
        ; Exact mapped bytes 72 30: jb 0x587aa779
        __asm _emit 0x72
        __asm _emit 0x30
        imul eax, edx, 58h
        push eax
        push ecx
        push 0
        ; Exact mapped bytes FF 35 C8 5E 96 58: push dword ptr [0x58965ec8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 60 41 89 58: call dword ptr [0x58894160]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 BD: je 0x587aa71f
        __asm _emit 0x74
        __asm _emit 0xbd
        ; Exact mapped bytes A1 94 9C 96 58: mov eax, dword ptr [0x58969c94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, eax
        ; Exact mapped bytes 89 0D 90 9C 96 58: mov dword ptr [0x58969c90], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A3 94 9C 96 58: mov dword ptr [0x58969c94], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A1 98 9C 96 58: mov eax, dword ptr [0x58969c98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        imul edx, eax, 2ch
        inc eax
        ; Exact mapped bytes A3 98 9C 96 58: mov dword ptr [0x58969c98], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        add edx, ecx
        ; Exact mapped bytes 74 99: je 0x587aa71f
        __asm _emit 0x74
        __asm _emit 0x99
        mov eax, dword ptr [esp + 14h]
        mov cl, byte ptr [edx + 14h]
        mov dword ptr [edx], eax
        and cl, 0feh
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [edx + 8], eax
        mov al, byte ptr [esp + 20h]
        mov ebp, dword ptr [esp + 1ch]
        and al, 1
        or cl, al
        and cl, 0fdh
        and cl, 0fbh
        mov byte ptr [edx + 14h], cl
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [edx + 18h]
        and eax, 0fh
        and ecx, 0fffffff0h
        or ecx, eax
        mov dword ptr [edx + 18h], ecx
        mov eax, dword ptr [esp + 28h]
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [edx + 1ch], eax
        mov dword ptr [edx + 20h], ecx
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 34h]
        mov dword ptr [edx + 24h], eax
        mov dword ptr [edx + 28h], ecx
        cmp dword ptr [esp + 20h], esi
        ; Exact mapped bytes 74 16: je 0x587aa7ff
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [edi - 5]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes 66 8B 47 FF: mov ax, word ptr [edi - 1]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 42 10: mov word ptr [edx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x10
        mov al, byte ptr [edi + 1]
        mov byte ptr [edx + 12h], al
        ; Exact mapped bytes EB 0B: jmp 0x587aa80a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [edi]
        mov dword ptr [edx + 0ch], eax
        mov al, byte ptr [edi + 4]
        mov byte ptr [edx + 10h], al
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 84 0E FF FF FF: je 0x587aa724
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], ebp
        ; Exact mapped bytes E9 07 FF FF FF: jmp 0x587aa724
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        mov esi, 8
        ; Exact mapped bytes E8 28 03 00 00: call 0x587aab50
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 1A: jmp 0x587aa847
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov esi, 9
        ; Exact mapped bytes EB 13: jmp 0x587aa847
        __asm _emit 0xeb
        __asm _emit 0x13
        mov esi, 3
        ; Exact mapped bytes EB 0C: jmp 0x587aa847
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov esi, 7
        ; Exact mapped bytes EB 05: jmp 0x587aa847
        __asm _emit 0xeb
        __asm _emit 0x05
        mov esi, 2
        xor ecx, ecx
        mov eax, 58965ec4h
        xchg dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 38h]
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 EF 67 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x67
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 2ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
