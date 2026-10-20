// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED757 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_004ed757_004ED757() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4E 37 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 7E 43: jle 0x4ed7b3
        __asm _emit 0x7e
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 41 37 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6D FE FF FF: call 0x4ed5f0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 87 FD FF FF: call 0x4ed519
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1C F8 F9 FF: call 0x48cfc0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf8
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 70 B8 FB FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb8
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FE 36 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 7E 14: jle 0x4ed7d4
        __asm _emit 0x7e
        __asm _emit 0x14
        push 0c0h
        push 5c4bd4h
        ; Exact mapped bytes E8 31 72 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed7d4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4ed7b3
        __asm _emit 0x75
        __asm _emit 0xd9
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
