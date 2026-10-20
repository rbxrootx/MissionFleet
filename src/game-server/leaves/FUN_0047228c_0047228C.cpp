// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047228C .. +0x2F3 bytes.
extern "C" __declspec(naked) void FUN_0047228c_0047228C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 7D FD FF: call 0x44a02a
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 79 01 00 00: jne 0x472433
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 7C FD FF: call 0x449fab
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x4722f2
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002c003h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 55 4F 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 54 FD FF: call 0x44774c
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 53 FD FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 3C 01 00 00: jmp 0x47242e
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 32 01 00 00: je 0x47242e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + 110h]
        cmp eax, dword ptr [edx + 10ch]
        ; Exact mapped bytes 0F 8D 1A 01 00 00: jge 0x47242e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8d0h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 39: jne 0x47235b
        __asm _emit 0x75
        __asm _emit 0x39
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AF 64 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 18 00 00: call 0x473b60
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0ah
        push 8000010ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 4E 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 13 02 00 00: jmp 0x47256e
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0cb0h], 0
        ; Exact mapped bytes 74 26: je 0x47238d
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0cb0h]
        mov dword ptr [ecx + 8d8h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0cb0h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8d4h], eax
        ; Exact mapped bytes EB 19: jmp 0x4723a6
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0cach], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8d8h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0cb0h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 8d0h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8d4h], 0
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 06 64 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D 17 00 00: call 0x473b60
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 110h]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 110h], ecx
        push 0
        push 46bh
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0c90h
        ; Exact mapped bytes E8 03 15 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0ah
        push 8000010ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E 4E 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 40 01 00 00: jmp 0x47256e
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x47256c
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x47256c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 110h]
        cmp edx, dword ptr [ecx + 10ch]
        ; Exact mapped bytes 0F 8D 17 01 00 00: jge 0x47256c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8d0h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 39: jne 0x47249c
        __asm _emit 0x75
        __asm _emit 0x39
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6E 63 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E5 16 00 00: call 0x473b60
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0ah
        push 8000010ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 4D 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x47256e
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0cb0h], 0
        ; Exact mapped bytes 74 26: je 0x4724ce
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0cb0h]
        mov dword ptr [eax + 8d8h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0cb0h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8d4h], edx
        ; Exact mapped bytes EB 19: jmp 0x4724e7
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0cach], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8d8h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0cb0h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 8d0h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8d4h], 0
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C5 62 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C 16 00 00: call 0x473b60
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 110h]
        add eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 110h], eax
        push 0
        push 46bh
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0c90h
        ; Exact mapped bytes E8 C2 13 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 0
        push 0ah
        push 8000010ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 4C 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x47256e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 67 62 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
