// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DA4F .. +0x1FC bytes.
extern "C" __declspec(naked) void FUN_0041da4f_0041DA4F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        push 84h
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 F0 B8 08 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp + 8]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 4A 11 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 26 10 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 1D 13 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x41dac3
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 77 01 00 00: jmp 0x41dc3a
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 85 12 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2dh
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CE AC 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 2ch
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ch
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B1 AC 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 44h
        mov esi, esp
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 24h
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 94 AC 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 58: mov ax, word ptr [edx + 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 41 4A: mov word ptr [ecx + 0x4a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 56: mov ax, word ptr [edx + 0x56]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x56
        ; Exact mapped bytes 66 89 41 48: mov word ptr [ecx + 0x48], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x48
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 54: mov ax, word ptr [edx + 0x54]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x54
        ; Exact mapped bytes 66 89 41 46: mov word ptr [ecx + 0x46], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x46
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ecx + 4ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ecx + 50h], eax
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 8A 00 00 00: mov dx, word ptr [ecx + 0x8a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 5
        ; Exact mapped bytes 7E 0C: jle 0x41dbab
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 80 8A 00 00 00 05 00: mov word ptr [eax + 0x8a], 5
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 8ah]
        mov byte ptr [ecx + 5ah], al
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 88 00 00 00: mov ax, word ptr [edx + 0x88]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 41 58: mov word ptr [ecx + 0x58], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 86 00 00 00: mov ax, word ptr [edx + 0x86]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 41 56: mov word ptr [ecx + 0x56], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x56
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 84 00 00 00: mov ax, word ptr [edx + 0x84]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 41 54: mov word ptr [ecx + 0x54], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x41dbff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 30: jge 0x41dc35
        __asm _emit 0x7d
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [esi + ecx*8 + 8ch]
        mov dword ptr [eax + edx*8 + 5ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [esi + ecx*8 + 90h]
        mov dword ptr [eax + edx*8 + 60h], ecx
        ; Exact mapped bytes EB C1: jmp 0x41dbf6
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov eax, 1
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 9B AB 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xab
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
