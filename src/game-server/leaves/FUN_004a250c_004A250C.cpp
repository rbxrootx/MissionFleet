// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A250C .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_004a250c_004A250C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 77 14: ja 0x4a2532
        __asm _emit 0x77
        __asm _emit 0x14
        push 0ae5h
        push 5cbe8ch
        ; Exact mapped bytes E8 D3 24 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a2532
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4a2518
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], edx
        lea eax, [ebp - 8]
        push eax
        push 1
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1D 02 00 00: call 0x4a2774
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 31: je 0x4a258e
        __asm _emit 0x74
        __asm _emit 0x31
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 89 03 00 00: call 0x4a28f2
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 37 AD 0A 00: call 0x54d2a8
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xad
        __asm _emit 0x0a
        __asm _emit 0x00
        imul eax, dword ptr [ebp + 0ch]
        push eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 9D 6A 00 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 88 03 00 00: call 0x4a2916
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
