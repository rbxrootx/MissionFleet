// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C0630 .. +0x15F bytes.
extern "C" __declspec(naked) void FUN_584c0630_584C0630() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ea10h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58895a68h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 5f4h], 0
        ; Exact mapped bytes 74 0F: je 0x584c067c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 5f4h]
        ; Exact mapped bytes E8 25 63 FC FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5f4h], 0
        ; Exact mapped bytes 74 3D: je 0x584c06c5
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5f4h]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x584c06b1
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c06b8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5f4h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 5f0h], 0
        ; Exact mapped bytes 74 3D: je 0x584c070e
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f0h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x584c06fa
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c0701
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5f0h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584c0720
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 28h
        ; Exact mapped bytes 7D 51: jge 0x584c0777
        __asm _emit 0x7d
        __asm _emit 0x51
        imul eax, dword ptr [ebp - 14h], 24h
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax + 70h], 0
        ; Exact mapped bytes 74 41: je 0x584c0775
        __asm _emit 0x74
        __asm _emit 0x41
        imul edx, dword ptr [ebp - 14h], 24h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x584c075f
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 34h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x584c0766
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        imul edx, dword ptr [ebp - 14h], 24h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 70h], 0
        ; Exact mapped bytes EB A0: jmp 0x584c0717
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E1 43 2F 00: call 0x587b4b60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x43
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
