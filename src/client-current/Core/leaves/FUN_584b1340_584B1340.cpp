// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B1340 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_584b1340_584B1340() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584b135b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A E9 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 73 36 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E9 0A: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x584b1420
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584b13a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 70: jge 0x584b141b
        __asm _emit 0x7d
        __asm _emit 0x70
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA E8 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 47 E9 FF FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 47: je 0x584b1419
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [eax]
        cmp ecx, 0bh
        ; Exact mapped bytes 75 3C: jne 0x584b1419
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 75 1C: jne 0x584b1419
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 EE 5D 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 2fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5B 79 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 09: jmp 0x584b1422
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes EB 81: jmp 0x584b139c
        __asm _emit 0xeb
        __asm _emit 0x81
        ; Exact mapped bytes E9 32 FF FF FF: jmp 0x584b1352
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
