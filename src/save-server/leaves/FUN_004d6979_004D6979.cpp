// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D6979 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004d6979_004D6979() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x4d699d
        __asm _emit 0x75
        __asm _emit 0x14
        push 159h
        push 672048h
        ; Exact mapped bytes E8 A8 23 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d699d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d6980
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 75 02: jne 0x4d69ae
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 38: jmp 0x4d69e6
        __asm _emit 0xeb
        __asm _emit 0x38
        lea eax, [ebp + 20h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        ; Exact mapped bytes 66 8B 4D 14: mov cx, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        push ecx
        ; Exact mapped bytes 66 8B 55 10: mov dx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 38h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov dword ptr [ebp - 4], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
