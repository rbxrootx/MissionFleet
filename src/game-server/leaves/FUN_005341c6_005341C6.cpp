// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005341C6 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_005341c6_005341C6() {
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
        ; Exact mapped bytes 75 11: jne 0x5341ea
        __asm _emit 0x75
        __asm _emit 0x11
        push 26h
        push 5820f4h
        ; Exact mapped bytes E8 1B 08 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5341ea
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5341d0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 64 CD FF FF: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 A5 CD FF FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xcd
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
        ; Exact mapped bytes FF 15 78 1F 5E 00: call dword ptr [0x5e1f78]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x1f
        __asm _emit 0x5e
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
