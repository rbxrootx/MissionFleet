// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4133 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_004d4133_004D4133() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d4164
        __asm _emit 0x75
        __asm _emit 0x14
        push 136h
        push 5c64b4h
        ; Exact mapped bytes E8 A1 08 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4164
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d413f
        __asm _emit 0x75
        __asm _emit 0xd5
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 407h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 18: je 0x4d41a3
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 10h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
