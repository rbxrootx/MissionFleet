// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045EB1E .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_0045eb1e_0045EB1E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 77 14: ja 0x45eb44
        __asm _emit 0x77
        __asm _emit 0x14
        push 0ae5h
        push 678664h
        ; Exact mapped bytes E8 01 A2 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45eb44
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x45eb2a
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
        ; Exact mapped bytes E8 1D 02 00 00: call 0x45ed86
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 31: je 0x45eba0
        __asm _emit 0x74
        __asm _emit 0x31
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 89 03 00 00: call 0x45ef04
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 95 D1 0E 00: call 0x54bd18
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd1
        __asm _emit 0x0e
        __asm _emit 0x00
        imul eax, dword ptr [ebp + 0ch]
        push eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 6B 67 00 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 88 03 00 00: call 0x45ef28
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
