// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58522540 .. +0x12A bytes.
extern "C" __declspec(naked) void FUN_58522540_58522540() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58881975h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 54h
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
        ; Exact mapped bytes FF 15 18 41 89 58: call dword ptr [0x58894118]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 59 75 F8 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0
        push 588a4268h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 53 E5 FF FF: call 0x58520ae0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x5852261d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588a4274h
        ; Exact mapped bytes E8 50 FA FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 24 75 F8 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        push 588a429ch
        ; Exact mapped bytes E8 36 FA FF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 0A 75 F8 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 72 37 FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 67 37 FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        push 10h
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        push 0
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes FF 15 0C 42 89 58: call dword ptr [0x5889420c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 31 77 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 25 77 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 16 77 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 34: jmp 0x58522651
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp + 8], 280h
        ; Exact mapped bytes 74 1B: je 0x58522641
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0
        ; Exact mapped bytes FF 15 0C 42 89 58: call dword ptr [0x5889420c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F2 76 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 10: jmp 0x58522651
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E0 76 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x76
        __asm _emit 0xf8
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
        ; Exact mapped bytes E8 EA E9 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
