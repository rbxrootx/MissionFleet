// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050E778 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_0050e778_0050E778() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x50e79b
        __asm _emit 0x75
        __asm _emit 0x14
        push 108h
        push 5c68bch
        ; Exact mapped bytes E8 6A 62 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50e79b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50e781
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 F8 FF FF: call 0x50e0a0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 3D: je 0x50e7f5
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 20 26 5E 00: call dword ptr [0x5e2620]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 24 26 5E 00: call dword ptr [0x5e2624]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 11: jle 0x50e7f3
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 5c69b0h
        ; Exact mapped bytes E8 25 14 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 0D: jmp 0x50e802
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 81 86 FF FF: call 0x506e83
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
