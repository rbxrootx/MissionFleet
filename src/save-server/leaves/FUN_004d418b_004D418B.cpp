// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D418B .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_004d418b_004D418B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d41b7
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b9bh
        push 671a64h
        ; Exact mapped bytes E8 8E 4B 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d41b7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d419d
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 D8 F8 FF FF: call 0x4d3aa5
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4d41d6
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 08: jmp 0x4d41de
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C4 B5 FF FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
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
