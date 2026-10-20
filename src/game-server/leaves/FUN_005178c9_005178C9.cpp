// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005178C9 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_005178c9_005178C9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 25ch
        push 5c8c2ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 78 38 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51790d
        __asm _emit 0x75
        __asm _emit 0x14
        push 25dh
        push 5c8c2ch
        ; Exact mapped bytes E8 F8 D0 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51790d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x5178e8
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        push 419h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
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
