// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851CF80 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_5851cf80_5851CF80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 05 D9 28 00: call 0x587aa890
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd9
        __asm _emit 0x28
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5851cf93
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 49: jmp 0x5851cfdc
        __asm _emit 0xeb
        __asm _emit 0x49
        push 588a3f78h
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x5851cfab
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 31: jmp 0x5851cfdc
        __asm _emit 0xeb
        __asm _emit 0x31
        push 588a3f84h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 DC 42 89 58: call dword ptr [0x588942dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        push 589472f8h
        push 5851cf10h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 80 D6 28 00: call 0x587aa650
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd6
        __asm _emit 0x28
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 99 D8 28 00: call 0x587aa870
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
