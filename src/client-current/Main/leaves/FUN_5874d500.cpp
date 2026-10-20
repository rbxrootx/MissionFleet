// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874D500 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_5874d500() {
    __asm {
        push ecx
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 4C: je 0x5874d559
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ecx + 0cc0h]
        movzx ecx, word ptr [ecx + 4]
        xor eax, eax
        mov byte ptr [esp], 6
        mov byte ptr [esp + 1], 7
        mov byte ptr [esp + 2], 8
        mov byte ptr [esp + 3], 9
        and ecx, 1fh
        nop
        ; Exact mapped bytes 0F BE 14 04: movsx edx, byte ptr [esp + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x04
        cmp ecx, edx
        ; Exact mapped bytes 74 0A: je 0x5874d542
        __asm _emit 0x74
        __asm _emit 0x0a
        inc eax
        cmp eax, 4
        ; Exact mapped bytes 7C F2: jl 0x5874d530
        __asm _emit 0x7c
        __asm _emit 0xf2
        mov al, 1
        pop ecx
        ret
        push 0
        push 0
        push 0
        push 7d1h
        ; Exact mapped bytes E8 9E E5 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D7 77 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop ecx
        ret
    }
}
