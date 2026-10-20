// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562424 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_00562424_00562424() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 56h
        push 5ce898h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 20 8D F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0xff
        push 58ec68h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E7 9B FE FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 4C 2A 5E 00: call dword ptr [0x5e2a4c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x56246c
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 1E B0 FE FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, 5deccch
        ; Exact mapped bytes E8 2A 15 00 00: call 0x5639a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 C4 29 5E 00: call dword ptr [0x5e29c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x56249b
        __asm _emit 0x74
        __asm _emit 0x11
        push 60h
        push 5ce898h
        ; Exact mapped bytes E8 6A 25 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x25
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56249b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x56247c
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EE 9A FE FF: call 0x54bf97
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
