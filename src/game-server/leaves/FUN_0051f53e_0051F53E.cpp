// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F53E .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_0051f53e_0051F53E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f1f4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 58838ch
        mov dword ptr [ebp - 4], 1
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x51f57e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 7ch
        ; Exact mapped bytes E8 58 30 01 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7D 2C: jge 0x51f5ba
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 60 17 00 00: call 0x520cfa
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 15: je 0x51f5b8
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 70h]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 0A: jne 0x51f5b8
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 70h], 0
        ; Exact mapped bytes EB BB: jmp 0x51f575
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 7ch
        ; Exact mapped bytes E8 0E 54 FC FF: call 0x4e49d7
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 58 61 FF FF: call 0x515730
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
