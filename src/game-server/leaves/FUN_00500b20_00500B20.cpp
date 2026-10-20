// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500B20 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_00500b20_00500B20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 11: jne 0x500b44
        __asm _emit 0x75
        __asm _emit 0x11
        push 1ch
        push 5c60a8h
        ; Exact mapped bytes E8 C1 3E 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500b44
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x500b2a
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        push 0
        push 10h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 7E B0 03 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb0
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
