// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D63DD .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_004d63dd_004D63DD() {
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
        ; Exact mapped bytes 75 14: jne 0x4d640c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dbh
        push 672048h
        ; Exact mapped bytes E8 39 29 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d640c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d63e7
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 1A: jne 0x4d6435
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 64 8F FF FF: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 20: jmp 0x4d6455
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
