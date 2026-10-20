// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883D236 .. +0x114 bytes.
extern "C" __declspec(naked) void FUN_5883d236_5883D236() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov esi, ecx
        push edi
        lea edi, [esi + 8]
        cmp dword ptr [edi], -1
        ; Exact mapped bytes 74 07: je 0x5883d24f
        __asm _emit 0x74
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x5883d344
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 0ch], 0
        push ebx
        push -0bh
        mov dword ptr [ebp - 10h], 0ch
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes FF 15 F4 42 89 58: call dword ptr [0x588942f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 5000h
        lea ecx, [ebp - 10h]
        mov dword ptr [esi + 3850h], eax
        push ecx
        lea ebx, [esi + 3860h]
        lea eax, [esi + 385ch]
        push ebx
        push eax
        ; Exact mapped bytes FF 15 8C 42 89 58: call dword ptr [0x5889428c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x5883d335
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebx]
        push -0bh
        ; Exact mapped bytes FF 15 F0 42 89 58: call dword ptr [0x588942f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x5883d335
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 54 42 89 58: mov ebx, dword ptr [0x58894254]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [esi + 0ch]
        push 2
        push 0
        push 0
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        push dword ptr [esi + 385ch]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        ; Exact mapped bytes FF 15 90 42 89 58: call dword ptr [0x58894290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 68: je 0x5883d335
        __asm _emit 0x74
        __asm _emit 0x68
        push dword ptr [esi + 385ch]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push -0ah
        ; Exact mapped bytes FF 15 F4 42 89 58: call dword ptr [0x588942f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 5000h
        mov dword ptr [esi + 384ch], eax
        lea ecx, [ebp - 10h]
        lea eax, [esi + 3858h]
        add esi, 3854h
        push ecx
        push eax
        push esi
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF 15 8C 42 89 58: call dword ptr [0x5889428c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x5883d335
        __asm _emit 0x74
        __asm _emit 0x2a
        push dword ptr [esi]
        push -0ah
        ; Exact mapped bytes FF 15 F0 42 89 58: call dword ptr [0x588942f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x5883d335
        __asm _emit 0x74
        __asm _emit 0x1c
        push 2
        push 0
        push 0
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov esi, dword ptr [ebp - 4]
        push eax
        push dword ptr [esi]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        ; Exact mapped bytes FF 15 90 42 89 58: call dword ptr [0x58894290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5883d339
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 0A: jmp 0x5883d343
        __asm _emit 0xeb
        __asm _emit 0x0a
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov al, 1
        pop ebx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
