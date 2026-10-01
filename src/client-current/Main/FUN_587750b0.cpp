// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587750B0 .. +0x203 bytes.
extern "C" __declspec(naked) void FUN_587750b0() {
    __asm {
        sub esp, 190h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 18ch], eax
        push ebx
        mov ebx, ecx
        cmp dword ptr [ebx + 4], 0
        push esi
        mov esi, dword ptr [esp + 19ch]
        ; Exact mapped bytes 75 07: jne 0x587750dc
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BE 01 00 00: jmp 0x5877529a
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 103h
        lea eax, [esp + 99h]
        push 0
        push eax
        mov byte ptr [esp + 0a0h], 0
        ; Exact mapped bytes E8 4F 7B 20 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x7b
        __asm _emit 0x20
        __asm _emit 0x00
        push 5ch
        push esi
        ; Exact mapped bytes E8 C7 7D 20 00: call 0x5897cec8
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x7d
        __asm _emit 0x20
        __asm _emit 0x00
        mov edi, eax
        movzx eax, byte ptr [esp + 1b8h]
        mov ecx, 1
        sub ecx, esi
        dec eax
        add esp, 14h
        add edi, ecx
        cmp eax, 3
        ; Exact mapped bytes 0F 87 D4 00 00 00: ja 0x587751f5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 B4 52 77 58: jmp dword ptr [eax*4 + 0x587752b4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x52
        __asm _emit 0x77
        __asm _emit 0x58
        lea eax, [esp + 94h]
        mov ecx, eax
        mov edx, 104h
        sub esi, ecx
        ; Exact mapped bytes EB 06: jmp 0x58775140
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edx + 7ffffefah]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x58775161
        __asm _emit 0x74
        __asm _emit 0x17
        mov cl, byte ptr [esi + eax]
        test cl, cl
        ; Exact mapped bytes 74 10: je 0x58775161
        __asm _emit 0x74
        __asm _emit 0x10
        mov byte ptr [eax], cl
        inc eax
        sub edx, 1
        ; Exact mapped bytes 75 E7: jne 0x58775140
        __asm _emit 0x75
        __asm _emit 0xe7
        dec eax
        mov byte ptr [eax], dl
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x587751f5
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 75 01: jne 0x58775166
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x587751f5
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 589964b8h
        lea edx, [esp + 98h]
        push 104h
        push edx
        ; Exact mapped bytes E8 DB 68 FD FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        add esi, edi
        push esi
        push 104h
        lea eax, [esp + 9ch]
        push eax
        ; Exact mapped bytes EB 56: jmp 0x587751f0
        __asm _emit 0xeb
        __asm _emit 0x56
        push 589964ach
        lea ecx, [esp + 98h]
        push 104h
        push ecx
        ; Exact mapped bytes E8 AF 68 FD FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        add esi, edi
        push esi
        push 104h
        lea edx, [esp + 9ch]
        push edx
        ; Exact mapped bytes EB 2A: jmp 0x587751f0
        __asm _emit 0xeb
        __asm _emit 0x2a
        push 589964a4h
        lea eax, [esp + 98h]
        push 104h
        push eax
        ; Exact mapped bytes E8 83 68 FD FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        add esi, edi
        push esi
        push 104h
        lea ecx, [esp + 9ch]
        push ecx
        ; Exact mapped bytes E8 DB C9 FB FF: call 0x58731bd0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc9
        __asm _emit 0xfb
        __asm _emit 0xff
        lea eax, [esp + 94h]
        lea edx, [eax + 1]
        nop
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58775200
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        cmp eax, 7d0h
        ; Exact mapped bytes 0F 8D 83 00 00 00: jge 0x58775297
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 4C C1 98 58: mov edi, dword ptr [0x5898c14c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 1
        lea edx, [esp + 10h]
        mov byte ptr [esp + eax + 98h], 0dh
        mov byte ptr [esp + eax + 99h], 0ah
        mov eax, dword ptr [ebx + 4]
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, eax
        cmp esi, -1
        ; Exact mapped bytes 75 17: jne 0x58775255
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebx + 4]
        push 1000h
        lea ecx, [esp + 10h]
        push ecx
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov esi, eax
        cmp esi, -1
        ; Exact mapped bytes 74 3B: je 0x58775290
        __asm _emit 0x74
        __asm _emit 0x3b
        push 2
        push 0
        push esi
        ; Exact mapped bytes FF 15 3C C1 98 58: call dword ptr [0x5898c13c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        lea eax, [esp + 94h]
        lea edx, [eax + 1]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58775270
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        push eax
        lea eax, [esp + 98h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 40 C1 98 58: call dword ptr [0x5898c140]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes FF 15 44 C1 98 58: call dword ptr [0x5898c144]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x58775299
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        mov ecx, dword ptr [esp + 194h]
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 30 79 20 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x79
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 190h
        ret 8
    }
}
