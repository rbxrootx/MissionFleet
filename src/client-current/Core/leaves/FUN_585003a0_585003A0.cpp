// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585003A0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_585003a0_585003A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ff5dh
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
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes E8 70 99 03 00: call 0x58539d40
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 53: je 0x5850042c
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 30h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 EB 96 FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        add edx, 14h
        push edx
        ; Exact mapped bytes E8 34 FC FF FF: call 0x58500030
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5850041c
        __asm _emit 0x74
        __asm _emit 0x16
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 14h
        ; Exact mapped bytes E8 CB 70 FC FF: call 0x584c74e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x70
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov byte ptr [edx + 2ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 05 99 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x99
        __asm _emit 0xfa
        __asm _emit 0xff
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 0F 0C 33 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0c
        __asm _emit 0x33
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
