// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D85C .. +0x3AF bytes.
extern "C" __declspec(naked) void FUN_0044d85c_0044D85C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b125h
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
        sub esp, 2ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 38h]
        mov ecx, 0bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d4h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 85 21 03 00 00: jne 0x44dbcd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 85 F1 02 00 00: jne 0x44dba9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 10060000h
        ; Exact mapped bytes 0F 85 0E 01 00 00: jne 0x44d9d6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 33 7C 0E 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x7c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 FC AE 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 15 7C 0E 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov edi, esp
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp edi, esp
        ; Exact mapped bytes E8 DE AE 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 40ch]
        cmp ecx, dword ptr [eax + 400h]
        ; Exact mapped bytes 0F 8E 9B 00 00 00: jle 0x44d9af
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E7 7B 0E 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x7b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 B0 AE 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 41ch]
        cmp edx, dword ptr [ecx + 10dch]
        ; Exact mapped bytes 76 4A: jbe 0x44d98b
        __asm _emit 0x76
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0ch], 1
        ; Exact mapped bytes 75 25: jne 0x44d96f
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 10h], 20h
        ; Exact mapped bytes 75 1C: jne 0x44d96f
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 80020010h
        push 0
        push 80000002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C5 98 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x44d989
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 80020010h
        push 3
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 98 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x44d9ad
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 8002h
        push 0bh
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D 98 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F0 96 03 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x44d9d1
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 8002h
        push 0ah
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 98 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC 96 03 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 D1 01 00 00: jmp 0x44dba7
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 4], 10070000h
        ; Exact mapped bytes 0F 85 9F 01 00 00: jne 0x44db85
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 19 35 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x35
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 A5 03 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        push 5b7100h
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 D1 35 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x35
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x44da2b
        __asm _emit 0x74
        __asm _emit 0x15
        push 5b7110h
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C0 35 0E 00: call 0x530fe3
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x35
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 27 01 00 00: jne 0x44db52
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0ch], 2
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x44db36
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 10h], 5bh
        ; Exact mapped bytes 0F 85 F1 00 00 00: jne 0x44db36
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 BA 34 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x34
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 5b7120h
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 9F 00 0A 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 24h], esp
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 0D FA 09 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xfa
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40c98h]
        ; Exact mapped bytes E8 64 BC FE FF: call 0x4396e9
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 80020010h
        push 0
        push 80000002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 97 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        push 5b7128h
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        ; Exact mapped bytes E8 8D C3 05 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        push 5b7134h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D 8A FF FF: call 0x446530
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 77 C3 05 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C 5E FB FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F5 C8 FB FF: call 0x40a3d0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x44daf8
        __asm _emit 0x74
        __asm _emit 0x19
        push 0ffffh
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 5E FB FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 18 5E FB FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 0c7ch]
        mov ecx, dword ptr [edx + 40cd0h]
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 0c7ch]
        mov eax, dword ptr [edx + 40cd0h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 B8 AC 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 18 FD 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x44db50
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 80020010h
        push 3
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 96 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x44db74
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 80020010h
        push 3
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C6 96 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 95 03 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C9 FC 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x44dba7
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 80020010h
        push 2
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 96 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 94 03 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x44dbcb
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 80020010h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 96 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 94 03 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x44dbef
        __asm _emit 0xeb
        __asm _emit 0x22
        push 0
        push 0
        push 0
        push 80020010h
        push 1
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B 96 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AE 94 03 00: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
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
        add esp, 38h
        cmp ebp, esp
        ; Exact mapped bytes E8 DB AB 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xab
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
