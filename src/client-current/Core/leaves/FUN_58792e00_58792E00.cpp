// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58792E00 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_58792e00_58792E00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58792e1b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        ; Exact mapped bytes E8 1A 54 CF FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x54
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 73 3F: jae 0x58792e6a
        __asm _emit 0x73
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D0 4B CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4b
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 B9 35 D5 FF: call 0x584e6400
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x35
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 19: jne 0x58792e68
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        add ecx, 64h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AC 4B CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x4b
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 04: jmp 0x58792e6c
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB A8: jmp 0x58792e12
        __asm _emit 0xeb
        __asm _emit 0xa8
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
