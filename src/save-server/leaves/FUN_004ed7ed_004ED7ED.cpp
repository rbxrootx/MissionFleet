// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED7ED .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_004ed7ed_004ED7ED() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 5D FE FF FF: call 0x4ed661
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x4ed811
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 39: jmp 0x4ed84a
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 A9 03 00: call 0x52813e
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4ed831
        __asm _emit 0x74
        __asm _emit 0x14
        push 181h
        push 677b4ch
        ; Exact mapped bytes E8 14 B5 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed831
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4ed811
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 F8 00 00 00: call dword ptr [eax + 0xf8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
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
