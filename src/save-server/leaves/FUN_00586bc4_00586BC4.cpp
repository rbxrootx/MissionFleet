// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00586BC4 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00586bc4_00586BC4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 67d98ch
        push 67d9c0h
        ; Exact mapped bytes E8 38 9A F1 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9a
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x586bfa
        __asm _emit 0x74
        __asm _emit 0x11
        push 27h
        push 67d938h
        ; Exact mapped bytes E8 4B 21 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x21
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586bfa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x586be0
        __asm _emit 0x75
        __asm _emit 0xe0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
