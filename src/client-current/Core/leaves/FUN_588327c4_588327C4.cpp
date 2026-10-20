// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588327C4 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_588327c4_588327C4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push eax
        ; Exact mapped bytes 66 0F 13 45 F4: movlpd qword ptr [ebp - 0xc], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes FF 15 D0 43 89 58: call dword ptr [0x588943d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        xor eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF 15 4C 42 89 58: call dword ptr [0x5889424c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        xor dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF 15 50 42 89 58: call dword ptr [0x58894250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        xor dword ptr [ebp - 4], eax
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 74 41 89 58: call dword ptr [0x58894174]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [ebp - 4]
        xor eax, dword ptr [ebp - 14h]
        xor eax, dword ptr [ebp - 4]
        xor eax, ecx
        leave
        ret
    }
}
