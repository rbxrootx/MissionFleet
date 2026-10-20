// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004402A0 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_004402a0_004402A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, 0fffffffeh
        add eax, 1
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 77 67: ja 0x44031d
        __asm _emit 0x77
        __asm _emit 0x67
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 76 61: jbe 0x44031d
        __asm _emit 0x76
        __asm _emit 0x61
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 31: je 0x4402f3
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp + 8], 80h
        ; Exact mapped bytes 76 11: jbe 0x4402dc
        __asm _emit 0x76
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 8C C1 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc1
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0F: jmp 0x4402eb
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 DB 3C FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4402fa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes EB 0D: jmp 0x44032a
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 D9 5C FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
