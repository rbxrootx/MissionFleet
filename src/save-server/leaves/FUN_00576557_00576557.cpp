// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00576557 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_00576557_00576557() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d8h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 0A: jne 0x57657e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80004005h
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x57662b
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 4]
        push edx
        push 3
        push 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ach]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ach]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5765b0
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AE 93 FD FF: call 0x54f97b
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 26: je 0x5765fc
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 41h]
        test edx, edx
        ; Exact mapped bytes 74 18: je 0x5765fa
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        ; Exact mapped bytes EB C5: jmp 0x5765c1
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 3
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC BE FF FF: call 0x5724f6
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x576623
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [ebp - 4], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x57660a
        __asm _emit 0x75
        __asm _emit 0xe1
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
