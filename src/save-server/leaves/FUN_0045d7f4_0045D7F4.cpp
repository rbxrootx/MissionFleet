// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D7F4 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_0045d7f4_0045D7F4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ea96h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E3 74 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 49 C4 07 00: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc4
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x45d84f
        __asm _emit 0x75
        __asm _emit 0x14
        push 8a7h
        push 678664h
        ; Exact mapped bytes E8 F6 B4 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb4
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45d84f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x45d82b
        __asm _emit 0x75
        __asm _emit 0xd6
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4D 75 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x75
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 31 FE FF FF: call 0x45d69b
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        or al, 1
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6E F0 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
