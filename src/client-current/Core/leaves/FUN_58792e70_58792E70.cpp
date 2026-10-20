// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58792E70 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_58792e70_58792E70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58792e8b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        ; Exact mapped bytes E8 AA 53 CF FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x53
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 73 79: jae 0x58792f14
        __asm _emit 0x73
        __asm _emit 0x79
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 60 4B CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x4b
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 49 7B FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 64h
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 39 4B CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4b
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 22 7B FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 24: jne 0x58792f0f
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 19: jne 0x58792f0f
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        add eax, 64h
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 05 4B CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4b
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 07: jmp 0x58792f16
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 6E FF FF FF: jmp 0x58792e82
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
