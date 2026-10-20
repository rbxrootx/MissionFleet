// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58521620 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_58521620_58521620() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 52: je 0x58521684
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 AE 91 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 99 91 F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 49 99 FE FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 13: jne 0x58521684
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        push eax
        ; Exact mapped bytes E8 BC 89 33 00: call 0x5885a039
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x89
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 7C 04: jl 0x58521688
        __asm _emit 0x7c
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x5852168b
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
