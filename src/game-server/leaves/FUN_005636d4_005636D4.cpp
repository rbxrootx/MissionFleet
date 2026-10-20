// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005636D4 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_005636d4_005636D4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 F3 FD FF: call 0x5429ee
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 24h]
        cmp edx, dword ptr [ecx + 20h]
        ; Exact mapped bytes 76 14: jbe 0x563708
        __asm _emit 0x76
        __asm _emit 0x14
        push 2d9h
        push 5ce898h
        ; Exact mapped bytes E8 FD 12 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x563708
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x5636e6
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 1D: jne 0x563734
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x563734
        __asm _emit 0x74
        __asm _emit 0x14
        push 2dah
        push 5ce898h
        ; Exact mapped bytes E8 D1 12 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x563734
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x56370e
        __asm _emit 0x75
        __asm _emit 0xd4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
