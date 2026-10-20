// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B4E10 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_584b4e10_584B4E10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 2
        push 3
        push 0ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B A2 FF FF: call 0x584af0b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x584b4e39
        __asm _emit 0x74
        __asm _emit 0x10
        push 2
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB A4 FF FF: call 0x584af320
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584b4e3d
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 28: jmp 0x584b4e65
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB C0 FF FF: call 0x584b0f00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584b4e50
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 15: jmp 0x584b4e65
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 D3 FF FF: call 0x584b2160
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x584b4e63
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584b4e65
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
