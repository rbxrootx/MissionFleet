// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004603EE .. +0x1FC bytes.
extern "C" __declspec(naked) void FUN_004603ee_004603EE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 84h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 640c20h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 84 A6 0E 00: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x46042f
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0A: jne 0x460439
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80004005h
        ; Exact mapped bytes E9 A8 01 00 00: jmp 0x4605e1
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x4604fb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 18: je 0x460464
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 74 0F: je 0x460464
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8D 01 00 00: call 0x4605ea
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 7D 01 00 00: jmp 0x4605e1
        __asm _emit 0xe9
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 75 11: jne 0x46047e
        __asm _emit 0x75
        __asm _emit 0x11
        push 5eh
        push 67c8a4h
        ; Exact mapped bytes E8 C7 88 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x46047e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x460464
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 0A: jne 0x460497
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80004005h
        ; Exact mapped bytes E9 4A 01 00 00: jmp 0x4605e1
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 6414a8h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 4E A4 0E 00: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0A: jne 0x4604bb
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80004005h
        ; Exact mapped bytes E9 26 01 00 00: jmp 0x4605e1
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp + 0ch]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 7D 16: jge 0x4604ed
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, 8007000eh
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x4605e1
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes EB 3F: jmp 0x46053a
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 1A: je 0x46051e
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 0F: jne 0x46051e
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D3 00 00 00: call 0x4605ea
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x4605e1
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 75 14: jne 0x460557
        __asm _emit 0x75
        __asm _emit 0x14
        push 80h
        push 67c8a4h
        ; Exact mapped bytes E8 EE 87 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x460557
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x46053a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 68: je 0x4605ce
        __asm _emit 0x74
        __asm _emit 0x68
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 24: call dword ptr [eax + 0x24]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 7ch], -1
        ; Exact mapped bytes 74 1B: je 0x4605c4
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 74 12: je 0x4605c4
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 7ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 7ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 7ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 78h], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0B 00 00 00: call 0x4605ea
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
