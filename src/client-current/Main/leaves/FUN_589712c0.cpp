// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589712C0 .. +0x145 bytes.
extern "C" __declspec(naked) void FUN_589712c0() {
    __asm {
        sub esp, 0dch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 0d8h], eax
        mov edx, dword ptr [esp + 0e0h]
        movzx eax, word ptr [edx + 6]
        push esi
        mov esi, 8000h
        ; Exact mapped bytes 66 3B C6: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 75 26: jne 0x58971310
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [edx + 4], 80000002h
        ; Exact mapped bytes 0F 85 F1 00 00 00: jne 0x589713e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edx + 0ch], 80020010h
        ; Exact mapped bytes 0F 85 E4 00 00 00: jne 0x589713e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 30h], 2
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x589713e8
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, 8001h
        ; Exact mapped bytes 66 3B C6: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x589713e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 4]
        cmp eax, 80010109h
        ; Exact mapped bytes 0F 87 9C 00 00 00: ja 0x589713c8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 3A: je 0x58971368
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp eax, 80010001h
        ; Exact mapped bytes 74 1F: je 0x58971354
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp eax, 8001000fh
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x589713e8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002000fh
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x589713e3
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 8002h
        push 0
        push 80000002h
        ; Exact mapped bytes EB 7B: jmp 0x589713e3
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov esi, dword ptr [ecx + 120h]
        mov edx, dword ptr [ecx + 12ch]
        mov eax, dword ptr [ecx + 128h]
        push edi
        mov edi, dword ptr [ecx + 124h]
        mov dword ptr [esp + 18h], edi
        add edi, esi
        push 0
        add edi, edx
        push 0d8h
        add edi, eax
        mov dword ptr [esp + 14h], eax
        lea eax, [esp + 10h]
        push eax
        push 80010109h
        push 0
        not edi
        push 80020010h
        mov dword ptr [esp + 20h], 0
        mov dword ptr [esp + 28h], edx
        mov dword ptr [esp + 2ch], esi
        mov dword ptr [esp + 0f4h], edi
        ; Exact mapped bytes E8 AB F8 FF FF: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        ; Exact mapped bytes EB 20: jmp 0x589713e8
        __asm _emit 0xeb
        __asm _emit 0x20
        cmp eax, 8001010bh
        ; Exact mapped bytes 75 19: jne 0x589713e8
        __asm _emit 0x75
        __asm _emit 0x19
        push 0
        push 0c4h
        lea edx, [esp + 0ch]
        push edx
        push eax
        push 0
        push 80020011h
        ; Exact mapped bytes E8 88 F8 FF FF: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0dch]
        pop esi
        xor ecx, esp
        mov eax, 1
        ; Exact mapped bytes E8 DE B7 00 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0dch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
