// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3A53 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_004d3a53_004D3A53() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d3a84
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b4h
        push 5c64b4h
        ; Exact mapped bytes E8 81 0F 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d3a84
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d3a5f
        __asm _emit 0x75
        __asm _emit 0xd5
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 91 2C 06 00: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 413h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
