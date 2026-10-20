// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561CC1 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_00561cc1_00561CC1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 44h
        mov dword ptr [ebp - 4], eax
        push 1c7h
        push 5ce6c8h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 7C 94 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x561cfe
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c9h
        push 5ce6c8h
        ; Exact mapped bytes E8 07 2D FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x561cfe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x561ce4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED FC FF FF: call 0x561a02
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x561d3b
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x561d34
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x561d40
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, 80004005h
        ; Exact mapped bytes EB 05: jmp 0x561d40
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 80040112h
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
