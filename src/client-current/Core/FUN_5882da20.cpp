// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882DA20 .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_5882da20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, 2
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 1eh
        ; Exact mapped bytes 0F 87 CE 00 00 00: ja 0x5882db1e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        movzx eax, byte ptr [edx + 5882db80h]
        ; Exact mapped bytes FF 24 85 68 DB 82 58: jmp dword ptr [eax*4 + 0x5882db68]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xdb
        __asm _emit 0x82
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes FF 15 B4 44 89 58: call dword ptr [0x588944b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x5882db1e
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 48 44 89 58: call dword ptr [0x58894448]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 83 3D 74 5F 96 58 00: cmp dword ptr [0x58965f74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x5882da9d
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 FA F8 FF: call 0x587bd560
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xfa
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 7F: jmp 0x5882db1e
        __asm _emit 0xeb
        __asm _emit 0x7f
        ; Exact mapped bytes 83 3D 74 5F 96 58 00: cmp dword ptr [0x58965f74], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 39: je 0x5882dae1
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 83 3D 38 5F 96 58 13: cmp dword ptr [0x58965f38], 0x13
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x13
        ; Exact mapped bytes 74 30: je 0x5882dae1
        __asm _emit 0x74
        __asm _emit 0x30
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 B8 44 89 58: call dword ptr [0x588944b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 03 0D D8 60 96 58: add ecx, dword ptr [0x589660d8]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 03 15 D4 60 96 58: add edx, dword ptr [0x589660d4]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 0A 00 00: call 0x5882e530
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3B: jmp 0x5882db1e
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes 83 3D C8 60 96 58 00: cmp dword ptr [0x589660c8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 2A: je 0x5882db16
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 2ch], edx
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes 8B 0D C8 60 96 58: mov ecx, dword ptr [0x589660c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D C8 60 96 58: mov ecx, dword ptr [0x589660c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 06: jmp 0x5882db1e
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 B3 00 00 00: call 0x5882dbd0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0D 05 D4 FF: call 0x5856e040
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 19: je 0x5882db55
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 48 44 89 58: call dword ptr [0x58894448]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 EE 34 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
