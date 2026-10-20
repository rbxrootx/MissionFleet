// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58711080 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_58711080_58711080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        movzx eax, word ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 6F DE FF: call 0x584f7fc0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6f
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3E: je 0x587110e0
        __asm _emit 0x74
        __asm _emit 0x3e
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 0C: jmp 0x587110b6
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 55 FC: mov dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        movzx eax, word ptr [ebp - 4]
        cmp eax, 8
        ; Exact mapped bytes 7D 1A: jge 0x587110d9
        __asm _emit 0x7d
        __asm _emit 0x1a
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 360h]
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes EB D1: jmp 0x587110aa
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x587110e2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
