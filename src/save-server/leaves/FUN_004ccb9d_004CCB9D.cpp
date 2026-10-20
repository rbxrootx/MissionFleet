// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CCB9D .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_004ccb9d_004CCB9D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x4ccbd0
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 8A 68 FD FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ccbd0
        __asm _emit 0x75
        __asm _emit 0x14
        push 158h
        push 6714ach
        ; Exact mapped bytes E8 75 C1 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xc1
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ccbd0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x4ccba7
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D7 81 05 00: call 0x524dba
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 FE FF FF: call 0x4cca9d
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
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
