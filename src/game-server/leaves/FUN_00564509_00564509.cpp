// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00564509 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_00564509_00564509() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 1
        push 10h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 34 B9 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb9
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56453a
        __asm _emit 0x75
        __asm _emit 0x14
        push 13dh
        push 5cfe90h
        ; Exact mapped bytes E8 CB 04 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x04
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56453a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x564515
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 29: je 0x564572
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 21: jne 0x564572
        __asm _emit 0x75
        __asm _emit 0x21
        lea ecx, [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 48 2A 5E 00: call dword ptr [0x5e2a48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0E: jne 0x564572
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 43 F5 FF FF: call 0x563ab5
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
