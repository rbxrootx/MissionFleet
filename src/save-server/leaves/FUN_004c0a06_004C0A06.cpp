// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C0A06 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_004c0a06_004C0A06() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7D 11: jge 0x4c0a23
        __asm _emit 0x7d
        __asm _emit 0x11
        push 3fh
        push 6746f0h
        ; Exact mapped bytes E8 22 83 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c0a23
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4c0a0c
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 10h]
        sub edx, 1
        mov dword ptr [ebp + 10h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x4c0a59
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 C0 00 00: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 4
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB D0: jmp 0x4c0a29
        __asm _emit 0xeb
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
