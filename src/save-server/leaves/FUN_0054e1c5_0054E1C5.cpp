// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054E1C5 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_0054e1c5_0054E1C5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f2bah
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
        mov dword ptr [eax], 63c6ach
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 31: je 0x54e22e
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 28: je 0x54e22e
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0C 11 00 00: call 0x54f31a
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 11: je 0x54e228
        __asm _emit 0x74
        __asm _emit 0x11
        push 38h
        push 67bee8h
        ; Exact mapped bytes E8 1D AB FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54e228
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x54e20e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 AF E6 F7 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xe6
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B2 F7 F8 FF: call 0x4dd9fe
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf7
        __asm _emit 0xf8
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
