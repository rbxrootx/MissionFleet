// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858EAF0 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_5858eaf0_5858EAF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes E8 AC FF FF FF: call 0x5858eab0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 02: jne 0x5858eb0e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 68: jmp 0x5858eb76
        __asm _emit 0xeb
        __asm _emit 0x68
        mov dl, byte ptr [ebp + 8]
        mov byte ptr [ebp - 8], dl
        cmp byte ptr [ebp - 8], 1
        ; Exact mapped bytes 74 08: je 0x5858eb22
        __asm _emit 0x74
        __asm _emit 0x08
        cmp byte ptr [ebp - 8], 2
        ; Exact mapped bytes 74 2D: je 0x5858eb4d
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes EB 54: jmp 0x5858eb76
        __asm _emit 0xeb
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 49 B7 FF FF: call 0x5858a280
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 10h], eax
        push 2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 56 16 00 00: call 0x585901a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 29: jmp 0x5858eb76
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 14h], edx
        push 0
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1E B7 FF FF: call 0x5858a280
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2B 16 00 00: call 0x585901a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
