// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049A4A0 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_0049a4a0_0049A4A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 21: jne 0x49a4d6
        __asm _emit 0x75
        __asm _emit 0x21
        push 5caee0h
        push 0
        push 51ch
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 63 66 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49a4d6
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x49a4ac
        __asm _emit 0x75
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        ; Exact mapped bytes E8 C9 06 00 00: call 0x49abb0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x49a52d
        __asm _emit 0x74
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 4A F2 FF FF: call 0x499740
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 EA F1 FF FF: call 0x4996f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        ; Exact mapped bytes E8 F7 06 00 00: call 0x49ac10
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 07: jmp 0x49a534
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 80004002h
        mov eax, dword ptr [ebp - 4]
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
