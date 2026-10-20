// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00521B1C .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_00521b1c_00521B1C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 2bh
        ; Exact mapped bytes 74 1A: je 0x521b46
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 41 FD FF: call 0x4f5cba
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 34: jmp 0x521b7a
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 11: je 0x521b5d
        __asm _emit 0x74
        __asm _emit 0x11
        push 51h
        push 5c6838h
        ; Exact mapped bytes E8 A8 2E 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x521b5d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x521b46
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
