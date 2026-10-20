// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00477030 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00477030_00477030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        lea eax, [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 2ch]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 AD 42 00 00: call 0x47b300
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        cmp dword ptr [eax], 2dh
        sete cl
        mov edx, dword ptr [ebp + 0ch]
        add edx, ecx
        push edx
        ; Exact mapped bytes E8 16 5E 00 00: call 0x47ce90
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 10 00 00 00: call 0x4770a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov eax, dword ptr [ebp + 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
