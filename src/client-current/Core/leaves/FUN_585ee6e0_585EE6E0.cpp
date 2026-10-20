// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EE6E0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_585ee6e0_585EE6E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        xor eax, eax
        mov byte ptr [ebp - 1], al
        lea ecx, [ebp - 1]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 1C 3C EB FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x3c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 04 98 E9 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x98
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B7 4E EB FF: call 0x584a35d0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 97 86 E9 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 84 86 E9 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 E1 97 E9 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x97
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
