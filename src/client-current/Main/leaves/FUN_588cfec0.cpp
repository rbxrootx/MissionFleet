// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CFEC0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_588cfec0() {
    __asm {
        mov eax, dword ptr [ecx + 50h]
        test byte ptr [eax + 3ch], 2
        ; Exact mapped bytes 74 29: je 0x588cfef2
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 30h]
        mov ecx, 0b40h
        mov eax, dword ptr [ecx + edx]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x588cfee7
        __asm _emit 0x74
        __asm _emit 0x09
        movzx eax, byte ptr [eax]
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 11: je 0x588cfef8
        __asm _emit 0x74
        __asm _emit 0x11
        add ecx, 4
        cmp ecx, 0bc0h
        ; Exact mapped bytes 7C E5: jl 0x588cfed7
        __asm _emit 0x7c
        __asm _emit 0xe5
        mov eax, 1
        ret
        push 0
        push 0
        push 0
        push 3b6h
        ; Exact mapped bytes E8 E8 BB E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 21 4E E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0xe9
        __asm _emit 0xff
        xor eax, eax
        ret
    }
}
