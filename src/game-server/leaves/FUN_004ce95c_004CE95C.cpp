// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CE95C .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_004ce95c_004CE95C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 C4 14 00 00: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ce986
        __asm _emit 0x75
        __asm _emit 0x14
        push 2b2h
        push 5c4c5ch
        ; Exact mapped bytes E8 7F 60 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ce986
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4ce963
        __asm _emit 0x75
        __asm _emit 0xd7
        lea edx, [ebp + 10h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 F8 FF FF: call 0x4ce1c9
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
