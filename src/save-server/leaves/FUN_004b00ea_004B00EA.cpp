// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B00EA .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_004b00ea_004B00EA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b0119
        __asm _emit 0x75
        __asm _emit 0x14
        push 1aeh
        push 635af0h
        ; Exact mapped bytes E8 2C 8C 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b0119
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4b00f4
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 B4 07 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        push 41dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
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
