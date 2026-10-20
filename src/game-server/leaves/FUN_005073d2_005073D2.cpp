// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005073D2 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_005073d2_005073D2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        ; Exact mapped bytes E8 A6 9B 02 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x507414
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        ; Exact mapped bytes E8 84 37 FF FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x507414
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3ch]
        push eax
        push 5ca368h
        ; Exact mapped bytes E8 04 88 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 74 45: je 0x507462
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 75 3C: jne 0x507462
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes E8 17 E1 02 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 44: mov cx, word ptr [eax + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x44
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 D8 27 5E 00: call dword ptr [0x5e27d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 2ch], eax
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 44: mov ax, word ptr [edx + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x44
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 50 25 5E 00: call dword ptr [0x5e2550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 30h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 74 45: je 0x5074b0
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 3C: jne 0x5074b0
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes E8 C9 E0 02 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 40: mov ax, word ptr [edx + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x40
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 D8 27 5E 00: call dword ptr [0x5e27d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 34h], eax
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 40: mov cx, word ptr [eax + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x40
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 50 25 5E 00: call dword ptr [0x5e2550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 38h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 74 45: je 0x5074fe
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 75 3C: jne 0x5074fe
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes E8 7B E0 02 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 48: mov dx, word ptr [ecx + 0x48]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x48
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 D8 27 5E 00: call dword ptr [0x5e27d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 48: mov ax, word ptr [edx + 0x48]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x48
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 50 25 5E 00: call dword ptr [0x5e2550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 28h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
