// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC392 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_004ec392_004EC392() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        ; Exact mapped bytes E8 E6 89 03 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x4ec3d4
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        ; Exact mapped bytes E8 C4 D8 FE FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ec3d4
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 3ch]
        push eax
        push 676af0h
        ; Exact mapped bytes E8 44 42 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 74 45: je 0x4ec422
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 75 3C: jne 0x4ec422
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes E8 C7 56 04 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x56
        __asm _emit 0x04
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
        ; Exact mapped bytes FF 15 80 BC 68 00: call dword ptr [0x68bc80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xbc
        __asm _emit 0x68
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
        ; Exact mapped bytes FF 15 68 BC 68 00: call dword ptr [0x68bc68]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 30h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 74 45: je 0x4ec470
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 3C: jne 0x4ec470
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes E8 79 56 04 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x56
        __asm _emit 0x04
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
        ; Exact mapped bytes FF 15 80 BC 68 00: call dword ptr [0x68bc80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xbc
        __asm _emit 0x68
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
        ; Exact mapped bytes FF 15 68 BC 68 00: call dword ptr [0x68bc68]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 38h], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 74 45: je 0x4ec4be
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 75 3C: jne 0x4ec4be
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes E8 2B 56 04 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x56
        __asm _emit 0x04
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
        ; Exact mapped bytes FF 15 80 BC 68 00: call dword ptr [0x68bc80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xbc
        __asm _emit 0x68
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
        ; Exact mapped bytes FF 15 68 BC 68 00: call dword ptr [0x68bc68]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 28h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
