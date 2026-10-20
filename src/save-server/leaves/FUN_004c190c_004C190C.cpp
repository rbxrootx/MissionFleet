// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C190C .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_004c190c_004C190C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 0c3h
        push 6769ach
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 35 89 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4c1948
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c4h
        push 6769ach
        ; Exact mapped bytes E8 FD 73 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1948
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4c192b
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        push 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 08 1B FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c1976
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c5h
        push 6769ach
        ; Exact mapped bytes E8 CF 73 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1976
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4c194e
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 0F: je 0x4c19b1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [eax + 4], 0
        ; Exact mapped bytes EB 0A: jmp 0x4c19bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A9 FC FF FF: call 0x4c1670
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
