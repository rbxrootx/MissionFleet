// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513288 .. +0x177 bytes.
extern "C" __declspec(naked) void FUN_00513288_00513288() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B3 9E 01 00: call 0x52d15b
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DE 2F FC FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x5132c1
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5132cc
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5C FA FB FF: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfa
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5132ec
        __asm _emit 0x75
        __asm _emit 0x14
        push 3cah
        push 673dc0h
        ; Exact mapped bytes E8 59 5A 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5132ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5132d2
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 08: jne 0x513300
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 06: jmp 0x513306
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 33: je 0x513347
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 09 FA FB FF: call 0x4d2d25
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfa
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 1D: jne 0x51333e
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 1E: je 0x513347
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 40h
        push 36dh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FF 82 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x513347
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 07: jmp 0x51334e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 0ffffffdfh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x513378
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        or ecx, 20h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], ecx
        mov eax, dword ptr [ebp - 8]
        neg eax
        sbb eax, eax
        and al, 0fch
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A0 F0 FF FF: call 0x51242d
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1D 07 00 00: call 0x513ab2
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 18: jne 0x5133b6
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FF 06 00 00: call 0x513ab2
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3A: je 0x5133f6
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1E: je 0x5133e0
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 18: jne 0x5133e0
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 EC 00 00 00: call dword ptr [eax + 0xec]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 F0 00 00 00: call dword ptr [edx + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf0
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
