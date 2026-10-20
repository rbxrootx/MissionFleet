// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10072840 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_10072840_10072840() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push ebx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e1ffh
        or eax, 105h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 89 0D D8 56 1C 10: mov dword ptr [0x101c56d8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, esi
        ; Exact mapped bytes 89 35 DC 56 1C 10: mov dword ptr [0x101c56dc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 AE C8 08 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc8
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi + 58h], 100h
        ; Exact mapped bytes 8B 0D C8 58 1C 10: mov ecx, dword ptr [0x101c58c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40000h
        ; Exact mapped bytes E8 E7 FB 06 00: call 0x100e2470
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfb
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [esi + 0b4h], ebx
        mov dword ptr [esi + 0b8h], ebx
        mov dword ptr [esi + 0bch], ebx
        mov dword ptr [esi + 70h], ebx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 220000h
        ; Exact mapped bytes E8 62 98 04 00: call 0x100bc110
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x98
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 114h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 86 14 01 00 00: mov ax, word ptr [esi + 0x114]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 174h]
        push eax
        ; Exact mapped bytes E8 3F 35 05 00: call 0x100c5e10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 174h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 D0 56 1C 10: mov eax, dword ptr [0x101c56d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 DC 58 1C 10: mov eax, dword ptr [0x101c58dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 4], ebx
        ; Exact mapped bytes 75 1F: jne 0x10072910
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [eax + 1430h]
        mov dword ptr [eax + 4], 1
        cmp ecx, -1
        ; Exact mapped bytes 74 0D: je 0x10072910
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 1424h]
        push eax
        ; Exact mapped bytes FF 15 00 51 17 10: call dword ptr [0x10175100]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ecx + 21a38h], ebx
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [edx + 21a34h], ebx
        mov byte ptr [esi + 220h], bl
        pop esi
        pop ebx
        ret
    }
}
