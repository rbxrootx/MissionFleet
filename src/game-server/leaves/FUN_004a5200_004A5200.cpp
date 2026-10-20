// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5200 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_004a5200_004A5200() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fc89h
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B9 2A 05 00: call 0x4f7ce0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x2a
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 30h
        ; Exact mapped bytes E8 D7 1B 00 00: call 0x4a6e10
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34h
        ; Exact mapped bytes E8 EC 1B 00 00: call 0x4a6e30
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 38h
        ; Exact mapped bytes E8 01 1C 00 00: call 0x4a6e50
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 16 1C 00 00: call 0x4a6e70
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 40h
        ; Exact mapped bytes E8 2B 1C 00 00: call 0x4a6e90
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58a894h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 1ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 20h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 11: jne 0x4a52a4
        __asm _emit 0x75
        __asm _emit 0x11
        push 33h
        push 5d0270h
        ; Exact mapped bytes E8 61 F7 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf7
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a52a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a528a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 24h], 1
        push 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes E8 73 D5 0A 00: call 0x552834
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd5
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24h], 0ffffffffh
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
