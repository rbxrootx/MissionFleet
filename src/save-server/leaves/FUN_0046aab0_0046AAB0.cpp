// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046AAB0 .. +0x181 bytes.
extern "C" __declspec(naked) void FUN_0046aab0_0046AAB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0d8h
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 15 A8 B8 68 00: call dword ptr [0x68b8a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 AC B8 68 00: call dword ptr [0x68b8ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 6]
        and edx, 0ffffh
        xor eax, eax
        ; Exact mapped bytes 66 A1 92 72 68 00: mov ax, word ptr [0x687292]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x92
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        cmp edx, eax
        ; Exact mapped bytes 75 66: jne 0x46ab48
        __asm _emit 0x75
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 90 72 68 00: mov dx, word ptr [0x687290]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        cmp ecx, edx
        ; Exact mapped bytes 75 50: jne 0x46ab48
        __asm _emit 0x75
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 0ah]
        and eax, 0ffffh
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 8E 72 68 00: mov cx, word ptr [0x68728e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8e
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, ecx
        ; Exact mapped bytes 75 3B: jne 0x46ab48
        __asm _emit 0x75
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 0eh]
        and edx, 0ffffh
        xor eax, eax
        ; Exact mapped bytes 66 A1 8A 72 68 00: mov ax, word ptr [0x68728a]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x8a
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        cmp edx, eax
        ; Exact mapped bytes 75 26: jne 0x46ab48
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 0ffffh
        xor edx, edx
        ; Exact mapped bytes 66 8B 15 88 72 68 00: mov dx, word ptr [0x687288]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        cmp ecx, edx
        ; Exact mapped bytes 75 10: jne 0x46ab48
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes A1 80 72 68 00: mov eax, dword ptr [0x687280]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], eax
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x46abd0
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0d0h]
        push ecx
        ; Exact mapped bytes FF 15 B0 B8 68 00: call dword ptr [0x68b8b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0d4h], eax
        cmp dword ptr [ebp - 0d4h], -1
        ; Exact mapped bytes 74 34: je 0x46ab98
        __asm _emit 0x74
        __asm _emit 0x34
        cmp dword ptr [ebp - 0d4h], 2
        ; Exact mapped bytes 75 1F: jne 0x46ab8c
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 36h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x46ab8c
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 0C: je 0x46ab8c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 0d8h], 1
        ; Exact mapped bytes EB 0A: jmp 0x46ab96
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes EB 0A: jmp 0x46aba2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0ffffffffh
        mov eax, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes A3 80 72 68 00: mov dword ptr [0x687280], eax
        __asm _emit 0xa3
        __asm _emit 0x80
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 89 0D 88 72 68 00: mov dword ptr [0x687288], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 89 15 8C 72 68 00: mov dword ptr [0x68728c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes A3 90 72 68 00: mov dword ptr [0x687290], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 89 0D 94 72 68 00: mov dword ptr [0x687294], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0d8h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 1ah]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 1eh]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 22h]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 24h]
        and edx, 0ffffh
        push edx
        ; Exact mapped bytes E8 AA D2 00 00: call 0x477ec0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 08: je 0x46ac2a
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}
