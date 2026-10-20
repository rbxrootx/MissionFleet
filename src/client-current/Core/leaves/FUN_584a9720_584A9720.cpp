// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9720 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_584a9720_584A9720() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        lea eax, [ebp + 14h]
        push eax
        lea ecx, [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 9F DC FD FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 2C 0F 00 00: call 0x584aa670
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 05: je 0x584a9755
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 1E: jmp 0x584a9773
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 73 05: jae 0x584a9762
        __asm _emit 0x73
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 11: jmp 0x584a9773
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 76 07: jbe 0x584a9771
        __asm _emit 0x76
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x584a9773
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
