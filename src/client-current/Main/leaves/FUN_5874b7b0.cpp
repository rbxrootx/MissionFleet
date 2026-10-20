// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874B7B0 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_5874b7b0() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 30h]
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5874b7fe
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [eax + 0cc0h]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x5874b7fe
        __asm _emit 0x74
        __asm _emit 0x38
        mov dl, byte ptr [eax + 4]
        and dl, 1fh
        cmp dl, 9
        ; Exact mapped bytes 75 2D: jne 0x5874b7fe
        __asm _emit 0x75
        __asm _emit 0x2d
        movzx eax, byte ptr [ecx + 1a1h]
        mov ecx, dword ptr [esp + 4]
        imul ecx, dword ptr [esp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 72 19: jb 0x5874b7fe
        __asm _emit 0x72
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 41h
        ; Exact mapped bytes E8 FE 02 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 37 95 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
