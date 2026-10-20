// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045A5F6 .. +0x1AB bytes.
extern "C" __declspec(naked) void FUN_0045a5f6_0045A5F6() {
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
        push 0
        ; Exact mapped bytes E8 92 F6 04 00: call 0x4a9cb0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 73 1B 05 00: call 0x4ac1a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        push 7ch
        ; Exact mapped bytes E8 86 2D 09 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 14h]
        add eax, 76ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 10h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 14h], ecx
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 18h
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 32 E1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 28h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 18 E1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe1
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 38h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FE E0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ebp + 14h]
        mov byte ptr [edx + 4ch], al
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ebp + 18h]
        mov byte ptr [ecx + 4dh], dl
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 1ch]
        mov byte ptr [eax + 4eh], cl
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ebp + 20h]
        mov byte ptr [edx + 50h], al
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ebp + 24h]
        mov byte ptr [ecx + 51h], dl
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 28h]
        mov byte ptr [eax + 52h], cl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 2ch]
        mov dword ptr [edx + 54h], eax
        push 0ch
        mov ecx, dword ptr [ebp + 30h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 58h
        push edx
        ; Exact mapped bytes E8 ED E8 04 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        mov eax, dword ptr [ebp + 34h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        push ecx
        ; Exact mapped bytes E8 D8 E8 04 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 81 E0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 8
        ; Exact mapped bytes E8 AC 30 00 00: call 0x45d820
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5dcb60h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 58 E0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D0 1F 00 00: call 0x45c760
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 45 E0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 30 00: ret 0x30
        __asm _emit 0xc2
        __asm _emit 0x30
        __asm _emit 0x00
    }
}
