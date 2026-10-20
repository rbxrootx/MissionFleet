// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053B7B3 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_0053b7b3_0053B7B3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 1C 28 5E 00: call dword ptr [0x5e281c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53b7e2
        __asm _emit 0x75
        __asm _emit 0x14
        push 42bh
        push 581fc0h
        ; Exact mapped bytes E8 23 92 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53b7e2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x53b7bd
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 3A AF FF FF: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 31 AF FF FF: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 DC 27 5E 00: call dword ptr [0x5e27dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
