// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F6DE7 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_004f6de7_004F6DE7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 88h], 1
        ; Exact mapped bytes E8 6B AD 03 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 43h
        push 6722c0h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 48 34 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        push 636f38h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B 33 FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4f6e3a
        __asm _emit 0x75
        __asm _emit 0x11
        push 44h
        push 6722c0h
        ; Exact mapped bytes E8 0B 1F 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x1f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f6e3a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4f6e18
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA C6 00 00: call 0x503542
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [eax + 88h], edx
        push 0
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 48 03 00: call 0x52b68d
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
