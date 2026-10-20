// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043BE30 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_0043be30_0043BE30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a55ah
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
        mov dword ptr [ebp - 0c4h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8C 50 0F 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 0c0h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 C1 04 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 0bch]
        ; Exact mapped bytes E8 C0 9F FD FF: call 0x415e60
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0ach
        push 0
        lea edx, [ebp - 0bch]
        push edx
        ; Exact mapped bytes E8 BD D4 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd4
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 0c8h]
        push eax
        ; Exact mapped bytes E8 D5 34 09 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x34
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0bch]
        ; Exact mapped bytes E8 E0 57 0F 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x57
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        push ecx
        lea edx, [ebp - 0a0h]
        push edx
        ; Exact mapped bytes E8 5C DF 06 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xdf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BB 50 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x50
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 88h]
        push eax
        ; Exact mapped bytes E8 44 DF 06 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xdf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40c78h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 07 54 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 74 37: je 0x43bf59
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        push 0ach
        lea eax, [ebp - 0bch]
        push eax
        push 0
        push 1
        push 80018000h
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 DC 53 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 E3 B2 04 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], 1
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 0cch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D8 18 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x18
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
        add esp, 0d0h
        cmp ebp, esp
        ; Exact mapped bytes E8 4E C8 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc8
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
