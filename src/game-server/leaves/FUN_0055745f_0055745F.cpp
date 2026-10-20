// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055745F .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_0055745f_0055745F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 68h
        mov dword ptr [ebp - 0ch], eax
        push 7bbh
        push 5cfa08h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 DC 3C FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58e4b0h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 F1 49 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5574b2
        __asm _emit 0x75
        __asm _emit 0x14
        push 7bfh
        push 5cfa08h
        ; Exact mapped bytes E8 53 D5 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5574b2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x557498
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x55750f
        __asm _emit 0x75
        __asm _emit 0x40
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 34h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 B8 29 5E 00: call dword ptr [0x5e29b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 11: jne 0x5574fc
        __asm _emit 0x75
        __asm _emit 0x11
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        mov dword ptr [ebp - 8], eax
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 1ch]
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 1ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
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
