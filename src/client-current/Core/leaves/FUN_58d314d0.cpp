// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58D314D0 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58d314d0() {
    __asm {
        ; Exact mapped bytes 0F 85 68 F8 FA FF: jne 0x58ce0d3e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes 66 85 E4: test sp, sp
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xe4
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
        ; Exact mapped bytes 66 F7 C3 61 31: test bx, 0x3161
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xc3
        __asm _emit 0x61
        __asm _emit 0x31
        ; Exact mapped bytes 01 01: add dword ptr [ecx], eax
        __asm _emit 0x01
        __asm _emit 0x01
        ; Exact mapped bytes E9 B1 11 E0 FF: jmp 0x58b3269b
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x11
        __asm _emit 0xe0
        __asm _emit 0xff
    }
}
