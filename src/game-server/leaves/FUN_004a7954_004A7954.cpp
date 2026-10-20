// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A7954 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_004a7954_004A7954() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 38h
        mov dword ptr [ebp - 8], eax
        push 0feh
        push 5d052ch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 E7 37 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4a7993
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ffh
        push 5d052ch
        ; Exact mapped bytes E8 72 D0 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a7993
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a7979
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 58e540h
        mov ecx, dword ptr [ebp - 8]
        add ecx, 34h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 34h]
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x4a79d0
        __asm _emit 0x75
        __asm _emit 0x14
        push 103h
        push 5d052ch
        ; Exact mapped bytes E8 35 D0 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a79d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4a79b4
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
