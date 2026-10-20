// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00455840 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_00455840_00455840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3C 18 00 00: call 0x457090
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x455879
        __asm _emit 0x75
        __asm _emit 0x21
        push 677658h
        push 0
        push 461h
        push 677614h
        push 2
        ; Exact mapped bytes E8 F0 75 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x455879
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x45584c
        __asm _emit 0x75
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 21: jne 0x4558a9
        __asm _emit 0x75
        __asm _emit 0x21
        push 677668h
        push 0
        push 462h
        push 677614h
        push 2
        ; Exact mapped bytes E8 C0 75 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4558a9
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D0: jne 0x45587f
        __asm _emit 0x75
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 09 FE FF FF: call 0x4556c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DF 17 00 00: call 0x4570a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 05: jge 0x4558de
        __asm _emit 0x7d
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 08: jmp 0x4558e6
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0A 00 00 00: call 0x4558f0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
