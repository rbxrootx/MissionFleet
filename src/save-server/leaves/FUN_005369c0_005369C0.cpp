// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005369C0 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_005369c0_005369C0() {
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
        ; Exact mapped bytes 75 14: jne 0x5369e7
        __asm _emit 0x75
        __asm _emit 0x14
        push 39ch
        push 636640h
        ; Exact mapped bytes E8 5E 23 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5369e7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5369ca
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 28h]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 19 D3 FF FF: call 0x533d2d
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 44 B5 68 00: call dword ptr [0x68b544]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
