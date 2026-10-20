// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054C3FD .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_0054c3fd_0054C3FD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 02: jne 0x54c414
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 53: jmp 0x54c467
        __asm _emit 0xeb
        __asm _emit 0x53
        push 58e540h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 FC FF FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x54c43e
        __asm _emit 0x75
        __asm _emit 0x14
        push 1aeh
        push 5cc18ch
        ; Exact mapped bytes E8 C7 85 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c43e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x54c424
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        push edx
        ; Exact mapped bytes FF 15 E8 23 5E 00: call dword ptr [0x5e23e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 74 2A 5E 00: call dword ptr [0x5e2a74]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
