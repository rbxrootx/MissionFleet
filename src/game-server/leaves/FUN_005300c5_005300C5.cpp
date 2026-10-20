// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005300C5 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_005300c5_005300C5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x5300e8
        __asm _emit 0x75
        __asm _emit 0x11
        push 76h
        push 5ccae4h
        ; Exact mapped bytes E8 1D 49 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5300e8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x5300d1
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 11: jne 0x530108
        __asm _emit 0x75
        __asm _emit 0x11
        push 78h
        push 5ccae4h
        ; Exact mapped bytes E8 FD 48 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530108
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5300ee
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x5301e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x530131
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 8D 9F 00 00 00: jge 0x5301da
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx*8 + 588820h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D0 CE FF FF: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 29: je 0x530180
        __asm _emit 0x74
        __asm _emit 0x29
        push -1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C8 0A FF FF: call 0x520c3c
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 08: jle 0x530180
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB 5A: jmp 0x5301da
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax*8 + 588824h]
        and ecx, 0f000h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 0f000h
        cmp ecx, eax
        ; Exact mapped bytes 75 36: jne 0x5301d5
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx*8 + 588820h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6C CE FF FF: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5301cf
        __asm _emit 0x75
        __asm _emit 0x14
        push 92h
        push 5ccae4h
        ; Exact mapped bytes E8 36 48 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5301cf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5301b5
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x530128
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 06: jne 0x5301e6
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 0ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x530200
        __asm _emit 0x75
        __asm _emit 0x14
        push 9ch
        push 5ccae4h
        ; Exact mapped bytes E8 05 48 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530200
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5301e6
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 6ch
        ; Exact mapped bytes E8 14 78 FB FF: call 0x4e7a2b
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53022f
        __asm _emit 0x75
        __asm _emit 0x14
        push 9dh
        push 5ccae4h
        ; Exact mapped bytes E8 D6 47 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53022f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x530206
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 6ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 14: je 0x530254
        __asm _emit 0x74
        __asm _emit 0x14
        push 9eh
        push 5ccae4h
        ; Exact mapped bytes E8 B1 47 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x530254
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x530235
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 24 F9 FE FF: call 0x51fb8e
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
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
