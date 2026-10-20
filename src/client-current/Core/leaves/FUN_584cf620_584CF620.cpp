// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CF620 .. +0x1FE bytes.
extern "C" __declspec(naked) void FUN_584cf620_584CF620() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f39ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1c0h
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
        push 104h
        push 0
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes E8 B2 D7 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd7
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        push 104h
        lea ecx, [ebp - 114h]
        push ecx
        push 588989b4h
        ; Exact mapped bytes FF 15 98 42 89 58: call dword ptr [0x58894298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 588989c4h
        lea edx, [ebp - 114h]
        push edx
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 40 A4 FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        mov eax, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 1c8h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1c8h]
        push ecx
        lea edx, [ebp - 174h]
        push edx
        ; Exact mapped bytes E8 A4 F4 FF FF: call 0x584ceb60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 1cch], eax
        mov eax, dword ptr [ebp - 1cch]
        push eax
        mov ecx, 5890bf68h
        ; Exact mapped bytes E8 4A 5C FF FF: call 0x584c5320
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 174h]
        ; Exact mapped bytes E8 4F A6 FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 3D A6 FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 0
        mov ecx, 5890bf68h
        ; Exact mapped bytes E8 40 66 FF FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 7C 42 89 58: call dword ptr [0x5889427c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 588989d0h
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 B8 A3 FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        lea ecx, [ebp - 12ch]
        push ecx
        lea ecx, [ebp - 1bch]
        ; Exact mapped bytes E8 AF E0 04 00: call 0x5851d7e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 F0 A5 FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        push 588989e0h
        lea ecx, [ebp - 15ch]
        ; Exact mapped bytes E8 7F A3 FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        push 588989e8h
        lea ecx, [ebp - 144h]
        ; Exact mapped bytes E8 6B A3 FD FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        push 0
        lea edx, [ebp - 15ch]
        push edx
        lea eax, [ebp - 144h]
        push eax
        lea ecx, [ebp - 1bch]
        ; Exact mapped bytes E8 FC E4 04 00: call 0x5851dc80
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 1c0h], eax
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 144h]
        ; Exact mapped bytes E8 97 A5 FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 15ch]
        ; Exact mapped bytes E8 88 A5 FD FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa5
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 1c0h], 1
        ; Exact mapped bytes 75 0E: jne 0x584cf7c0
        __asm _emit 0x75
        __asm _emit 0x0e
        push 584cef40h
        ; Exact mapped bytes FF 15 74 42 89 58: call dword ptr [0x58894274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 32: jmp 0x584cf7f2
        __asm _emit 0xeb
        __asm _emit 0x32
        cmp dword ptr [ebp - 1c0h], 2
        ; Exact mapped bytes 75 10: jne 0x584cf7d9
        __asm _emit 0x75
        __asm _emit 0x10
        push 584cf220h
        push 1
        ; Exact mapped bytes FF 15 70 42 89 58: call dword ptr [0x58894270]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 19: jmp 0x584cf7f2
        __asm _emit 0xeb
        __asm _emit 0x19
        push 584cef40h
        ; Exact mapped bytes FF 15 74 42 89 58: call dword ptr [0x58894274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 584cf220h
        push 1
        ; Exact mapped bytes FF 15 70 42 89 58: call dword ptr [0x58894270]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1bch]
        ; Exact mapped bytes E8 BC F5 FF FF: call 0x584cedc0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf5
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 36 18 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x18
        __asm _emit 0x36
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
