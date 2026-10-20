// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00586B7F .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_00586b7f_00586B7F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 67d950h
        push 67d988h
        ; Exact mapped bytes E8 7D 9A F1 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x9a
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x586bb5
        __asm _emit 0x74
        __asm _emit 0x11
        push 22h
        push 67d938h
        ; Exact mapped bytes E8 90 21 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x21
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586bb5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x586b9b
        __asm _emit 0x75
        __asm _emit 0xe0
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
