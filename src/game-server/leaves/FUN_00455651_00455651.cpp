// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00455651 .. +0x219 bytes.
extern "C" __declspec(naked) void FUN_00455651_00455651() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b782h
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
        sub esp, 2ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 38h]
        mov ecx, 0bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 77 B8 0D 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        push 5b8548h
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 A2 92 07 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x92
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 14h
        push 5b8570h
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 490h
        ; Exact mapped bytes E8 40 80 00 00: call 0x45d710
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D2 B8 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb8
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 490h
        ; Exact mapped bytes E8 59 80 00 00: call 0x45d740
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 4
        push 0
        push 1
        push 40000000h
        push 0
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 490h
        ; Exact mapped bytes E8 65 80 00 00: call 0x45d770
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C7 30 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x455838
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0ah
        push 0dh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        push 5b8594h
        push 5d7d0ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 2ch
        cmp esi, esp
        ; Exact mapped bytes E8 69 30 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 50 30 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 1ch]
        push edx
        mov edi, esp
        push 5d7d0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 34 30 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 5d7d0ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1D 30 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4557cd
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 18: jne 0x4557e5
        __asm _emit 0x75
        __asm _emit 0x18
        mov byte ptr [ebp - 20h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6C 80 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 20h]
        ; Exact mapped bytes EB 69: jmp 0x45584e
        __asm _emit 0xeb
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 0F: je 0x455806
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6F 75 00 00: call 0x45cd70
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x45580d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov esi, esp
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C0 2F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 2ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 19 80 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 2ch]
        ; Exact mapped bytes EB 16: jmp 0x45584e
        __asm _emit 0xeb
        __asm _emit 0x16
        mov byte ptr [ebp - 30h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 01 80 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        mov al, byte ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 38h
        cmp ebp, esp
        ; Exact mapped bytes E8 7C 2F 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
