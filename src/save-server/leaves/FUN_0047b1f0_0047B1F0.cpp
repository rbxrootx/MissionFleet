// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047B1F0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_0047b1f0_0047B1F0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes E8 2F 46 00 00: call 0x47f830
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        and eax, 0ffffh
        cmp eax, 0ffffh
        ; Exact mapped bytes 75 0B: jne 0x47b21b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 0ffffffffh
        ; Exact mapped bytes EB 0D: jmp 0x47b228
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        pop ebp
        ret
    }
}
