// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044414F .. +0x2CC bytes.
extern "C" __declspec(naked) void FUN_0044414f_0044414F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57af78h
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
        sub esp, 138h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 144h]
        mov ecx, 4eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 144h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x444197
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 64 02 00 00: jmp 0x4443fb
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0ca0h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 0C 24 5E 00: call dword ptr [0x5e240c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 31 46 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x46
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4441bc
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, 5b6660h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x4441d0
        __asm _emit 0x75
        __asm _emit 0x14
        push 36fh
        push 5b6390h
        ; Exact mapped bytes E8 35 08 0F 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4441d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C1: jne 0x444197
        __asm _emit 0x75
        __asm _emit 0xc1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 29 CD 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E3 FD FB FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 503h
        ; Exact mapped bytes 75 17: jne 0x44420b
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 98 38 09 00: call 0x4d7aa1
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 6D: jmp 0x444278
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BD FD FB FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 501h
        ; Exact mapped bytes 75 1D: jne 0x444237
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0d88h]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 6C 38 09 00: call 0x4d7aa1
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 41: jmp 0x444278
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 91 FD FB FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 502h
        ; Exact mapped bytes 75 1D: jne 0x444263
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0cb0h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 40 38 09 00: call 0x4d7aa1
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x444278
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 29 38 09 00: call 0x4d7aa1
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 410h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 144h]
        mov dword ptr [edx + 410h], ecx
        push 1
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [eax + 410h]
        push ecx
        push 3f0h
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 B5 A8 0A 00: call 0x4eeb67
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], 1
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 20h], 3ch
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 13ch], edx
        ; Exact mapped bytes EB 0F: jmp 0x4442e8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 13ch]
        add eax, 1
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 144h]
        mov edx, dword ptr [ebp - 13ch]
        cmp edx, dword ptr [ecx + 410h]
        ; Exact mapped bytes 0F 8D DC 00 00 00: jge 0x4443dc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 13ch]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 30h], 0
        mov esi, esp
        push 0ca0h
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 0B 07 09 00: call 0x4d4a3a
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x07
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 0C 24 5E 00: call dword ptr [0x5e240c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A3 44 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x44434a
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, 5b6674h
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x44435e
        __asm _emit 0x75
        __asm _emit 0x14
        push 394h
        push 5b6390h
        ; Exact mapped bytes E8 A7 06 0F 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44435e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 AC: jne 0x444310
        __asm _emit 0x75
        __asm _emit 0xac
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 B7 06 09 00: call 0x4d4a3a
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 86 FC FB FF: call 0x404010
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F 21 00 00: call 0x446510
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 13ch]
        add eax, 1
        mov esi, esp
        push eax
        push 5b6688h
        lea ecx, [ebp - 138h]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 27 44 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        lea edx, [ebp - 138h]
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        add ecx, 37ch
        ; Exact mapped bytes E8 12 35 09 00: call 0x4d78e9
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x35
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 FD FE FF FF: jmp 0x4442d9
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 57 94 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x94
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 140h]
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
        pop ebx
        add esp, 144h
        cmp ebp, esp
        ; Exact mapped bytes E8 CB 43 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x43
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
