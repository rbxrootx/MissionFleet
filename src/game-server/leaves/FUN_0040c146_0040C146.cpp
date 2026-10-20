// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C146 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_0040c146_0040C146() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 2D: je 0x40c194
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        sub edx, 1
        push edx
        ; Exact mapped bytes E8 8A 93 12 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x93
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 53 C6 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EC 00 00 00: call 0x40c280
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9C 03 08 00: call 0x48c53c
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x08
        __asm _emit 0x00
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 35 C6 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc6
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
