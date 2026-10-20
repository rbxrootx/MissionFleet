// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D427C .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_004d427c_004D427C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x4d4297
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4d42ab
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bc8h
        push 671a64h
        ; Exact mapped bytes E8 9A 4A 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d42ab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4d4288
        __asm _emit 0x75
        __asm _emit 0xd7
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A5 F7 FF FF: call 0x4d3a62
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4d42c6
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 08: jmp 0x4d42ce
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D4 B4 FF FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
