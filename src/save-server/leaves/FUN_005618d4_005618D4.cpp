// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005618D4 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_005618d4_005618D4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 16eh
        push 67c6f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 6F 89 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x89
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x56190e
        __asm _emit 0x75
        __asm _emit 0x14
        push 16fh
        push 67c6f0h
        ; Exact mapped bytes E8 37 74 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56190e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5618f1
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 2F: jne 0x561949
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        add eax, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 38h], eax
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x561947
        __asm _emit 0x75
        __asm _emit 0x14
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        ; Exact mapped bytes EB 35: jmp 0x56197e
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 2C: je 0x56197e
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 38h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 38h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x56197e
        __asm _emit 0x75
        __asm _emit 0x14
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
