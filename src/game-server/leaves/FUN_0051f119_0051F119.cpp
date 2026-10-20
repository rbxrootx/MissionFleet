// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F119 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_0051f119_0051F119() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57eb60h
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
        sub esp, 70h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 7ch], ecx
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 4
        ; Exact mapped bytes E8 3C 3A 01 00: call 0x532b81
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x51f16e
        __asm _emit 0x74
        __asm _emit 0x25
        push 5cb940h
        push 5cb978h
        ; Exact mapped bytes E8 BD 0A FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x0a
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        push -1
        push 0
        push 0f104h
        ; Exact mapped bytes E8 60 E7 FE FF: call 0x50d8c9
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x51f23a
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 4
        ; Exact mapped bytes E8 21 3A 01 00: call 0x532b9a
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 4
        ; Exact mapped bytes E8 E7 39 01 00: call 0x532b70
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 7E 4F: jle 0x51f1dd
        __asm _emit 0x7e
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 4
        push ecx
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 33 02 00 00: call 0x51f3d0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 7C 15 FD FF: call 0x4f0728
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 75 08: jne 0x51f1bd
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 11: jmp 0x51f1ce
        __asm _emit 0xeb
        __asm _emit 0x11
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 44 02 00 00: call 0x51f410
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6C: jmp 0x51f23a
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 33 02 00 00: call 0x51f410
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x51f1f7
        __asm _emit 0x75
        __asm _emit 0x14
        push 338h
        push 5cb84ch
        ; Exact mapped bytes E8 0E 58 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f1f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51f1dd
        __asm _emit 0x75
        __asm _emit 0xe0
        push 586a28h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 86 BE FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51f222
        __asm _emit 0x75
        __asm _emit 0x14
        push 339h
        push 5cb84ch
        ; Exact mapped bytes E8 E3 57 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f222
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x51f1fd
        __asm _emit 0x75
        __asm _emit 0xd5
        push 1
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 88 00 00 00: call dword ptr [eax + 0x88]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
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
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
