// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C090F .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_004c090f_004C090F() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 11: jge 0x4c092c
        __asm _emit 0x7d
        __asm _emit 0x11
        push 29h
        push 6746f0h
        ; Exact mapped bytes E8 19 84 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c092c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4c0915
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x4c0959
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 13 00 00 00: call 0x4c095e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB D9: jmp 0x4c0932
        __asm _emit 0xeb
        __asm _emit 0xd9
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
