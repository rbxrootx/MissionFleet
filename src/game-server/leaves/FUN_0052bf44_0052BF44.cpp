// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052BF44 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_0052bf44_0052BF44() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 114h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 114h], ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 23 0B 01 00: call 0x53ca84
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 14 25 5E 00: call dword ptr [0x5e2514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 87 95 00 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x52bf96
        __asm _emit 0x75
        __asm _emit 0x14
        push 41eh
        push 5c8fcch
        ; Exact mapped bytes E8 6F 8A 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52bf96
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x52bf7c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x52bfae
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 31: jae 0x52bfe7
        __asm _emit 0x73
        __asm _emit 0x31
        push 104h
        lea ecx, [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 14 25 5E 00: call dword ptr [0x5e2514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 84 00 00 00: call dword ptr [eax + 0x84]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB BE: jmp 0x52bfa5
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 18 25 5E 00: call dword ptr [0x5e2518]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
