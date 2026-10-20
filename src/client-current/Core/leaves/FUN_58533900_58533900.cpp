// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58533900 .. +0x200 bytes.
extern "C" __declspec(naked) void FUN_58533900_58533900() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 06: je 0x5853392e
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 7F 07: jg 0x58533935
        __asm _emit 0x7f
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x58533af2
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dword ptr [ebp - 78h], edx
        mov dword ptr [ebp - 74h], edx
        mov dword ptr [ebp - 70h], edx
        mov dword ptr [ebp - 6ch], edx
        mov dword ptr [ebp - 68h], edx
        mov dword ptr [ebp - 64h], edx
        mov dword ptr [ebp - 60h], edx
        mov dword ptr [ebp - 5ch], edx
        mov dword ptr [ebp - 74h], 2
        mov dword ptr [ebp - 70h], 1
        mov dword ptr [ebp - 2ch], 0
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 78h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 6C 45 89 58: call dword ptr [0x5889456c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58533983
        __asm _emit 0x74
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 6F 01 00 00: jmp 0x58533af2
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 70 45 89 58: call dword ptr [0x58894570]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 04 41 89 58: call dword ptr [0x58894104]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], -1
        ; Exact mapped bytes 75 07: jne 0x585339b5
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 3D 01 00 00: jmp 0x58533af2
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], 20h
        ; Exact mapped bytes 8B 15 74 4B 8A 58: mov edx, dword ptr [0x588a4b74]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x4b
        __asm _emit 0x8a
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes A1 78 4B 8A 58: mov eax, dword ptr [0x588a4b78]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x4b
        __asm _emit 0x8a
        __asm _emit 0x58
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 8B 0D 7C 4B 8A 58: mov ecx, dword ptr [0x588a4b7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x4b
        __asm _emit 0x8a
        __asm _emit 0x58
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 66 8B 15 80 4B 8A 58: mov dx, word ptr [0x588a4b80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x4b
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes A0 82 4B 8A 58: mov al, byte ptr [0x588a4b82]
        __asm _emit 0xa0
        __asm _emit 0x82
        __asm _emit 0x4b
        __asm _emit 0x8a
        __asm _emit 0x58
        mov byte ptr [ebp - 16h], al
        xor ecx, ecx
        mov dword ptr [ebp - 15h], ecx
        mov dword ptr [ebp - 11h], ecx
        mov dword ptr [ebp - 0dh], ecx
        mov dword ptr [ebp - 9], ecx
        mov byte ptr [ebp - 5], cl
        mov dword ptr [ebp - 40h], 3ch
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 38 D6 2F 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x58533a36
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 7D 7E: jge 0x58533abc
        __asm _emit 0x7d
        __asm _emit 0x7e
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        push 0
        push 20h
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 FC 40 89 58: call dword ptr [0x588940fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 35: je 0x58533a9e
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 17: jne 0x58533a8f
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x58533a9c
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 0D: jmp 0x58533aab
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        push 0c8h
        ; Exact mapped bytes FF 15 40 42 89 58: call dword ptr [0x58894240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x58533a2d
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 80 D5 2F 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd5
        __asm _emit 0x2f
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes FF 15 F8 40 89 58: call dword ptr [0x588940f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 7E 11: jle 0x58533af0
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 3ch]
        xor edx, edx
        div dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], eax
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x58533af2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 54 D5 2F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd5
        __asm _emit 0x2f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
