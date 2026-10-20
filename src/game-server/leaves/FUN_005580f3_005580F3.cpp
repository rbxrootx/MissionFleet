// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005580F3 .. +0x199 bytes.
extern "C" __declspec(naked) void FUN_005580f3_005580F3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 28h
        push 5cfe58h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 51 30 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x30
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 11: jne 0x558129
        __asm _emit 0x75
        __asm _emit 0x11
        push 29h
        push 5cfe58h
        ; Exact mapped bytes E8 DC C8 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x558129
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x55810f
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 10: je 0x558145
        __asm _emit 0x74
        __asm _emit 0x10
        push 2bh
        push 5cfe58h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 1B 30 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x30
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 28: je 0x558173
        __asm _emit 0x74
        __asm _emit 0x28
        push 0
        push 1ch
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 FE 7C F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7c
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x55816d
        __asm _emit 0x75
        __asm _emit 0x11
        push 2dh
        push 5cfe58h
        ; Exact mapped bytes E8 98 C8 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55816d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x55814b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 54h], 0
        ; Exact mapped bytes 75 09: jne 0x558185
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 54h], edx
        mov ecx, 5deccch
        ; Exact mapped bytes E8 F1 B7 00 00: call 0x563980
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], 0
        mov dword ptr [ebp - 28h], 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 9D DB FD FF: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 42: je 0x5581fc
        __asm _emit 0x74
        __asm _emit 0x42
        push 3dh
        push 5cfe58h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 96 2F FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x2f
        __asm _emit 0xfa
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 79 DE FD FF: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 50 78: call dword ptr [eax + 0x78]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x78
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 9D DD FD FF: call 0x535f86
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5581fc
        __asm _emit 0x75
        __asm _emit 0x0f
        lea ecx, [ebp - 24h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 37 39 FE FF: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push -1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 20h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 2C: call dword ptr [ecx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x2c
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 50 FC FF FF: call 0x557ea4
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x558262
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 54h], 0
        xor edx, edx
        cmp dword ptr [ebp - 14h], 0
        setl dl
        mov eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 40h], dl
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
