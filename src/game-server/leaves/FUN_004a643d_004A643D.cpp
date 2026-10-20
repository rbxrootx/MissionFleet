// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A643D .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_004a643d_004A643D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 34h
        mov dword ptr [ebp - 8], eax
        push 27eh
        push 5d0270h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 FE 4C 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4a647c
        __asm _emit 0x75
        __asm _emit 0x14
        push 27fh
        push 5d0270h
        ; Exact mapped bytes E8 89 E5 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a647c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a6462
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4a649c
        __asm _emit 0x75
        __asm _emit 0x14
        push 280h
        push 5d0270h
        ; Exact mapped bytes E8 69 E5 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a649c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4a6482
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 58ec98h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
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
