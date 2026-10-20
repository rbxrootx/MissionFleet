// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00527F62 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_00527f62_00527F62() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 11: jne 0x527f86
        __asm _emit 0x75
        __asm _emit 0x11
        push 26h
        push 634608h
        ; Exact mapped bytes E8 BF 0D 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527f86
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x527f6c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 C8 CD FF FF: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 09 CE FF FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 DC B3 68 00: call dword ptr [0x68b3dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb3
        __asm _emit 0x68
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
