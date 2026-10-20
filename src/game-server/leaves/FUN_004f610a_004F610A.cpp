// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F610A .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_004f610a_004F610A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes E8 E8 F3 03 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 17: je 0x4f6138
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 0C: jne 0x4f6138
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 2D 00 00: call 0x4f8f10
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BE 8C FF FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x4f6172
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes E8 DE B6 FF FF: call 0x4f182c
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 1
        push 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 11 66 04 00: call 0x53c783
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
