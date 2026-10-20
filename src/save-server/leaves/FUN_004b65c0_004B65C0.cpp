// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B65C0 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_004b65c0_004B65C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b65f1
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a9h
        push 677e8ch
        ; Exact mapped bytes E8 54 27 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b65f1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4b65cc
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4b6611
        __asm _emit 0x75
        __asm _emit 0x14
        push 0aah
        push 677e8ch
        ; Exact mapped bytes E8 34 27 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b6611
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4b65f7
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 47 04 00 00: call 0x4b6a72
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        push ecx
        push 0
        push 405h
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
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
