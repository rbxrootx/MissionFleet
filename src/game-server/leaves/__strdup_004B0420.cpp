// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B0420 .. +0x47 bytes.
extern "C" __declspec(naked) void __strdup_004B0420() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x4b042e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 35: jmp 0x4b0463
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 99 8F FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        push eax
        ; Exact mapped bytes E8 CD 9D FF FF: call 0x4aa210
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x4b0461
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 E4 99 FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 02: jmp 0x4b0463
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
