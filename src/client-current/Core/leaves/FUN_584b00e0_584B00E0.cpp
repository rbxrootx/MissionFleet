// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B00E0 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_584b00e0_584B00E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C FB FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E1 48 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x48
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 8
        ; Exact mapped bytes 74 07: je 0x584b0116
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 4F: jmp 0x584b0165
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov dword ptr [ebp - 4], 1ch
        ; Exact mapped bytes EB 09: jmp 0x584b0128
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 1A: jge 0x584b0148
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 96 F9 FF FF: call 0x584afad0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x584b0146
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 1F: jmp 0x584b0165
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes EB D7: jmp 0x584b011f
        __asm _emit 0xeb
        __asm _emit 0xd7
        ; Exact mapped bytes E8 A3 70 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 2714h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0D 8C 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
