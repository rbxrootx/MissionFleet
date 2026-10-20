// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043986C .. +0x1A0 bytes.
extern "C" __declspec(naked) void FUN_0043986c_0043986C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a40eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0c4h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0d0h]
        mov ecx, 31h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 0d0h], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0c4h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 48 76 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 E7 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 0c0h]
        ; Exact mapped bytes E8 82 C5 FD FF: call 0x415e60
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0ach
        push 0
        lea edx, [ebp - 0c0h]
        push edx
        ; Exact mapped bytes E8 7F FA 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfa
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 0c8h]
        push eax
        ; Exact mapped bytes E8 97 5A 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0c0h]
        ; Exact mapped bytes E8 A2 7D 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7d
        __asm _emit 0x0f
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 96 76 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea ecx, [ebp - 8ch]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B5 EE 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 77 76 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea edx, [ebp - 7ch]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 99 EE 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 C0 79 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 37: je 0x4399a0
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        push 0ach
        lea edx, [ebp - 0c0h]
        push edx
        push 0
        push 1
        push 80018001h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 95 79 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 9C D8 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd8
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], 1
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 02 76 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x76
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        push 5d43f0h
        ; Exact mapped bytes E8 0F A3 01 00: call 0x453cc2
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0c4h], 1
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 0cch], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 74 3E 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x3e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 65 3E 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x3e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 0d0h
        cmp ebp, esp
        ; Exact mapped bytes E8 DA ED 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xed
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
