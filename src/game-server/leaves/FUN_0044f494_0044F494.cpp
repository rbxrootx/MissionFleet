// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044F494 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_0044f494_0044F494() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b31eh
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
        sub esp, 8
        push esi
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 5819c8h
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 10h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        mov dword ptr [ebp - 10h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 37: je 0x44f51f
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax*4 + 5d7b80h], 0
        ; Exact mapped bytes 74 28: je 0x44f51d
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, esp
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx*4 + 5d7b80h]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D1 92 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x92
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax*4 + 5d7b80h], 0
        ; Exact mapped bytes EB B9: jmp 0x44f4d8
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 3ch
        ; Exact mapped bytes E8 22 E3 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xe3
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 8
        ; Exact mapped bytes E8 54 D1 00 00: call 0x45c690
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 8F 92 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x92
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
