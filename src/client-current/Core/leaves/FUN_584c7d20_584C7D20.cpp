// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C7D20 .. +0x310 bytes.
extern "C" __declspec(naked) void FUN_584c7d20_584C7D20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ee78h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14ch
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
        mov dword ptr [ebp - 8ch], ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 94 F8 FF FF: call 0x584c75f0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x584c7d68
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 AF 02 00 00: jmp 0x584c8017
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 FB 0E 2D 00: call 0x58798c70
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0x2d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 5C F5 FF FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        push 589604e0h
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 CB F7 FF FF: call 0x584c7560
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 589604e0h
        lea ecx, [ebp - 0d8h]
        ; Exact mapped bytes E8 EA 0D 2D 00: call 0x58798b90
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0d
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 0d8h]
        push ecx
        push 58895df8h
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 BF 13 2D 00: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x13
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 38 12 2D 00: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x12
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0d8h]
        ; Exact mapped bytes E8 A9 11 2D 00: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x11
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        lea edx, [ebp - 70h]
        push edx
        ; Exact mapped bytes E8 0F 04 04 00: call 0x585081f0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 3B DF FF FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0f0h]
        ; Exact mapped bytes E8 7F 0D 2D 00: call 0x58798b90
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0d
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 0f0h]
        push ecx
        push 58895e04h
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 54 13 2D 00: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x13
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CD 11 2D 00: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x11
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 0f0h]
        ; Exact mapped bytes E8 3E 11 2D 00: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x11
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 E2 1E FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        lea edx, [ebp - 88h]
        push edx
        ; Exact mapped bytes E8 55 05 04 00: call 0x585083b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 C1 DE FF FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 05 0D 2D 00: call 0x58798b90
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0d
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 6
        lea ecx, [ebp - 108h]
        push ecx
        push 58895e10h
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 DA 12 2D 00: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x12
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 53 11 2D 00: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x11
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 C4 10 2D 00: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x10
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 65 1E FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 15 8C 5E 96 58: mov edx, dword ptr [0x58965e8c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        lea ecx, [ebp - 120h]
        ; Exact mapped bytes E8 42 0C 2D 00: call 0x58798b20
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0c
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        lea eax, [ebp - 120h]
        push eax
        push 58895e1ch
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 87 12 2D 00: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 00 11 2D 00: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x11
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 120h]
        ; Exact mapped bytes E8 71 10 2D 00: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x10
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 05 34 2D 00: call 0x5879b320
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 8
        push 58895e34h
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 61 0C 2D 00: call 0x58798b90
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        push 58895e28h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 90 1B FE FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0ah
        lea ecx, [ebp - 138h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 76 34 2D 00: call 0x5879b3d0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x34
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9F 10 2D 00: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x10
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 C3 1D FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 04 10 2D 00: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        lea eax, [ebp - 0b4h]
        push eax
        lea ecx, [ebp - 158h]
        push ecx
        lea edx, [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 0C 56 2D 00: call 0x5879d5a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x56
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 4], 0bh
        sub esp, 18h
        mov ecx, esp
        mov dword ptr [ebp - 0b8h], esp
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 71 1A FE FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 0ch
        sub esp, 18h
        mov ecx, esp
        mov dword ptr [ebp - 0c0h], esp
        push 589604e0h
        ; Exact mapped bytes E8 02 1B FE FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0bh
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 E4 FB FF FF: call 0x584c7bc0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 47 1D FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 B8 33 2D 00: call 0x5879b3b0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x33
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 2C 1D FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 6A 0F 2D 00: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0f
        __asm _emit 0x2d
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
        ; Exact mapped bytes E8 24 90 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x36
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
