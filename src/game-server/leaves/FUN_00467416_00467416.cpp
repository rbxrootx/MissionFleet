// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00467416 .. +0x3EB bytes.
extern "C" __declspec(naked) void FUN_00467416_00467416() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bbb3h
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
        mov eax, 1c94h
        ; Exact mapped bytes E8 88 23 04 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x04
        __asm _emit 0x00
        push esi
        push edi
        push ecx
        lea edi, [ebp - 1ca0h]
        mov ecx, 725h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 1ca0h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 84 03 00 00: je 0x4677e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 02 FE FF: call 0x4476a2
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1c90h], eax
        lea ecx, [ebp - 1c88h]
        ; Exact mapped bytes E8 86 9A 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 1c8ch]
        push edx
        lea eax, [ebp - 1c88h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 0B 02 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 1c84h]
        ; Exact mapped bytes E8 17 5F FD FF: call 0x43d3c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        push 1c78h
        push 0
        lea ecx, [ebp - 1c84h]
        push ecx
        ; Exact mapped bytes E8 B4 1E 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 1c9ch]
        push edx
        ; Exact mapped bytes E8 CC 7E 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7e
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 1c84h]
        ; Exact mapped bytes E8 D7 A1 0C 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        push eax
        lea ecx, [ebp - 1c68h]
        push ecx
        ; Exact mapped bytes E8 54 29 04 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        lea ecx, [ebp - 1c88h]
        ; Exact mapped bytes E8 B0 9A 0C 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x9a
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        lea edx, [ebp - 1c50h]
        push edx
        ; Exact mapped bytes E8 39 29 04 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 1c90h]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        ; Exact mapped bytes 66 89 8D 30 E4 FF FF: mov word ptr [ebp - 0x1bd0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        mov eax, dword ptr [eax + edx + 16be4h]
        mov dword ptr [ebp - 1bcch], eax
        mov ecx, dword ptr [ebp - 1ca0h]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 1bc8h], edx
        mov eax, dword ptr [ebp - 1ca0h]
        mov ecx, dword ptr [eax + 128h]
        mov dword ptr [ebp - 1bc4h], ecx
        mov edx, dword ptr [ebp - 1ca0h]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 1bc0h], eax
        mov ecx, dword ptr [ebp - 1ca0h]
        mov edx, dword ptr [ecx + 13ch]
        mov dword ptr [ebp - 1bbch], edx
        mov eax, dword ptr [ebp - 1ca0h]
        mov ecx, dword ptr [eax + 138h]
        mov dword ptr [ebp - 1bb8h], ecx
        mov edx, dword ptr [ebp - 1ca0h]
        mov eax, dword ptr [edx + 144h]
        mov dword ptr [ebp - 1bb4h], eax
        mov ecx, dword ptr [ebp - 1ca0h]
        mov edx, dword ptr [ecx + 134h]
        mov dword ptr [ebp - 1bb0h], edx
        mov eax, dword ptr [ebp - 1ca0h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 40c78h]
        mov dword ptr [ebp - 1bdch], edx
        mov eax, dword ptr [ebp - 1ca0h]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 3B 9D F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [eax + 0fd0h], 0
        ; Exact mapped bytes 0F 84 DE 01 00 00: je 0x4677d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ca0h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 72 C0 F9 FF: call 0x403672
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 1bd8h], eax
        mov edx, dword ptr [ebp - 1ca0h]
        mov ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 0C 9D F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x9d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 0fd0h]
        mov ecx, dword ptr [eax + 1bch]
        add ecx, 1
        mov dword ptr [ebp - 1c94h], ecx
        mov edx, dword ptr [ebp - 1c94h]
        mov dword ptr [ebp - 1bd4h], edx
        mov eax, dword ptr [ebp - 1ca0h]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 DD 9C F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x9c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        mov edx, dword ptr [ebp - 1c94h]
        mov dword ptr [ecx + 1bch], edx
        mov dword ptr [ebp - 1c98h], 0
        ; Exact mapped bytes EB 0F: jmp 0x467670
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 1c98h]
        add eax, 1
        mov dword ptr [ebp - 1c98h], eax
        cmp dword ptr [ebp - 1c98h], 20h
        ; Exact mapped bytes 7D 3E: jge 0x4676b7
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 1c98h]
        imul ecx, ecx, 0d4h
        mov edx, dword ptr [ebp - 1ca0h]
        lea eax, [edx + ecx + 350h]
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x4676b5
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 1c98h]
        imul ecx, ecx, 0d4h
        mov edx, dword ptr [ebp - 1ca0h]
        mov eax, dword ptr [ebp - 1bd4h]
        mov dword ptr [edx + ecx + 3e0h], eax
        ; Exact mapped bytes EB AA: jmp 0x467661
        __asm _emit 0xeb
        __asm _emit 0xaa
        push 1a80h
        mov ecx, dword ptr [ebp - 1ca0h]
        add ecx, 334h
        push ecx
        lea edx, [ebp - 1bach]
        push edx
        ; Exact mapped bytes E8 4B 19 04 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 1a80h
        push 0
        mov eax, dword ptr [ebp - 1ca0h]
        add eax, 334h
        push eax
        ; Exact mapped bytes E8 80 1C 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 0bch
        push 0
        mov ecx, dword ptr [ebp - 1ca0h]
        add ecx, 1dc0h
        push ecx
        ; Exact mapped bytes E8 64 1C 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 1ca0h]
        cmp dword ptr [edx + 1f24h], 0
        ; Exact mapped bytes 74 77: je 0x467795
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 1ca0h]
        mov ecx, dword ptr [ebp - 1bd4h]
        mov dword ptr [eax + 1f28h], ecx
        mov esi, esp
        lea edx, [ebp - 1c68h]
        push edx
        mov eax, dword ptr [ebp - 1ca0h]
        add eax, 1e98h
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8E 10 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        lea ecx, [ebp - 1c50h]
        push ecx
        mov edx, dword ptr [ebp - 1ca0h]
        add edx, 1eb0h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6B 10 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        push 120h
        mov eax, dword ptr [ebp - 1ca0h]
        add eax, 1e7ch
        push eax
        lea ecx, [ebp - 12ch]
        push ecx
        ; Exact mapped bytes E8 8E 18 04 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1ca0h]
        ; Exact mapped bytes E8 96 09 00 00: call 0x468136
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 1c78h
        lea edx, [ebp - 1c84h]
        push edx
        push 0
        push 3
        push 80018002h
        mov eax, dword ptr [ebp - 1ca0h]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 5B 9B F9 FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x9b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0fd0h]
        ; Exact mapped bytes E8 62 FA 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1c88h]
        ; Exact mapped bytes E8 6A 60 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x60
        __asm _emit 0x08
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
        add esp, 1ca0h
        cmp ebp, esp
        ; Exact mapped bytes E8 E5 0F 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
