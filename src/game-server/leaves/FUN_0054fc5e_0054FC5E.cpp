// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054FC5E .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_0054fc5e_0054FC5E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 0c9h
        push 5cf710h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 E3 B4 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xb4
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54fc9a
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cah
        push 5cf710h
        ; Exact mapped bytes E8 6B 4D FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54fc9a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54fc7d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        lea eax, [ebp - 14h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 10h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x54fce0
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 43 FD FF FF: call 0x54fa23
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 14: je 0x54fcfa
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d2h
        push 5cf710h
        ; Exact mapped bytes E8 0B 4D FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54fcfa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x54fce0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
