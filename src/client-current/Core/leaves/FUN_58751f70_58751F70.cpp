// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58751F70 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_58751f70_58751F70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58751f8b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 64: jge 0x58751ff5
        __asm _emit 0x7d
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0b50h], 0
        ; Exact mapped bytes 74 52: je 0x58751ff3
        __asm _emit 0x74
        __asm _emit 0x52
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0b50h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F3 F5 FF FF: call 0x587515b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x58751ff3
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 0b50h]
        ; Exact mapped bytes E8 ED 29 D3 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x29
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push -1
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 80011035h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E A9 0D 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa9
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 8D: jmp 0x58751f82
        __asm _emit 0xeb
        __asm _emit 0x8d
        mov esp, ebp
        pop ebp
        ret
    }
}
