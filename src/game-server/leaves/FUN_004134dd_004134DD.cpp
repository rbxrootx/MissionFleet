// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004134DD .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_004134dd_004134DD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 40000000h
        mov eax, dword ptr [ebp - 0ch]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BC 52 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 34: je 0x413561
        __asm _emit 0x74
        __asm _emit 0x34
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9A 52 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov esi, esp
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 84 52 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 03: jmp 0x413564
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 71 52 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
