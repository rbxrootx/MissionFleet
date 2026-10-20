// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A3ADA .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_004a3ada_004A3ADA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 5B 19 0A 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0bh
        ; Exact mapped bytes E8 E8 41 0A 00: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 103ch
        ; Exact mapped bytes E8 20 01 00 00: call 0x4a3c20
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3E: je 0x4a3b47
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 103ch
        ; Exact mapped bytes E8 E5 00 00 00: call 0x4a3c00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 11: je 0x4a3b3e
        __asm _emit 0x74
        __asm _emit 0x11
        push 1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x4a3b45
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB AB: jmp 0x4a3af2
        __asm _emit 0xeb
        __asm _emit 0xab
        mov ecx, dword ptr [ebp - 8]
        add ecx, 103ch
        ; Exact mapped bytes E8 6B 00 00 00: call 0x4a3bc0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a3b6d
        __asm _emit 0x75
        __asm _emit 0x14
        push 93h
        push 5ce698h
        ; Exact mapped bytes E8 98 0E 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0e
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3b6d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x4a3b47
        __asm _emit 0x75
        __asm _emit 0xd4
        push 0bh
        ; Exact mapped bytes E8 92 42 0A 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x42
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
