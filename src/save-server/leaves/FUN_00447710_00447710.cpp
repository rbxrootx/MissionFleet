// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00447710 .. +0x464 bytes.
extern "C" __declspec(naked) void FUN_00447710_00447710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 10h]
        sar eax, 2
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x447730
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 8E 02 02 00 00: jle 0x44793c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 0ch], cl
        mov dl, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 8], dl
        mov al, byte ptr [ebp - 8]
        mov byte ptr [ebp - 20h], al
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 18h], edx
        mov al, byte ptr [ebp - 14h]
        mov byte ptr [ebp - 10h], al
        lea ecx, [ebp - 10h]
        push ecx
        mov dl, byte ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 62 1C 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor edx, edx
        cmp eax, dword ptr [ebp + 18h]
        sete dl
        mov byte ptr [ebp - 28h], dl
        mov eax, dword ptr [ebp - 28h]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x4477a8
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 C8 03 00 00: jmp 0x447b70
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 1
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 30h], al
        mov cl, byte ptr [ebp - 30h]
        mov byte ptr [ebp - 2ch], cl
        mov dl, byte ptr [ebp - 2ch]
        mov byte ptr [ebp - 44h], dl
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 3ch], ecx
        mov dl, byte ptr [ebp - 38h]
        mov byte ptr [ebp - 34h], dl
        lea eax, [ebp - 34h]
        push eax
        mov cl, byte ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 EB 1B 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor ecx, ecx
        cmp eax, dword ptr [ebp + 18h]
        sete cl
        mov byte ptr [ebp - 4ch], cl
        mov edx, dword ptr [ebp - 4ch]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 10: je 0x447820
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 50 03 00 00: jmp 0x447b70
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 6ch]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 54h], dl
        mov al, byte ptr [ebp - 54h]
        mov byte ptr [ebp - 50h], al
        mov cl, byte ptr [ebp - 50h]
        mov byte ptr [ebp - 68h], cl
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 60h], eax
        mov cl, byte ptr [ebp - 5ch]
        mov byte ptr [ebp - 58h], cl
        lea edx, [ebp - 58h]
        push edx
        mov al, byte ptr [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        ; Exact mapped bytes E8 73 1B 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor ecx, ecx
        cmp eax, dword ptr [ebp + 18h]
        sete cl
        mov byte ptr [ebp - 70h], cl
        mov edx, dword ptr [ebp - 70h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 10: je 0x447898
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 D8 02 00 00: jmp 0x447b70
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 90h]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 78h], dl
        mov al, byte ptr [ebp - 78h]
        mov byte ptr [ebp - 74h], al
        mov cl, byte ptr [ebp - 74h]
        mov byte ptr [ebp - 8ch], cl
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 84h], eax
        mov cl, byte ptr [ebp - 80h]
        mov byte ptr [ebp - 7ch], cl
        lea edx, [ebp - 7ch]
        push edx
        mov al, byte ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov edx, dword ptr [ebp - 84h]
        push edx
        ; Exact mapped bytes E8 E3 1A 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor ecx, ecx
        cmp eax, dword ptr [ebp + 18h]
        sete cl
        mov byte ptr [ebp - 94h], cl
        mov edx, dword ptr [ebp - 94h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 10: je 0x44792e
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 42 02 00 00: jmp 0x447b70
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes E9 EB FD FF FF: jmp 0x447727
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 104h], eax
        cmp dword ptr [ebp - 104h], 1
        ; Exact mapped bytes 0F 84 71 01 00 00: je 0x447ac6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 104h], 2
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x447a1b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 104h], 3
        ; Exact mapped bytes 74 05: je 0x447970
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 F5 01 00 00: jmp 0x447b65
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 1
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, dword ptr [ebp - 0b4h]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 9ch], al
        mov cl, byte ptr [ebp - 9ch]
        mov byte ptr [ebp - 98h], cl
        mov dl, byte ptr [ebp - 98h]
        mov byte ptr [ebp - 0b0h], dl
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 0a8h], ecx
        mov dl, byte ptr [ebp - 0a4h]
        mov byte ptr [ebp - 0a0h], dl
        lea eax, [ebp - 0a0h]
        push eax
        mov cl, byte ptr [ebp - 0b0h]
        push ecx
        mov edx, dword ptr [ebp - 0ach]
        push edx
        mov eax, dword ptr [ebp - 0a8h]
        push eax
        ; Exact mapped bytes E8 FF 19 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor ecx, ecx
        cmp eax, dword ptr [ebp + 18h]
        sete cl
        mov byte ptr [ebp - 0b8h], cl
        mov edx, dword ptr [ebp - 0b8h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 10: je 0x447a12
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 5E 01 00 00: jmp 0x447b70
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 0d8h]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 0c0h], dl
        mov al, byte ptr [ebp - 0c0h]
        mov byte ptr [ebp - 0bch], al
        mov cl, byte ptr [ebp - 0bch]
        mov byte ptr [ebp - 0d4h], cl
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 0d0h], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 0cch], eax
        mov cl, byte ptr [ebp - 0c8h]
        mov byte ptr [ebp - 0c4h], cl
        lea edx, [ebp - 0c4h]
        push edx
        mov al, byte ptr [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        ; Exact mapped bytes E8 54 19 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor ecx, ecx
        cmp eax, dword ptr [ebp + 18h]
        sete cl
        mov byte ptr [ebp - 0dch], cl
        mov edx, dword ptr [ebp - 0dch]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 10: je 0x447abd
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x447b70
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp - 0fch], eax
        mov ecx, dword ptr [ebp - 0fch]
        mov dl, byte ptr [ecx]
        mov byte ptr [ebp - 0e4h], dl
        mov al, byte ptr [ebp - 0e4h]
        mov byte ptr [ebp - 0e0h], al
        mov cl, byte ptr [ebp - 0e0h]
        mov byte ptr [ebp - 0f8h], cl
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 0f4h], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 0f0h], eax
        mov cl, byte ptr [ebp - 0ech]
        mov byte ptr [ebp - 0e8h], cl
        lea edx, [ebp - 0e8h]
        push edx
        mov al, byte ptr [ebp - 0f8h]
        push eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        ; Exact mapped bytes E8 A9 18 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor ecx, ecx
        cmp eax, dword ptr [ebp + 18h]
        sete cl
        mov byte ptr [ebp - 100h], cl
        mov edx, dword ptr [ebp - 100h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x447b65
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 0B: jmp 0x447b70
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
