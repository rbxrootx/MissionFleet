// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045CA26 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_0045ca26_0045CA26() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 28h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 68 EB 0E 00: call 0x54b59f
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xeb
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x45ca57
        __asm _emit 0x75
        __asm _emit 0x1c
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ecx]
        push eax
        ; Exact mapped bytes E8 08 FB FF FF: call 0x45c556
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x45ca57
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 03: jmp 0x45ca5a
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
