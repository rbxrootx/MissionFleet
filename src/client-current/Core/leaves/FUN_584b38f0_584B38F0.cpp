// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B38F0 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_584b38f0_584B38F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C C3 FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D5 10 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 04: jne 0x584b3918
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 38: jmp 0x584b3950
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 D5 FF FF: call 0x584b0f00
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584b392b
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 25: jmp 0x584b3950
        __asm _emit 0xeb
        __asm _emit 0x25
        push 2
        push 3
        push 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 77 B7 FF FF: call 0x584af0b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584b3941
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 0F: jmp 0x584b3950
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 16ch]
        mov dword ptr [ebp - 0ch], edx
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
