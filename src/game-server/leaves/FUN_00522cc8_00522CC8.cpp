// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00522CC8 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_00522cc8_00522CC8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 53 D1 FA FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd1
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x522cf7
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fah
        push 5c7638h
        ; Exact mapped bytes E8 0E 1D 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x522cf7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x522cd4
        __asm _emit 0x75
        __asm _emit 0xd7
        push 3ch
        push 0
        lea edx, [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 66 66 F8 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov byte ptr [ebp - 25h], 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 3ch], eax
        push 20h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 09 00 00 00: call 0x522d40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
