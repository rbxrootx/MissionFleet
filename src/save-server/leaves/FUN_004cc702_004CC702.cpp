// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC702 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_004cc702_004CC702() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 98 14 67 00: cmp eax, dword ptr [0x671498]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x14
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x4cc74b
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x4cc72f
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a5h
        push 6714ach
        ; Exact mapped bytes E8 16 C6 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cc72f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4cc713
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 20 BA 68 00: call dword ptr [0x68ba20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7F 08: jg 0x4cc74b
        __asm _emit 0x7f
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 FF FF FF: call 0x4cc671
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
