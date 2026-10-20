// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045C9B6 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_0045c9b6_0045C9B6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D8 EB 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xeb
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x45c9e7
        __asm _emit 0x75
        __asm _emit 0x1c
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        ; Exact mapped bytes E8 78 FB FF FF: call 0x45c556
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x45c9e7
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 03: jmp 0x45c9ea
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
