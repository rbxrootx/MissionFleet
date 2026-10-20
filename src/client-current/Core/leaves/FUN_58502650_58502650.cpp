// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502650 .. +0x1BC bytes.
extern "C" __declspec(naked) void FUN_58502650_58502650() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880135h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0e8h
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
        push 9ch
        push 0
        lea eax, [ebp - 0dch]
        push eax
        ; Exact mapped bytes E8 82 A7 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa7
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 9ch
        ; Exact mapped bytes 66 89 8D 48 FF FF FF: mov word ptr [ebp - 0xb8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 9ch
        push 0
        push 58947240h
        ; Exact mapped bytes E8 62 A7 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa7
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        mov edx, 9ch
        ; Exact mapped bytes 66 89 15 64 72 94 58: mov word ptr [0x58947264], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x72
        __asm _emit 0x94
        __asm _emit 0x58
        push 58947240h
        push -1
        push 0
        ; Exact mapped bytes FF 15 D0 44 89 58: call dword ptr [0x588944d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 0dch]
        push eax
        push -1
        push 0
        ; Exact mapped bytes FF 15 D0 44 89 58: call dword ptr [0x588944d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        cmp dword ptr [ebp - 74h], 10h
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x585027f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], 10h
        push 0
        lea ecx, [ebp - 0dch]
        push ecx
        ; Exact mapped bytes FF 15 D4 44 89 58: call dword ptr [0x588944d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 0e4h], eax
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 75 1A: jne 0x58502727
        __asm _emit 0x75
        __asm _emit 0x1a
        push 1
        lea edx, [ebp - 0dch]
        push edx
        ; Exact mapped bytes FF 15 D4 44 89 58: call dword ptr [0x588944d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x585027f3
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 70 FA FF FF: call 0x585021a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0e8h], eax
        mov ecx, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 0ech], ecx
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 0ech]
        push edx
        ; Exact mapped bytes E8 D8 FD FF FF: call 0x58502530
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 0ddh], al
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 30 C6 FC FF: call 0x584ceda0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 0ddh]
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x585027ad
        __asm _emit 0x74
        __asm _emit 0x32
        push 588a3958h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 48 73 FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x73
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 88 FB FF FF: call 0x58502320
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 86 75 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x75
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 46: jmp 0x585027f3
        __asm _emit 0xeb
        __asm _emit 0x46
        push 588a3964h
        ; Exact mapped bytes E8 39 F8 01 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f0h], eax
        push 588a398ch
        ; Exact mapped bytes E8 26 F8 01 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0f4h], eax
        push 10h
        mov edx, dword ptr [ebp - 0f0h]
        push edx
        mov eax, dword ptr [ebp - 0f4h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 68 53 35 00: call 0x58857b5a
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x53
        __asm _emit 0x35
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 48 E8 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
