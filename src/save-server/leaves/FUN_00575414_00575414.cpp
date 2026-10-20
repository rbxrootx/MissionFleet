// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00575414 .. +0x209 bytes.
extern "C" __declspec(naked) void FUN_00575414_00575414() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 633h
        push 67cd14h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 2D 4E F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4e
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 75 14: jne 0x575453
        __asm _emit 0x75
        __asm _emit 0x14
        push 635h
        push 67cd14h
        ; Exact mapped bytes E8 F2 38 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575453
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x575433
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c0h]
        cmp dword ptr [ecx + 0bch], 0
        ; Exact mapped bytes 74 21: je 0x57548c
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 14 01 00 00: call dword ptr [eax + 0x114]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 75 05: jne 0x57548c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8A 01 00 00: jmp 0x575616
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 75 14: jne 0x5754ac
        __asm _emit 0x75
        __asm _emit 0x14
        push 640h
        push 67cd14h
        ; Exact mapped bytes E8 99 38 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5754ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x57548c
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0c0h]
        cmp dword ptr [edx + 0bch], 0
        ; Exact mapped bytes 74 14: je 0x5754d8
        __asm _emit 0x74
        __asm _emit 0x14
        push 641h
        push 67cd14h
        ; Exact mapped bytes E8 6D 38 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5754d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x5754b2
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0c0h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0c0h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 10 01 00 00: call dword ptr [edx + 0x110]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c0h]
        cmp dword ptr [ecx + 0d4h], 0
        ; Exact mapped bytes 74 37: je 0x575541
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0c0h]
        mov ecx, dword ptr [eax + 0d4h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0c0h]
        mov edx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [edx]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [edx + 0d4h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 B1: jne 0x5754f8
        __asm _emit 0x75
        __asm _emit 0xb1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0c0h]
        cmp dword ptr [edx + 0d8h], 0
        ; Exact mapped bytes 74 37: je 0x575590
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c0h]
        mov edx, dword ptr [ecx + 0d8h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c0h]
        mov eax, dword ptr [ecx + 0d8h]
        mov ecx, dword ptr [eax]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [eax + 0d8h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 B1: jne 0x575547
        __asm _emit 0x75
        __asm _emit 0xb1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 30 01 00 00: call dword ptr [edx + 0x130]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c0h], 0
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 14: jne 0x5755db
        __asm _emit 0x75
        __asm _emit 0x14
        push 64fh
        push 67cd14h
        ; Exact mapped bytes E8 6A 37 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x37
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5755db
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x5755bb
        __asm _emit 0x75
        __asm _emit 0xda
        push 640c20h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        ; Exact mapped bytes E8 01 53 FD FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x575616
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
