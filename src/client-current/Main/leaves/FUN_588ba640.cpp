// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BA640 .. +0x152 bytes.
extern "C" __declspec(naked) void FUN_588ba640() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        cmp eax, 3
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x588ba78c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x588ba78c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 2A 01 00 00: jne 0x588ba78c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 75 45: jne 0x588ba6b0
        __asm _emit 0x75
        __asm _emit 0x45
        push 0
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 90h]
        movzx edx, byte ptr [esi + 8ch]
        mov eax, dword ptr [esi + 88h]
        push -1
        push ecx
        mov ecx, dword ptr [eax + 48h]
        push edx
        shr ecx, 0ah
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F F2 EF FF: call 0x587b98b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf2
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 75 20: jne 0x588ba6d8
        __asm _emit 0x75
        __asm _emit 0x20
        push 0
        ; Exact mapped bytes E8 61 6F E7 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x6f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8ch]
        mov edx, dword ptr [esi + 88h]
        push 1
        push 0
        push ecx
        push edx
        push 5
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x588ba773
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 75 1D: jne 0x588ba6fd
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        ; Exact mapped bytes E8 39 6F E7 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6f
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8ch]
        mov edx, dword ptr [esi + 88h]
        push 1
        push 0
        push ecx
        push edx
        push 6
        ; Exact mapped bytes EB 76: jmp 0x588ba773
        __asm _emit 0xeb
        __asm _emit 0x76
        cmp eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 75 1D: jne 0x588ba71f
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        ; Exact mapped bytes E8 17 6F E7 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x6f
        __asm _emit 0xe7
        __asm _emit 0xff
        push 0
        push 0
        mov ecx, dword ptr [esi + 8ch]
        mov edx, dword ptr [esi + 88h]
        push ecx
        push edx
        push 0bh
        ; Exact mapped bytes EB 54: jmp 0x588ba773
        __asm _emit 0xeb
        __asm _emit 0x54
        cmp eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 75 0D: jne 0x588ba731
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0
        ; Exact mapped bytes E8 F5 6E E7 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x6e
        __asm _emit 0xe7
        __asm _emit 0xff
        push 0
        push 1
        ; Exact mapped bytes EB DC: jmp 0x588ba70d
        __asm _emit 0xeb
        __asm _emit 0xdc
        cmp eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 75 1D: jne 0x588ba753
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        ; Exact mapped bytes E8 E3 6E E7 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x6e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8ch]
        mov edx, dword ptr [esi + 88h]
        push 0
        push 0
        push ecx
        push edx
        push 0ch
        ; Exact mapped bytes EB 20: jmp 0x588ba773
        __asm _emit 0xeb
        __asm _emit 0x20
        cmp eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 75 34: jne 0x588ba78c
        __asm _emit 0x75
        __asm _emit 0x34
        push 0
        ; Exact mapped bytes E8 C1 6E E7 FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x6e
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8ch]
        mov edx, dword ptr [esi + 88h]
        push 0
        push 0
        push ecx
        push edx
        push 0dh
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db0h]
        ; Exact mapped bytes E8 DD E5 ED FF: call 0x58798d60
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe5
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
