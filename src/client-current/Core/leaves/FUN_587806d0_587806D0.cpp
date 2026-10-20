// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587806D0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_587806d0_587806D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 06: jmp 0x587806f2
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x58780712
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 53 00 00 00: call 0x58780760
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB DA: jmp 0x587806ec
        __asm _emit 0xeb
        __asm _emit 0xda
        mov esp, ebp
        pop ebp
        ret
    }
}
