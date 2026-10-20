// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B2160 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_584b2160_584B2160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 DB FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 75: je 0x584b21f4
        __asm _emit 0x74
        __asm _emit 0x75
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584b2191
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 5B: jge 0x584b21f2
        __asm _emit 0x7d
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE DA FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5F D9 FF FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 36: je 0x584b21f0
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AE DA FF FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        xor edx, 55h
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 64h
        ; Exact mapped bytes 73 1F: jae 0x584b21f0
        __asm _emit 0x73
        __asm _emit 0x1f
        ; Exact mapped bytes E8 1A 50 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 3b9h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 84 6B 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 0A: jmp 0x584b21fa
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes EB 96: jmp 0x584b2188
        __asm _emit 0xeb
        __asm _emit 0x96
        ; Exact mapped bytes EB 04: jmp 0x584b21f8
        __asm _emit 0xeb
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584b21fa
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
