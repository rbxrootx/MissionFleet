// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EF6D0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_584ef6d0_584EF6D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584ef6f2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 24h
        ; Exact mapped bytes E8 F3 1C 00 00: call 0x584f13f0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 73 4B: jae 0x584ef74d
        __asm _emit 0x73
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 8]
        add ecx, 24h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 89 F3 FF FF: call 0x584eeaa0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 104h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 29: jne 0x584ef74b
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        add ecx, 24h
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 69 F3 FF FF: call 0x584eeaa0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 38 42 89 58: call dword ptr [0x58894238]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 9C: jmp 0x584ef6e9
        __asm _emit 0xeb
        __asm _emit 0x9c
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
