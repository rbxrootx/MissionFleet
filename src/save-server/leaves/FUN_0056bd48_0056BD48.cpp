// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056BD48 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_0056bd48_0056BD48() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fdcah
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
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63dbd4h
        mov dword ptr [ebp - 4], 1
        push 2bh
        push 67d450h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 D9 E4 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0a0h], 0
        ; Exact mapped bytes 74 11: je 0x56bda4
        __asm _emit 0x74
        __asm _emit 0x11
        push 2dh
        push 67d450h
        ; Exact mapped bytes E8 A1 CF FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bda4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x56bd87
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3C 46 F8 FF: call 0x4f03ee
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x46
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 8D AB FB FF: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x56bdd2
        __asm _emit 0x75
        __asm _emit 0x11
        push 30h
        push 67d450h
        ; Exact mapped bytes E8 73 CF FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bdd2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x56bdb2
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 50 04 00 00: call 0x56c230
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 85 F0 FD FF: call 0x54ae6d
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 9ch
        ; Exact mapped bytes E8 F2 0A F6 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0a
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 93 37 FE FF: call 0x54f59c
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x37
        __asm _emit 0xfe
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
        ret
    }
}
