// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B29D .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_0051b29d_0051B29D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0c9h
        push 5cb0ach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A6 FE FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x51b2c5
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x51b3bf
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x51b2df
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ceh
        push 5cb0ach
        ; Exact mapped bytes E8 26 97 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b2df
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x51b2c5
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 62 4B FB FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x4b
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51b30c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cfh
        push 5cb0ach
        ; Exact mapped bytes E8 F9 96 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b30c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x51b2e5
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 18h]
        ; Exact mapped bytes 76 15: jbe 0x51b338
        __asm _emit 0x76
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        add eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes 76 14: jbe 0x51b35d
        __asm _emit 0x76
        __asm _emit 0x14
        push 0d4h
        push 5cb0ach
        ; Exact mapped bytes E8 A8 96 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b35d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x51b338
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 14h]
        push ecx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 14h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 76 0C: jbe 0x51b3ac
        __asm _emit 0x76
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [eax + 1ch], edx
        push 0ddh
        push 5cb0ach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A1 FD FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
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
