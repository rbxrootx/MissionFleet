// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004055BB .. +0xFB bytes.
extern "C" __declspec(naked) void FUN_004055bb_004055BB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 6ch]
        mov ecx, 1bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 6ch], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        mov eax, dword ptr [ebp - 6ch]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E1 31 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x4056a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B9 31 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 8]
        push eax
        push 60h
        lea ecx, [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9A 31 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 36: jne 0x405684
        __asm _emit 0x75
        __asm _emit 0x36
        mov esi, esp
        push 0
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 71 31 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5E 31 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x40569b
        __asm _emit 0xeb
        __asm _emit 0x17
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 49 31 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 09: jmp 0x4056a4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4056a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        add esp, 6ch
        cmp ebp, esp
        ; Exact mapped bytes E8 30 31 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x31
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
