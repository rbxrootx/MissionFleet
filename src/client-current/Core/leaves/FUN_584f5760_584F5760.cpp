// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F5760 .. +0x640 bytes.
extern "C" __declspec(naked) void FUN_584f5760_584F5760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 94h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 90h], ecx
        push 44h
        push 0
        lea eax, [ebp - 8ch]
        push eax
        ; Exact mapped bytes E8 87 76 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x76
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        push 44h
        push 0
        lea ecx, [ebp - 48h]
        push ecx
        ; Exact mapped bytes E8 77 76 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x76
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 0c0h
        mov edx, 0c0h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 90h]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 15 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 48h], eax
        push 0
        push 14h
        mov eax, 14h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 4]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 14 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [ebp + edx - 8ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        shl eax, 0
        mov ecx, dword ptr [ebp - 90h]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 14 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [ebp + ecx - 48h], eax
        push 0
        push 14h
        mov edx, 14h
        shl edx, 0
        mov eax, dword ptr [ebp - 90h]
        lea ecx, [eax + edx + 4]
        push ecx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 14 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov dword ptr [ebp + edx - 8ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        shl eax, 1
        mov ecx, dword ptr [ebp - 90h]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 14 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov dword ptr [ebp + ecx - 48h], eax
        push 0
        push 14h
        mov edx, 14h
        shl edx, 1
        mov eax, dword ptr [ebp - 90h]
        lea ecx, [eax + edx + 4]
        push ecx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 14 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov dword ptr [ebp + edx - 8ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 168h]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 13 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov dword ptr [ebp + edx - 48h], eax
        push 0
        push 14h
        mov eax, 14h
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 4]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 13 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov dword ptr [ebp + edx - 8ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        shl eax, 2
        mov ecx, dword ptr [ebp - 90h]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 13 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 2
        mov dword ptr [ebp + ecx - 48h], eax
        push 0
        push 14h
        mov edx, 14h
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 90h]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 13 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 2
        mov dword ptr [ebp + ecx - 8ch], eax
        push 0
        push 0c0h
        mov edx, 0c0h
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 90h]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 13 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 5
        mov dword ptr [ebp + edx - 48h], eax
        push 0
        push 14h
        mov eax, 14h
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 4]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 12 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 5
        mov dword ptr [ebp + edx - 8ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 168h]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 12 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 6
        mov dword ptr [ebp + edx - 48h], eax
        push 0
        push 14h
        mov eax, 14h
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 4]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 12 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 6
        mov dword ptr [ebp + edx - 8ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 168h]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 12 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 7
        mov dword ptr [ebp + edx - 48h], eax
        push 0
        push 14h
        mov eax, 14h
        imul ecx, eax, 0ch
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 4]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 12 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 7
        mov dword ptr [ebp + edx - 8ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        shl eax, 3
        mov ecx, dword ptr [ebp - 90h]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 11 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 3
        mov dword ptr [ebp + ecx - 48h], eax
        push 0
        push 14h
        mov edx, 14h
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 90h]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 11 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 3
        mov dword ptr [ebp + ecx - 8ch], eax
        push 0
        push 0c0h
        mov edx, 0c0h
        imul eax, edx, 9
        mov ecx, dword ptr [ebp - 90h]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 11 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 9
        mov dword ptr [ebp + edx - 48h], eax
        push 0
        push 14h
        mov eax, 14h
        shl eax, 2
        mov ecx, dword ptr [ebp - 90h]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 11 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 9
        mov dword ptr [ebp + edx - 8ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 168h]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 11 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0ah
        mov dword ptr [ebp + edx - 48h], eax
        push 0
        push 14h
        mov eax, 14h
        shl eax, 3
        mov ecx, dword ptr [ebp - 90h]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 11 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0ah
        mov dword ptr [ebp + edx - 8ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 168h]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 10 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0bh
        mov dword ptr [ebp + edx - 48h], eax
        push 0
        push 14h
        mov eax, 14h
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 4]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 10 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0bh
        mov dword ptr [ebp + edx - 8ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        imul ecx, eax, 0ch
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 168h]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 10 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0ch
        mov dword ptr [ebp + edx - 48h], eax
        push 0
        push 14h
        mov eax, 14h
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 4]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 10 FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0ch
        mov dword ptr [ebp + edx - 8ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        imul ecx, eax, 0dh
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 168h]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 0F FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0dh
        mov dword ptr [ebp + edx - 48h], eax
        push 0
        push 14h
        mov eax, 14h
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 90h]
        lea eax, [edx + ecx + 4]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 0F FD FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0dh
        mov dword ptr [ebp + edx - 8ch], eax
        mov dword ptr [ebp - 94h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584f5d39
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 94h]
        add eax, 1
        mov dword ptr [ebp - 94h], eax
        cmp dword ptr [ebp - 94h], 0eh
        ; Exact mapped bytes 7D 4B: jge 0x584f5d8d
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [edx + ecx*4 + 0eb0h]
        cmp ecx, dword ptr [ebp + eax*4 - 48h]
        ; Exact mapped bytes 74 04: je 0x584f5d65
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2D: jmp 0x584f5d92
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [eax + edx*4 + 0e6ch]
        cmp edx, dword ptr [ebp + ecx*4 - 8ch]
        ; Exact mapped bytes 74 04: je 0x584f5d8b
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x584f5d92
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB 9D: jmp 0x584f5d2a
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B4 B2 33 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb2
        __asm _emit 0x33
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
