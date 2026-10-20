// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509640 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_58509640_58509640() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 30h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 201h
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dword ptr [ecx + 18h], 6
        mov dword ptr [ecx + 1ch], edx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        xor edx, edx
        mov dword ptr [eax + 20h], ecx
        mov dword ptr [eax + 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ch], 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 0B 00 00: call 0x5850a1f0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 8
        ; Exact mapped bytes E8 51 79 32 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x79
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0D: je 0x585096cc
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D9 D4 FF FF: call 0x58506ba0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585096d3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 30h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
