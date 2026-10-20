// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048195C .. +0xFB bytes.
extern "C" __declspec(naked) void FUN_0048195c_0048195C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x481a45
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 110h]
        cmp edx, dword ptr [ecx + 10ch]
        ; Exact mapped bytes 0F 8D B9 00 00 00: jge 0x481a45
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8dch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 0A: jne 0x4819a4
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x481a47
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ca4h], 0
        ; Exact mapped bytes 74 26: je 0x4819d6
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ca4h]
        mov dword ptr [eax + 8e4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ca4h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8e0h], edx
        ; Exact mapped bytes EB 19: jmp 0x4819ef
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ca0h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8e4h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 8dch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ca4h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8e0h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 110h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 110h], eax
        push 0
        push 46bh
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c90h
        ; Exact mapped bytes E8 D2 1E F8 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x481a47
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 8F 6D 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
