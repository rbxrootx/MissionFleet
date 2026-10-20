// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FCB81 .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_004fcb81_004FCB81() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57df89h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 14: jne 0x4fcbbe
        __asm _emit 0x75
        __asm _emit 0x14
        push 17fh
        push 5c94d4h
        ; Exact mapped bytes E8 47 7E 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fcbbe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4fcba2
        __asm _emit 0x75
        __asm _emit 0xde
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x4fcbdb
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 8
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 7F 32 FD FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4fcbef
        __asm _emit 0x75
        __asm _emit 0x14
        push 180h
        push 5c94d4h
        ; Exact mapped bytes E8 16 7E 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fcbef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x4fcbc4
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 5F: je 0x4fcc5d
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B0 FE FF FF: call 0x4fcaba
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 40 25 5E 00: call dword ptr [0x5e2540]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        imul eax, edx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 10h]
        shr edx, 10h
        and edx, 0ffffh
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 4]
        imul eax, edx
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 59: jmp 0x4fccb6
        __asm _emit 0xeb
        __asm _emit 0x59
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 A2 42 03 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 20h]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 40 FB FF FF: call 0x4fc7bc
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 32 FE FF FF: call 0x4fcaba
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes 66 8B 55 E0: mov dx, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe0
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 09 43 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E9 F4 FF FF: call 0x4fc190
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 96 0B FF FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
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
