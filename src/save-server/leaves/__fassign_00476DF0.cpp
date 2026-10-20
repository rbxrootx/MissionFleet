// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476DF0 .. +0x48 bytes.
extern "C" __declspec(naked) void __fassign_00476DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 20: je 0x476e1c
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 C7 5F 00 00: call 0x47cdd0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes EB 18: jmp 0x476e34
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 27 60 00 00: call 0x47ce50
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
