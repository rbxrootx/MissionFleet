// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00530682 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_00530682_00530682() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f829h
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
        mov dword ptr [eax], 58a104h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 08: je 0x5306c2
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC AD FE FF: call 0x51b4ae
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 74 11: je 0x5306dc
        __asm _emit 0x74
        __asm _emit 0x11
        push 27h
        push 5cf778h
        ; Exact mapped bytes E8 29 43 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5306dc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5306c2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 62 A7 FE FF: call 0x51ae53
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa7
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
