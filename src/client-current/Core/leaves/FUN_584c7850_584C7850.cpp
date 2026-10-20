// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C7850 .. +0x31C bytes.
extern "C" __declspec(naked) void FUN_584c7850_584C7850() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887edc0h
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
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        add ecx, 60h
        ; Exact mapped bytes E8 46 FC FF FF: call 0x584c74e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 C9 13 2D 00: call 0x58798c70
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x13
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 2D FA FF FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        push 589604e0h
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 9C FC FF FF: call 0x584c7560
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 589604e0h
        lea ecx, [ebp - 0d8h]
        ; Exact mapped bytes E8 BB 12 2D 00: call 0x58798b90
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x12
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 0d8h]
        push ecx
        push 58895e38h
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 90 18 2D 00: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 09 17 2D 00: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x17
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 0d8h]
        ; Exact mapped bytes E8 7A 16 2D 00: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x16
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        lea edx, [ebp - 70h]
        push edx
        ; Exact mapped bytes E8 E0 08 04 00: call 0x585081f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 94h], eax
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 0C E4 FF FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0f0h]
        ; Exact mapped bytes E8 50 12 2D 00: call 0x58798b90
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x12
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 0f0h]
        push ecx
        push 58895e44h
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 25 18 2D 00: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x18
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9E 16 2D 00: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 0f0h]
        ; Exact mapped bytes E8 0F 16 2D 00: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 B3 23 FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        lea edx, [ebp - 88h]
        push edx
        ; Exact mapped bytes E8 26 0A 04 00: call 0x585083b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [ebp - 9ch], eax
        mov byte ptr [ebp - 4], 6
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 92 E3 FF FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 D6 11 2D 00: call 0x58798b90
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x11
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 108h]
        push ecx
        push 58895e50h
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 AB 17 2D 00: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x17
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 24 16 2D 00: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x16
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 6
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 95 15 2D 00: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x15
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 36 23 FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x23
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
        ; Exact mapped bytes E8 13 11 2D 00: call 0x58798b20
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x11
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 8
        lea eax, [ebp - 120h]
        push eax
        push 58895e5ch
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 58 17 2D 00: call 0x58799180
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D1 15 2D 00: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x15
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 120h]
        ; Exact mapped bytes E8 42 15 2D 00: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x15
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 D6 38 2D 00: call 0x5879b320
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x38
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        push 58895e74h
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 32 11 2D 00: call 0x58798b90
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x11
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ah
        push 58895e68h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 61 20 FE FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0bh
        lea ecx, [ebp - 138h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 47 39 2D 00: call 0x5879b3d0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 70 15 2D 00: call 0x58799000
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x15
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ah
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 94 22 FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 D5 14 2D 00: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x14
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        lea eax, [ebp - 0b4h]
        push eax
        lea ecx, [ebp - 158h]
        push ecx
        lea edx, [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 DD 5A 2D 00: call 0x5879d5a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5a
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 4], 0ch
        sub esp, 18h
        mov ecx, esp
        mov dword ptr [ebp - 0b8h], esp
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 42 1F FE FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov byte ptr [ebp - 4], 0dh
        sub esp, 18h
        mov ecx, esp
        mov dword ptr [ebp - 0c0h], esp
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes E8 24 1F FE FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0ch
        mov ecx, 5890bef0h
        ; Exact mapped bytes E8 26 FB FF FF: call 0x584c7630
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 4], 9
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 19 22 FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 8A 38 2D 00: call 0x5879b3b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x38
        __asm _emit 0x2d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 FE 21 FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 3F 14 2D 00: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x14
        __asm _emit 0x2d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 8]
        ; Exact mapped bytes E8 E0 21 FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x21
        __asm _emit 0xfe
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
        ; Exact mapped bytes E8 EA 94 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x94
        __asm _emit 0x36
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
