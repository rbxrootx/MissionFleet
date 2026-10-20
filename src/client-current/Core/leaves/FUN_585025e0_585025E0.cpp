// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585025E0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_585025e0_585025E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10ch], 0
        push 104h
        lea eax, [ebp - 108h]
        push eax
        push 0
        ; Exact mapped bytes FF 15 E4 42 89 58: call dword ptr [0x588942e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 5ch
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 B1 EB FE FF: call 0x584f11d0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        add eax, 1
        mov dword ptr [ebp - 10ch], eax
        mov edx, dword ptr [ebp - 10ch]
        mov byte ptr [edx], 0
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 10 42 89 58: call dword ptr [0x58894210]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 04 EA 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
