// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AF320 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_584af320_584AF320() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 09 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 6C: je 0x584af3a4
        __asm _emit 0x74
        __asm _emit 0x6c
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 09 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 96 56 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 51: je 0x584af3a4
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 9
        ; Exact mapped bytes 75 3E: jne 0x584af3a4
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, 1
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + ecx + 198h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        imul ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 72 1C: jb 0x584af3a4
        __asm _emit 0x72
        __asm _emit 0x1c
        ; Exact mapped bytes E8 63 7E 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 41h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D0 99 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x584af3a9
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
