// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848F490 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_5848f490_5848F490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC CA FF FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        add eax, 34h
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 16 3C 06 00: call 0x584f30d0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 49: je 0x5848f50c
        __asm _emit 0x74
        __asm _emit 0x49
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5848f4d5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 31: jge 0x5848f50c
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 38h], 0
        ; Exact mapped bytes 75 11: jne 0x5848f4f9
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx*4 + 38h], ecx
        ; Exact mapped bytes EB 15: jmp 0x5848f50c
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes EB 11: jmp 0x5848f50a
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 38h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 02: jne 0x5848f50a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x5848f50c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C0: jmp 0x5848f4cc
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov esp, ebp
    }
}
