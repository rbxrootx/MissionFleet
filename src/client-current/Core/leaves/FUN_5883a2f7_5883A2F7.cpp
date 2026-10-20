// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A2F7 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_5883a2f7_5883A2F7() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 18h], 0
        ; Exact mapped bytes 74 07: je 0x5883a30b
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [esi + 0c0h]
        inc eax
        push 14h
        cdq
        pop ecx
        idiv ecx
        cmp edx, dword ptr [esi + 0bch]
        ; Exact mapped bytes 75 04: jne 0x5883a324
        __asm _emit 0x75
        __asm _emit 0x04
        xor bl, bl
        ; Exact mapped bytes EB 1C: jmp 0x5883a340
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        mov bl, 1
        mov dword ptr [esi + 0c0h], edx
        mov dword ptr [esi + edx*8 + 1ch], eax
        mov ecx, dword ptr [esi + 0c0h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [esi + ecx*8 + 20h], eax
        cmp dword ptr [esi + 18h], 0
        ; Exact mapped bytes 74 07: je 0x5883a34d
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        mov al, bl
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
