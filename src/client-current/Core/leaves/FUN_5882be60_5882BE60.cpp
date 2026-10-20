// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882BE60 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_5882be60_5882BE60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58892684h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 10h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], ecx
        push 0ch
        ; Exact mapped bytes E8 75 51 00 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 20: je 0x5882bec2
        __asm _emit 0x74
        __asm _emit 0x20
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 03 BF C7 FF: call 0x584a7dc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xbf
        __asm _emit 0xc7
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x5882bec9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + eax*4], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
