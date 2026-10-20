// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048B3D7 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_0048b3d7_0048B3D7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 40c4ch], 0
        ; Exact mapped bytes 66 C7 45 F0 02 00: mov word ptr [ebp - 0x10], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov esi, esp
        push 5c494ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 2C 29 5E 00: call dword ptr [0x5e292c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B6 D3 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 19: je 0x48b44c
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 30 FE FF FF: call 0x48b27a
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x48b44e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 87 D3 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
