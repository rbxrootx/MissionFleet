// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58970BD0 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_58970bd0() {
    __asm {
        push ebp
        ; Exact mapped bytes 8B 2D 58 C4 98 58: mov ebp, dword ptr [0x5898c458]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x58
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 30h], 0
        mov dword ptr [esi], 589a2eb0h
        ; Exact mapped bytes 74 38: je 0x58970c1e
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [esi + 4], -1
        ; Exact mapped bytes 74 32: je 0x58970c1e
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes FF 15 C0 2E 9A 58: call dword ptr [0x589a2ec0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x2e
        __asm _emit 0x9a
        __asm _emit 0x58
        mov eax, dword ptr [esi + 4]
        push 1
        push eax
        ; Exact mapped bytes FF 15 54 C4 98 58: call dword ptr [0x5898c454]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 4]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 2ch]
        push edx
        ; Exact mapped bytes E8 70 08 00 00: call 0x58971480
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 4], 0ffffffffh
        mov dword ptr [esi + 30h], 0
        mov eax, dword ptr [esi + 4]
        cmp eax, -1
        ; Exact mapped bytes 74 0D: je 0x58970c33
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 2ch]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58970c33
        __asm _emit 0x74
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 4D 08 00 00: call 0x58971480
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x58970c4a
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 02 C0 00 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 1ch], 0
        mov eax, dword ptr [esi + 4]
        cmp eax, -1
        ; Exact mapped bytes 74 1A: je 0x58970c6c
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 2ch]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58970c5f
        __asm _emit 0x74
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 21 08 00 00: call 0x58971480
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
    }
}
