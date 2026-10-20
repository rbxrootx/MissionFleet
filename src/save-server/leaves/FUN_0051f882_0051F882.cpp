// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F882 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_0051f882_0051F882() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f309h
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
        mov dword ptr [eax], 63c72ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 08: je 0x51f8c2
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FC 4D FE FF: call 0x5046be
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 74 11: je 0x51f8dc
        __asm _emit 0x74
        __asm _emit 0x11
        push 27h
        push 67bf50h
        ; Exact mapped bytes E8 69 94 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f8dc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51f8c2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 72 47 FE FF: call 0x504063
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x47
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
