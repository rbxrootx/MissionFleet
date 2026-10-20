// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00443313 .. +0x2E9 bytes.
extern "C" __declspec(naked) void FUN_00443313_00443313() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57af4fh
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
        sub esp, 98h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0a4h]
        mov ecx, 26h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 9ch], ecx
        push 221h
        push 5b6390h
        push 10h
        ; Exact mapped bytes E8 D5 9C 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 18: je 0x44338f
        __asm _emit 0x74
        __asm _emit 0x18
        push 3e8h
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 99 8C FC FF: call 0x40c020
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x443399
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a0h], 0
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [ebp - 88h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ecx + 0a0h], edx
        push 222h
        push 5b6390h
        push 40d10h
        ; Exact mapped bytes E8 8D 9C 0A 00: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 27: je 0x44340f
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        mov edx, dword ptr [ebp - 9ch]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 F4 A4 FF FF: call 0x43d8fb
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x443419
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0a4h], 0
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 90h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [ecx + 9ch], edx
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 04 86 04 00: call 0x48ba53
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B0 DA 0E 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 2
        push 0
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 25 2C FE FF: call 0x426090
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        ; Exact mapped bytes 66 C7 45 E4 02 00: mov word ptr [ebp - 0x1c], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes 66 8B 91 04 04 00 00: mov dx, word ptr [ecx + 0x404]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 E6: mov word ptr [ebp - 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe6
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 404h]
        mov dword ptr [ebp - 28h], ecx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x44357f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 BC 7D 04 00: call 0x48b27a
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x4434ea
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax + 404h]
        push ecx
        push 5b64f8h
        push 5b6504h
        ; Exact mapped bytes E8 22 20 0F 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x20
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AB BF 0C 00: call 0x50f490
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x44357f
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx + 404h]
        push eax
        push 5b650ch
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 57 B4 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 9A DA 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 9ch]
        add ecx, 3b8h
        ; Exact mapped bytes E8 A6 BC 0F 00: call 0x53f1c8
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 FB D1 0A 00: call 0x4f0728
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd1
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 13: jne 0x443545
        __asm _emit 0x75
        __asm _emit 0x13
        mov esi, esp
        push -1
        ; Exact mapped bytes FF 15 B4 28 5E 00: call dword ptr [0x5e28b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9D 52 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x52
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x44357f
        __asm _emit 0xeb
        __asm _emit 0x3a
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 40 2E 00 00: call 0x446390
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 9ch]
        mov dword ptr [edx + 404h], eax
        ; Exact mapped bytes 66 C7 45 E4 02 00: mov word ptr [ebp - 0x1c], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 9ch]
        ; Exact mapped bytes 66 8B 88 04 04 00 00: mov cx, word ptr [eax + 0x404]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D E6: mov word ptr [ebp - 0x1a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe6
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes E9 1D FF FF FF: jmp 0x44349c
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx + 404h]
        push eax
        push 5b6530h
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 C2 B3 08 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 74 5A 06 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 98h], 1
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 58 2C FE FF: call 0x426220
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 75 A2 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa2
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 98h]
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
        add esp, 0a4h
        cmp ebp, esp
        ; Exact mapped bytes E8 EA 51 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x51
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
