// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B663 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_0056b663_0056B663() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x56b682
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 42: jmp 0x56b6c4
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 6C 27 5E 00: call dword ptr [0x5e276c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x56b69a
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 2A: jmp 0x56b6c4
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 74 28 5E 00: call dword ptr [0x5e2874]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 06: jne 0x56b6b3
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
