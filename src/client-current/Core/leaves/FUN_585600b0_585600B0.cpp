// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585600B0 .. +0x252 bytes.
extern "C" __declspec(naked) void FUN_585600b0_585600B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        push 0bch
        ; Exact mapped bytes E8 41 0F 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x0f
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        push 9ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 9D C7 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc7
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        add edx, 9ch
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        add ecx, 9ch
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 43: je 0x58560161
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        push edx
        ; Exact mapped bytes E8 15 0F 2D 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x0f
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 0a0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        ; Exact mapped bytes E8 34 C7 2E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc7
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 0D: jmp 0x5856016e
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a0h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [edx + 98h]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 98h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a4h], 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 4ch]
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 4ch]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], eax
        push 0ch
        ; Exact mapped bytes E8 42 0E 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0e
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0D: je 0x585601db
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FA 72 F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x72
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x585601e2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 0a8h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58560200
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 0ah]
        cmp dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 74 4F: je 0x5856025b
        __asm _emit 0x74
        __asm _emit 0x4f
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7D FE FF FF: call 0x585600b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 EE 06 00 00: call 0x58560930
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 9C: jmp 0x585601f7
        __asm _emit 0xeb
        __asm _emit 0x9c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b8h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1A: jne 0x585602af
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 3e4h], 0
        ; Exact mapped bytes 75 0E: jne 0x585602af
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 3e4h], eax
        ; Exact mapped bytes EB 4A: jmp 0x585602f9
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 3e8h], 0
        ; Exact mapped bytes 75 1A: jne 0x585602d5
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 8]
        cmp eax, 1
        ; Exact mapped bytes 75 0E: jne 0x585602d5
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3e8h], edx
        ; Exact mapped bytes EB 24: jmp 0x585602f9
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 3ech], 0
        ; Exact mapped bytes 75 18: jne 0x585602f9
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 8]
        cmp edx, 1
        ; Exact mapped bytes 75 0C: jne 0x585602f9
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ech], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
