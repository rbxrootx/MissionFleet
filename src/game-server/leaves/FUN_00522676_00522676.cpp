// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00522676 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_00522676_00522676() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 1
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C9 D7 FA FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd7
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5226a2
        __asm _emit 0x75
        __asm _emit 0x11
        push 6bh
        push 5c7638h
        ; Exact mapped bytes E8 63 23 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5226a2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x522680
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F 0D FE FF: call 0x5033c3
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 FD FF FF: call 0x5223f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
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
