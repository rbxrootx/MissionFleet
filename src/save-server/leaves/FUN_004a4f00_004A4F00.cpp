// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4F00 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_004a4f00_004A4F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 75 11: jne 0x4a4f26
        __asm _emit 0x75
        __asm _emit 0x11
        push 45h
        push 67599ch
        ; Exact mapped bytes E8 1F 3E 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a4f26
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a4f0c
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 6E CC 08 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        push 18h
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 3ch
        ; Exact mapped bytes E8 DF DC 08 00: call 0x532c24
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xdc
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 18h
        ; Exact mapped bytes 74 11: je 0x4a4f5b
        __asm _emit 0x74
        __asm _emit 0x11
        push 48h
        push 67599ch
        ; Exact mapped bytes E8 EA 3D 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a4f5b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x4a4f34
        __asm _emit 0x75
        __asm _emit 0xd3
        push 1eh
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        push -1
        push -1
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A7 17 03 00: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4a4f8e
        __asm _emit 0x75
        __asm _emit 0x11
        push 4ah
        push 67599ch
        ; Exact mapped bytes E8 B7 3D 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a4f8e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x4a4f61
        __asm _emit 0x75
        __asm _emit 0xcd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
