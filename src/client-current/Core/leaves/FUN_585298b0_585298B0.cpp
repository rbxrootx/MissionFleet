// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585298B0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_585298b0_585298B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 194h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov ecx, 1
        mov edx, 5894734ch
        xor eax, eax
        ; Exact mapped bytes F0 0F B1 0A: lock cmpxchg dword ptr [edx], ecx
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xb1
        __asm _emit 0x0a
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x585298ea
        __asm _emit 0x75
        __asm _emit 0x13
        lea eax, [ebp - 194h]
        push eax
        push 202h
        ; Exact mapped bytes FF 15 64 45 89 58: call dword ptr [0x58894564]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 5C 77 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x77
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
