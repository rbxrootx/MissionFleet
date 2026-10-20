// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504AE0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_00504ae0_00504AE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 A6 FD FF: call 0x4df1c6
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 09: jne 0x504b04
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 2D: je 0x504b31
        __asm _emit 0x74
        __asm _emit 0x2d
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 4D E9 F9 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x504b31
        __asm _emit 0x75
        __asm _emit 0x14
        push 16ch
        push 677834h
        ; Exact mapped bytes E8 14 42 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504b31
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BB: jne 0x504af2
        __asm _emit 0x75
        __asm _emit 0xbb
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 1ch]
        cmp eax, dword ptr [edx + 18h]
        ; Exact mapped bytes 76 14: jbe 0x504b59
        __asm _emit 0x76
        __asm _emit 0x14
        push 16dh
        push 677834h
        ; Exact mapped bytes E8 EC 41 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504b59
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x504b37
        __asm _emit 0x75
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
