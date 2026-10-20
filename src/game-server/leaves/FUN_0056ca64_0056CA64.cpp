// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056CA64 .. +0x209 bytes.
extern "C" __declspec(naked) void FUN_0056ca64_0056CA64() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 633h
        push 5d053ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 DD E6 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe6
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 75 14: jne 0x56caa3
        __asm _emit 0x75
        __asm _emit 0x14
        push 635h
        push 5d053ch
        ; Exact mapped bytes E8 62 7F FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56caa3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x56ca83
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0c0h]
        cmp dword ptr [ecx + 0bch], 0
        ; Exact mapped bytes 74 21: je 0x56cadc
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
        ; Exact mapped bytes 75 05: jne 0x56cadc
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8A 01 00 00: jmp 0x56cc66
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 75 14: jne 0x56cafc
        __asm _emit 0x75
        __asm _emit 0x14
        push 640h
        push 5d053ch
        ; Exact mapped bytes E8 09 7F FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56cafc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x56cadc
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0c0h]
        cmp dword ptr [edx + 0bch], 0
        ; Exact mapped bytes 74 14: je 0x56cb28
        __asm _emit 0x74
        __asm _emit 0x14
        push 641h
        push 5d053ch
        ; Exact mapped bytes E8 DD 7E FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x7e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56cb28
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x56cb02
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
        ; Exact mapped bytes 74 37: je 0x56cb91
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
        ; Exact mapped bytes 75 B1: jne 0x56cb48
        __asm _emit 0x75
        __asm _emit 0xb1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0c0h]
        cmp dword ptr [edx + 0d8h], 0
        ; Exact mapped bytes 74 37: je 0x56cbe0
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
        ; Exact mapped bytes 75 B1: jne 0x56cb97
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
        ; Exact mapped bytes 75 14: jne 0x56cc2b
        __asm _emit 0x75
        __asm _emit 0x14
        push 64fh
        push 5d053ch
        ; Exact mapped bytes E8 DA 7D FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56cc2b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x56cc0b
        __asm _emit 0x75
        __asm _emit 0xda
        push 58e430h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ach]
        push ecx
        ; Exact mapped bytes E8 41 F2 FD FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x56cc66
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
