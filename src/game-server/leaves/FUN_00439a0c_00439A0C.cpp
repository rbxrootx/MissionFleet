// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439A0C .. +0x198 bytes.
extern "C" __declspec(naked) void FUN_00439a0c_00439A0C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a42ah
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
        mov dword ptr [ebp - 18h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 AB 74 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x74
        __asm _emit 0x0f
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 E5 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 0c4h]
        ; Exact mapped bytes E8 E5 C3 FD FF: call 0x415e60
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0ach
        push 0
        lea edx, [ebp - 0c4h]
        push edx
        ; Exact mapped bytes E8 E2 F8 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 0c8h]
        push eax
        ; Exact mapped bytes E8 FA 58 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0c4h]
        ; Exact mapped bytes E8 05 7C 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x0f
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F9 74 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x74
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea ecx, [ebp - 90h]
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 18 ED 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x06
        __asm _emit 0x00
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 DA 74 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x74
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea edx, [ebp - 80h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FC EC 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40c78h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 23 78 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 34: je 0x439b3a
        __asm _emit 0x74
        __asm _emit 0x34
        push 0
        push 0ach
        lea edx, [ebp - 0c4h]
        push edx
        push 0
        push 3
        push 80018001h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 F8 77 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x77
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 FF D6 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 5b6048h
        push 5d51a0h
        ; Exact mapped bytes E8 6F CC 01 00: call 0x4567c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 18h], 1
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0cch], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DC 3C 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 CD 3C 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3c
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
        ; Exact mapped bytes E8 42 EC 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xec
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
