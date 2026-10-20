// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004E100 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_1004e100_1004E100() {
    __asm {
        push -1
        push 1016ea48h
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
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 8], edi
        mov dword ptr [edi], 10175b48h
        ; Exact mapped bytes 8B 0D 34 59 1C 10: mov ecx, dword ptr [0x101c5934]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        xor esi, esi
        cmp ecx, esi
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes 74 0C: je 0x1004e140
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 35 34 59 1C 10: mov dword ptr [0x101c5934], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x34
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 30 59 1C 10: mov ecx, dword ptr [0x101c5930]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x1004e156
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 35 30 59 1C 10: mov dword ptr [0x101c5930], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 2C 59 1C 10: mov ecx, dword ptr [0x101c592c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x1004e16c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 35 2C 59 1C 10: mov dword ptr [0x101c592c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x2c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 28 59 1C 10: mov ecx, dword ptr [0x101c5928]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x1004e182
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 35 28 59 1C 10: mov dword ptr [0x101c5928], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 24 59 1C 10: mov ecx, dword ptr [0x101c5924]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x1004e198
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 35 24 59 1C 10: mov dword ptr [0x101c5924], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x24
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 20 59 1C 10: mov ecx, dword ptr [0x101c5920]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x1004e1ae
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 35 20 59 1C 10: mov dword ptr [0x101c5920], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 1C 59 1C 10: mov ecx, dword ptr [0x101c591c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x1004e1c4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 35 1C 59 1C 10: mov dword ptr [0x101c591c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D DC 58 1C 10: mov ecx, dword ptr [0x101c58dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x1004e1da
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 35 DC 58 1C 10: mov dword ptr [0x101c58dc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, edi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 B7 4C 0B 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
