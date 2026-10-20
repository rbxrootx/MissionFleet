// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520310 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_58520310_58520310() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 09: jne 0x58520328
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x5852032f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp - 14h]
        mov byte ptr [eax + 48h], cl
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 3dh], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 90 FE FF: call 0x58509400
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 5D: je 0x585203ab
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x585203ab
        __asm _emit 0x74
        __asm _emit 0x54
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 3B 99 33 00: call 0x58859cbc
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x99
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 10h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 00 00 00: call 0x585203e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4ch], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes A1 14 73 94 58: mov eax, dword ptr [0x58947314]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 18 73 94 58: mov ecx, dword ptr [0x58947318]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        mov dword ptr [edx + 40h], eax
        mov dword ptr [edx + 44h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 38h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
