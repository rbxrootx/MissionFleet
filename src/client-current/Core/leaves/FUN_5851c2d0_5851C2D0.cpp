// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851C2D0 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_5851c2d0_5851C2D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C FC F6 FF: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfc
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 88h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 40 6C FD FF: call 0x584f2f50
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3C: je 0x5851c355
        __asm _emit 0x74
        __asm _emit 0x3c
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5851c32b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 24: jge 0x5851c355
        __asm _emit 0x7d
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 8ch], 0
        ; Exact mapped bytes 75 12: jne 0x5851c353
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx*4 + 8ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x5851c355
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CD: jmp 0x5851c322
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov esp, ebp
        pop ebp
        ret
    }
}
