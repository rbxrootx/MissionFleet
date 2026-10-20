// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00444010 .. +0x2FA bytes.
extern "C" __declspec(naked) void FUN_00444010_00444010() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58bf9bh
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
        sub esp, 0a0h
        mov dword ptr [ebp - 0a4h], ecx
        mov eax, dword ptr [ebp - 0a4h]
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        sar edx, 2
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 0F 86 F2 00 00 00: jbe 0x444143
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 50 96 FF FF: call 0x43d6b0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 4A 92 FF FF: call 0x43d2d0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 30h], ecx
        mov dl, byte ptr [ebp - 28h]
        mov byte ptr [ebp - 20h], dl
        mov al, byte ptr [ebp - 2ch]
        mov byte ptr [ebp - 24h], al
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 58 CF FB FF: call 0x401005
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 0a4h]
        add eax, 4
        mov dword ptr [ebp - 44h], eax
        lea ecx, [ebp - 14h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 0a4h]
        add eax, 8
        mov dword ptr [ebp - 50h], eax
        lea ecx, [ebp - 10h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 A3 20 00 00: call 0x4461c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [eax], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 92 94 FF FF: call 0x43d5d0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B7 01 00 00: jmp 0x4442fa
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [ebp - 0a4h]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        sar ecx, 2
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 0F 86 B3 00 00 00: jbe 0x444213
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 09: jmp 0x444188
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 4
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 60h]
        cmp edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 74 0C: je 0x44419c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB E3: jmp 0x44417f
        __asm _emit 0xeb
        __asm _emit 0xe3
        mov eax, dword ptr [ebp - 0a4h]
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov eax, dword ptr [ebp + 8]
        sub eax, edx
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 7ch], edx
        mov al, byte ptr [ebp - 6ch]
        mov byte ptr [ebp - 64h], al
        mov cl, byte ptr [ebp - 70h]
        mov byte ptr [ebp - 68h], cl
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 12: jmp 0x4441f0
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 78h]
        sub ecx, 1
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 74h]
        add edx, 4
        mov dword ptr [ebp - 74h], edx
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 76 0C: jbe 0x444202
        __asm _emit 0x76
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB DC: jmp 0x4441de
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 0a4h]
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x4442fa
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 88h], edx
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 90h], ecx
        ; Exact mapped bytes EB 1E: jmp 0x444265
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 90h]
        sub edx, 1
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp - 8ch]
        add eax, 4
        mov dword ptr [ebp - 8ch], eax
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 76 0F: jbe 0x44427d
        __asm _emit 0x76
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB CA: jmp 0x444247
        __asm _emit 0xeb
        __asm _emit 0xca
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 9ch]
        cmp eax, dword ptr [ebp - 84h]
        ; Exact mapped bytes 75 0E: jne 0x4442a8
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 0ach], ecx
        ; Exact mapped bytes EB 37: jmp 0x4442df
        __asm _emit 0xeb
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 9ch]
        sub edx, dword ptr [ebp - 84h]
        push edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        ; Exact mapped bytes E8 98 19 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 9ch]
        sub edx, dword ptr [ebp - 84h]
        add eax, edx
        mov dword ptr [ebp - 0ach], eax
        mov eax, dword ptr [ebp - 0ach]
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ecx + 4], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
