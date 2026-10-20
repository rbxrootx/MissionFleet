// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A25F6 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_004a25f6_004A25F6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 86 AC 0A 00: call 0x54d290
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x4a2623
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b05h
        push 5cbe8ch
        ; Exact mapped bytes E8 E2 23 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a2623
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4a2602
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 20 04 00 00: call 0x4a2a62
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
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
