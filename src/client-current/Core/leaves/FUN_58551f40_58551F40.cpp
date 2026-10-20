// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58551F40 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_58551f40_58551F40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58551f5b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 46: jge 0x58551fa7
        __asm _emit 0x7d
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 74 37: je 0x58551fa5
        __asm _emit 0x74
        __asm _emit 0x37
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 09: jne 0x58551f7d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 07: jmp 0x58551f84
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0fh
        mov al, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 1], al
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 8]
        mov dword ptr [ebp - 14h], eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EC 3F F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3f
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AB: jmp 0x58551f52
        __asm _emit 0xeb
        __asm _emit 0xab
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
