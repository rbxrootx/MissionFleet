// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588345AD .. +0x167 bytes.
extern "C" __declspec(naked) void FUN_588345ad_588345AD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push 588f18b4h
        mov bl, 1
        ; Exact mapped bytes E8 92 7D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 D4 42 89 58: call dword ptr [0x588942d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 0F 84 39 01 00 00: je 0x5883470c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 588f18c4h
        ; Exact mapped bytes E8 75 7D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 B0 25 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f18e0h
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 60 7D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 9B 25 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        push 588f18f8h
        mov dword ptr [ebp - 0ch], edi
        ; Exact mapped bytes E8 49 7D 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 84 25 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x58834704
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x58834704
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x58834704
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        mov dword ptr [ebp - 4], eax
        test eax, eax
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x58834704
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 F8 C9 FF FF: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov edi, eax
        push edi
        push dword ptr [ebp - 4]
        push dword ptr [ebp - 8]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        test eax, eax
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x588346fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        lea eax, [ebp - 0ch]
        push eax
        push 588f03c8h
        push edi
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx], 0feef04bdh
        ; Exact mapped bytes 75 7F: jne 0x588346fd
        __asm _emit 0x75
        __asm _emit 0x7f
        movzx eax, word ptr [edx + 0ah]
        imul ecx, eax, 64h
        movzx eax, word ptr [edx + 8]
        add ecx, eax
        movzx eax, word ptr [edx + 0eh]
        imul ecx, ecx, 64h
        add ecx, eax
        movzx eax, word ptr [edx + 0ch]
        imul ecx, ecx, 64h
        add ecx, eax
        movzx eax, word ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        imul ecx, eax, 64h
        movzx eax, word ptr [ebp + 10h]
        add ecx, eax
        movzx eax, word ptr [ebp + 14h]
        imul ecx, ecx, 64h
        add ecx, eax
        movzx eax, word ptr [ebp + 18h]
        imul ecx, ecx, 64h
        add ecx, eax
        ; Exact mapped bytes 83 3D EC 83 96 58 00: cmp dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 74 27: je 0x588346f2
        __asm _emit 0x74
        __asm _emit 0x27
        push ecx
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 8]
        push 588f190ch
        ; Exact mapped bytes E8 77 7C 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes A1 EC 83 96 58: mov eax, dword ptr [0x589683ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 28h
        push eax
        ; Exact mapped bytes E8 9E 59 00 00: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add esp, 14h
        xor eax, eax
        movzx ebx, bl
        cmp dword ptr [ebp - 4], ecx
        cmovb ebx, eax
        push edi
        ; Exact mapped bytes E8 48 C9 FF FF: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push esi
        ; Exact mapped bytes FF 15 E8 42 89 58: call dword ptr [0x588942e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        pop edi
        pop esi
        mov al, bl
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
