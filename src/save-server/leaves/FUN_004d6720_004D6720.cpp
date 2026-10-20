// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D6720 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004d6720_004D6720() {
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
        ; Exact mapped bytes 75 14: jne 0x4d674f
        __asm _emit 0x75
        __asm _emit 0x14
        push 122h
        push 672048h
        ; Exact mapped bytes E8 F6 25 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x25
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d674f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d672a
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 2C: jne 0x4d678a
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 4E 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x4e
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 54 BF 68 00: call dword ptr [0x68bf54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x4d67b6
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 38h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 38h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 A4 00 00 00: call dword ptr [eax + 0xa4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
