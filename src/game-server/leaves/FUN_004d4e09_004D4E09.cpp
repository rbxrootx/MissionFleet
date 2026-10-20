// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4E09 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_004d4e09_004D4E09() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57cec7h
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
        sub esp, 3ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d4e56
        __asm _emit 0x75
        __asm _emit 0x14
        push 274h
        push 5c64b4h
        ; Exact mapped bytes E8 AF FB 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfb
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4e56
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d4e31
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 38h], 1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 96 C0 05 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov dword ptr [ebp - 40h], 80h
        mov ecx, dword ptr [ebp - 40h]
        shl ecx, 1
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 14 93 01 00: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        push 0
        push 110ch
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 40h]
        sub edx, 1
        cmp dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes 74 B3: je 0x4d4e7f
        __asm _emit 0x74
        __asm _emit 0xb3
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5D 92 01 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 85 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        or ecx, 1
        mov dword ptr [ebp - 44h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 55 89 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
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
