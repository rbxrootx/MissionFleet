// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517AF8 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_00517af8_00517AF8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 28dh
        push 5c8c2ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 49 36 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x517b3c
        __asm _emit 0x75
        __asm _emit 0x14
        push 28eh
        push 5c8c2ch
        ; Exact mapped bytes E8 C9 CE 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517b3c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x517b17
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6D FB FF FF: call 0x5176bf
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0bh]
        and eax, 0ffh
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 0ffh
        shl ecx, 10h
        or eax, ecx
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
