// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00579350 .. +0x7E bytes.
extern "C" __declspec(naked) void __1CWinThread__UAE_XZ_00579350() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57cce0h
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
        sub esp, 8
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 58336ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 74 0D: je 0x579394
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E8 0B C1 FC FF: call 0x5454a4
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 0A: jne 0x5793b1
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7B E9 F7 FF: call 0x4f7d3b
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe9
        __asm _emit 0xf7
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
