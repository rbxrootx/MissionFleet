// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00443CF0 .. +0x1F2 bytes.
extern "C" __declspec(naked) void FUN_00443cf0_00443CF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        mov dword ptr [ebp - 68h], ecx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 68h]
        ; Exact mapped bytes 0F 84 D4 01 00 00: je 0x443ed9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        sar eax, 2
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [edx]
        sar eax, 2
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 76 6C: jbe 0x443d95
        __asm _emit 0x76
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 5E 26 00 00: call 0x4463a0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 13: je 0x443d77
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 24h]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 7F DA FB FF: call 0x4017f3
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xda
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        lea eax, [ecx + edx*4]
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes E9 33 01 00 00: jmp 0x443ec8
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        sar ecx, 2
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 72 56: jb 0x443dfe
        __asm _emit 0x72
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 75 08: jne 0x443dd1
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 22: jmp 0x443df3
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 7B 1E 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, dword ptr [ebp - 28h]
        add eax, ecx
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x443ec8
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        sar ecx, 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        lea ecx, [eax + ecx*4]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 75 08: jne 0x443e37
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 70h], edx
        ; Exact mapped bytes EB 22: jmp 0x443e59
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 3ch]
        sub eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 15 1E 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, dword ptr [ebp - 38h]
        add eax, ecx
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        lea edx, [ecx + edx*4]
        mov dword ptr [ebp - 5ch], edx
        mov al, byte ptr [ebp - 48h]
        mov byte ptr [ebp - 44h], al
        mov cl, byte ptr [ebp - 54h]
        mov byte ptr [ebp - 4ch], cl
        mov dl, byte ptr [ebp - 58h]
        mov byte ptr [ebp - 50h], dl
        mov eax, dword ptr [ebp - 60h]
        cmp eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 75 08: jne 0x443ea6
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 74h], ecx
        ; Exact mapped bytes EB 22: jmp 0x443ec8
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 60h]
        sub edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        ; Exact mapped bytes E8 A6 1D 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 60h]
        sub edx, dword ptr [ebp - 5ch]
        add eax, edx
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        lea eax, [ecx + edx*4]
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp - 68h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
