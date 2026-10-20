// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049A330 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_0049a330_0049A330() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 21: jne 0x49a361
        __asm _emit 0x75
        __asm _emit 0x21
        push 5cb000h
        push 0
        push 837h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 D8 67 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49a361
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x49a33a
        __asm _emit 0x75
        __asm _emit 0xd3
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D FE FF FF: call 0x49a1e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 3C: je 0x49a3b8
        __asm _emit 0x74
        __asm _emit 0x3c
        push 4
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx + edx + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 00 00 00: call 0x49a3d0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 CF FD FF FF: call 0x49a170
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 C6 FD FF FF: call 0x49a170
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x49a3ba
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
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
