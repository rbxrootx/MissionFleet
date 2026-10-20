// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E1FF1 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_004e1ff1_004E1FF1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 9bh
        push 5c7a18h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 50 91 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x4e20bb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 8], -1
        ; Exact mapped bytes 76 14: jbe 0x4e203f
        __asm _emit 0x76
        __asm _emit 0x14
        push 0a1h
        push 5c7a18h
        ; Exact mapped bytes E8 C6 29 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e203f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e2022
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 3C: je 0x4e2091
        __asm _emit 0x74
        __asm _emit 0x3c
        push 0a6h
        push 5c7a18h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes E8 C8 AF 00 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 92 6F FC FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 66 B3 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 0ch], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
