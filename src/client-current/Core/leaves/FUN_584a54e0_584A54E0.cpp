// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A54E0 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_584a54e0_584A54E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887deddh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
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
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes E8 33 4C 00 00: call 0x584aa140
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8C 6F FE FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 83 CD FF FF: call 0x584a22a0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 50 2B FE FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x584a553c
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 95 D2 FF FF: call 0x584a27d0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 24h]
        push ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 48 2C FE FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 7F 24 FE FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 50: je 0x584a55a8
        __asm _emit 0x74
        __asm _emit 0x50
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E0 24 FE FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 53 1F FE FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4C 1F FE FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 FF FF FF: call 0x584a54c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 22: je 0x584a55a6
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 75 18: jne 0x584a55a6
        __asm _emit 0x75
        __asm _emit 0x18
        mov byte ptr [ebp - 0dh], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 3F 22 FE FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        mov al, byte ptr [ebp - 0dh]
        ; Exact mapped bytes EB 18: jmp 0x584a55be
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes EB 8B: jmp 0x584a5533
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov byte ptr [ebp - 0eh], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 25 22 FE FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        mov al, byte ptr [ebp - 0eh]
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
