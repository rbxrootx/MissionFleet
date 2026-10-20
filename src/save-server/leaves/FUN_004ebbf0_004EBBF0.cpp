// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EBBF0 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_004ebbf0_004EBBF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x4ebc13
        __asm _emit 0x75
        __asm _emit 0x11
        push 1ch
        push 675a74h
        ; Exact mapped bytes E8 32 D1 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ebc13
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4ebbfc
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4ebc30
        __asm _emit 0x75
        __asm _emit 0x11
        push 1dh
        push 675a74h
        ; Exact mapped bytes E8 15 D1 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ebc30
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4ebc19
        __asm _emit 0x75
        __asm _emit 0xe3
        push 100h
        lea edx, [ebp - 100h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F5 E0 FE FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4ebc53
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 75: jmp 0x4ebcc8
        __asm _emit 0xeb
        __asm _emit 0x75
        push 0ah
        lea ecx, [ebp - 100h]
        push ecx
        ; Exact mapped bytes E8 0F DA F5 FF: call 0x449670
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xda
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 104h], eax
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 3A: je 0x4ebcad
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 104h]
        add edx, 1
        push edx
        ; Exact mapped bytes E8 4E A4 F7 FF: call 0x4660d0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa4
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        push 48h
        ; Exact mapped bytes 8B 15 CC 6D 68 00: mov edx, dword ptr [0x686dcc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 B4 B9 68 00: call dword ptr [0x68b9b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 104h]
        mov byte ptr [eax], 0
        push 20h
        lea ecx, [ebp - 100h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1ch
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
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
