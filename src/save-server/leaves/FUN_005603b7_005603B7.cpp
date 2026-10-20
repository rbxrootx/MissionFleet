// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005603B7 .. +0x20B bytes.
extern "C" __declspec(naked) void FUN_005603b7_005603B7() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f1d2h
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
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        push 56dh
        push 67b3b8h
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 75 9E F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x9e
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x560405
        __asm _emit 0x75
        __asm _emit 0x14
        push 56eh
        push 67b3b8h
        ; Exact mapped bytes E8 40 89 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x560405
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5603eb
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 30h]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 75 14: jne 0x56042b
        __asm _emit 0x75
        __asm _emit 0x14
        push 56fh
        push 67b3b8h
        ; Exact mapped bytes E8 1A 89 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56042b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x56040b
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E0 13 FD FF: call 0x531819
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 38 95 00 00: call 0x569980
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 0
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 84h]
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 55 95 00 00: call 0x5699b5
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E0 F7 FF FF: call 0x55fc48
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], 1
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 1
        ; Exact mapped bytes 74 08: je 0x560486
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 34h], 3
        ; Exact mapped bytes 74 36: je 0x5604ba
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes EB 65: jmp 0x5604eb
        __asm _emit 0xeb
        __asm _emit 0x65
        push 0
        push 0
        push 1
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DC 24 FF FF: call 0x552974
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5604b5
        __asm _emit 0x75
        __asm _emit 0x19
        push 67bb7ch
        push 67bba4h
        ; Exact mapped bytes E8 6A 01 F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x56053a
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 1
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 26 FF FF: call 0x552adc
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5604e9
        __asm _emit 0x75
        __asm _emit 0x19
        push 67bba8h
        push 67bbd0h
        ; Exact mapped bytes E8 36 01 F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 4F: jmp 0x56053a
        __asm _emit 0xeb
        __asm _emit 0x4f
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 74 14: je 0x560505
        __asm _emit 0x74
        __asm _emit 0x14
        push 58bh
        push 67b3b8h
        ; Exact mapped bytes E8 40 88 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x560505
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5604eb
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        push 0
        push 1
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF 22 FF FF: call 0x55280c
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x56053a
        __asm _emit 0x75
        __asm _emit 0x19
        push 67bbd4h
        push 67bbf8h
        ; Exact mapped bytes E8 E5 00 F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 24h], 0
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 4B: je 0x56058b
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 3D 02 00 00: call 0x560785
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 3E: jne 0x56058b
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E5 46 FF FF: call 0x554c44
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x56057e
        __asm _emit 0x75
        __asm _emit 0x1b
        push 67bbfch
        push 67bc24h
        ; Exact mapped bytes E8 A3 00 F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 0D: jmp 0x56058b
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 8B 64 FF FF: call 0x556a28
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 87 12 FD FF: call 0x531833
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
