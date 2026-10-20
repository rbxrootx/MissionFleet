// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10024860 .. +0x5AE bytes.
extern "C" __declspec(naked) void FUN_10024860_10024860() {
    __asm {
        sub esp, 54h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, 50h
        lea ebx, [esi + 4]
        xor eax, eax
        mov edi, ebx
        push 0ceh
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea ecx, [esi + 8]
        lea edx, [esi + 14h]
        lea eax, [esi + 154h]
        push ecx
        xor ebp, ebp
        push edx
        push eax
        push ebp
        push 10181640h
        push 1017f490h
        mov ecx, esi
        ; Exact mapped bytes 66 89 2B: mov word ptr [ebx], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x2b
        ; Exact mapped bytes E8 3E FE FF FF: call 0x100246e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 1ch]
        mov dword ptr [esi + 0d54h], eax
        push 368h
        lea edx, [esi + 28h]
        lea eax, [esi + 214h]
        push ecx
        push edx
        push eax
        push 1
        push 10181618h
        push 1017f4a0h
        mov ecx, esi
        ; Exact mapped bytes 66 C7 46 18 01 00: mov word ptr [esi + 0x18], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 0B FE FF FF: call 0x100246e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 30h]
        mov dword ptr [esi + 0d58h], eax
        push 0ach
        lea edx, [esi + 3ch]
        lea eax, [esi + 2d4h]
        push ecx
        push edx
        push eax
        push ebp
        push 101815f0h
        push 1017f484h
        mov ecx, esi
        ; Exact mapped bytes 66 C7 46 2C 02 00: mov word ptr [esi + 0x2c], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 D9 FD FF FF: call 0x100246e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 44h]
        mov dword ptr [esi + 0d5ch], eax
        push 0a4h
        lea edx, [esi + 50h]
        lea eax, [esi + 394h]
        push ecx
        push edx
        push eax
        push ebp
        push 101815c8h
        push 1017f478h
        mov ecx, esi
        ; Exact mapped bytes 66 C7 46 40 03 00: mov word ptr [esi + 0x40], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E8 A7 FD FF FF: call 0x100246e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 6ch]
        mov dword ptr [esi + 0d60h], eax
        push 0b4h
        lea edx, [esi + 78h]
        lea eax, [esi + 454h]
        push ecx
        push edx
        push eax
        push ebp
        push 101815a0h
        push 1017f46ch
        mov ecx, esi
        ; Exact mapped bytes 66 C7 46 68 05 00: mov word ptr [esi + 0x68], 5
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E8 75 FD FF FF: call 0x100246e0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0d64h], eax
        lea ecx, [esi + 80h]
        push 0a8h
        lea edx, [esi + 8ch]
        lea eax, [esi + 514h]
        push ecx
        push edx
        push eax
        push ebp
        push 10181578h
        push 1017f45ch
        mov ecx, esi
        ; Exact mapped bytes 66 C7 46 7C 06 00: mov word ptr [esi + 0x7c], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E8 3D FD FF FF: call 0x100246e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 0e4h]
        mov dword ptr [esi + 0d68h], eax
        push 0ach
        lea edx, [esi + 0f0h]
        lea eax, [esi + 5d4h]
        push ecx
        push edx
        push eax
        push ebp
        push 10181550h
        push 1017f44ch
        mov ecx, esi
        ; Exact mapped bytes 66 C7 86 E0 00 00 00 0B 00: mov word ptr [esi + 0xe0], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E8 02 FD FF FF: call 0x100246e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 0f8h]
        mov dword ptr [esi + 0d6ch], eax
        push 0b4h
        lea edx, [esi + 104h]
        lea eax, [esi + 694h]
        push ecx
        push edx
        push eax
        push ebp
        push 10181528h
        push 1017f43ch
        mov ecx, esi
        ; Exact mapped bytes 66 C7 86 F4 00 00 00 0C 00: mov word ptr [esi + 0xf4], 0xc
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E8 C7 FC FF FF: call 0x100246e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 10ch]
        mov dword ptr [esi + 0d70h], eax
        push 0d4h
        lea edx, [esi + 118h]
        lea eax, [esi + 754h]
        push ecx
        push edx
        push eax
        push ebp
        push 10181500h
        push 1017f42ch
        mov ecx, esi
        ; Exact mapped bytes 66 C7 86 08 01 00 00 0D 00: mov word ptr [esi + 0x108], 0xd
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes E8 8C FC FF FF: call 0x100246e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 58h]
        mov dword ptr [esi + 0d74h], eax
        push 9ch
        lea edx, [esi + 64h]
        lea eax, [esi + 814h]
        push ecx
        push edx
        push eax
        push ebp
        push 101814d8h
        push 1017f420h
        mov ecx, esi
        ; Exact mapped bytes 66 C7 46 54 04 00: mov word ptr [esi + 0x54], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 5A FC FF FF: call 0x100246e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0d78h], eax
        mov dword ptr [esi + 0d7ch], ebp
        mov dword ptr [esp + 10h], ebp
        push ebp
        lea eax, [esp + 28h]
        push 101814c4h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 24h]
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        push ecx
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, eax
        cmp edi, -1
        ; Exact mapped bytes 74 60: je 0x10024b2e
        __asm _emit 0x74
        __asm _emit 0x60
        lea edx, [esp + 1ch]
        push edx
        push edi
        ; Exact mapped bytes FF 15 BC 50 17 10: call dword ptr [0x101750bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ebp, eax
        push ebp
        ; Exact mapped bytes E8 BE 7C 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x7c
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        lea ecx, [esp + 20h]
        mov dword ptr [esp + 14h], eax
        push 0
        push ecx
        push ebp
        push eax
        push edi
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push ebp
        push edi
        ; Exact mapped bytes E8 ED 19 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0d7ch]
        push edi
        add edx, eax
        mov dword ptr [esi + 0d7ch], edx
        ; Exact mapped bytes E8 5D 7C 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x7c
        __asm _emit 0x14
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 14h]
        add esp, 4
        inc ebp
        cmp ebp, 10h
        mov dword ptr [esp + 10h], ebp
        ; Exact mapped bytes 0F 8C 5A FF FF FF: jl 0x10024a96
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 154h]
        push 0c0h
        push eax
        ; Exact mapped bytes E8 AB 19 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov dword ptr [esi + 0dd4h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 14h
        push ebx
        ; Exact mapped bytes E8 95 19 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0d94h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 214h]
        push 0c0h
        push eax
        ; Exact mapped bytes E8 76 19 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0dd8h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 18h]
        push 14h
        push eax
        ; Exact mapped bytes E8 5D 19 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0d98h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 2d4h]
        push 0c0h
        push eax
        ; Exact mapped bytes E8 3E 19 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0ddch], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 2ch]
        push 14h
        push eax
        ; Exact mapped bytes E8 25 19 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0d9ch], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 394h]
        push 0c0h
        push eax
        ; Exact mapped bytes E8 06 19 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0de0h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 40h]
        push 14h
        push eax
        ; Exact mapped bytes E8 ED 18 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0da0h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 454h]
        push 0c0h
        push eax
        ; Exact mapped bytes E8 CE 18 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0de4h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 68h]
        push 14h
        push eax
        ; Exact mapped bytes E8 B5 18 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0da4h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 514h]
        push 0c0h
        push eax
        ; Exact mapped bytes E8 96 18 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0de8h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 7ch]
        push 14h
        push eax
        ; Exact mapped bytes E8 7D 18 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0da8h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 5d4h]
        push 0c0h
        push eax
        ; Exact mapped bytes E8 5E 18 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0dech], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 0e0h]
        push 14h
        push eax
        ; Exact mapped bytes E8 42 18 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0dach], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 694h]
        push 0c0h
        push eax
        ; Exact mapped bytes E8 23 18 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0df0h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 0f4h]
        push 14h
        push eax
        ; Exact mapped bytes E8 07 18 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0db0h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 754h]
        push 0c0h
        push eax
        ; Exact mapped bytes E8 E8 17 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0df4h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 108h]
        push 14h
        push eax
        ; Exact mapped bytes E8 CC 17 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0db4h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 814h]
        push 0c0h
        push eax
        ; Exact mapped bytes E8 AD 17 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0df8h], eax
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        lea eax, [esi + 54h]
        push 14h
        push eax
        ; Exact mapped bytes E8 94 17 FF FF: call 0x10016500
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        push 101814b8h
        mov dword ptr [esi + 0db8h], eax
        mov dword ptr [esp + 34h], 0
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, eax
        push 0
        cmp edi, -1
        ; Exact mapped bytes 75 2C: jne 0x10024dcc
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 15 DC 92 1C 10: mov edx, dword ptr [0x101c92dc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1017f3bch
        push 10181498h
        push edx
        ; Exact mapped bytes FF 15 8C 51 17 10: call dword ptr [0x1017518c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 AE 73 14 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x73
        __asm _emit 0x14
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 90 51 17 10: call dword ptr [0x10175190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes EB 2A: jmp 0x10024df6
        __asm _emit 0xeb
        __asm _emit 0x2a
        push 0
        push 0
        push edi
        ; Exact mapped bytes FF 15 8C 50 17 10: call dword ptr [0x1017508c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea eax, [esp + 18h]
        push 0
        push eax
        push 173f0h
        push 101ad160h
        push edi
        ; Exact mapped bytes FF 15 B8 50 17 10: call dword ptr [0x101750b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push edi
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, 1
        pop edi
        mov dword ptr [esi + 0e14h], eax
        pop esi
        pop ebp
        ; Exact mapped bytes A3 E4 58 1C 10: mov dword ptr [0x101c58e4], eax
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        pop ebx
        add esp, 54h
        ret
    }
}
