// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DACD4 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_004dacd4_004DACD4() {
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
        ; Exact mapped bytes 75 14: jne 0x4dacfb
        __asm _emit 0x75
        __asm _emit 0x14
        push 1ddh
        push 5835a8h
        ; Exact mapped bytes E8 0A 9D 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x9d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dacfb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4dacde
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 21 BA 05 00: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 BA 05 00: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 60 1E 5E 00: call dword ptr [0x5e1e60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x1e
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
