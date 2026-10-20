// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585028E0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_585028e0_585028E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0F 09 FA FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x09
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        xor eax, eax
        mov byte ptr [ebp - 1], al
        lea ecx, [ebp - 1]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 11 FA F9 FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 55 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 93 E9 FF FF: call 0x585012b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 03 56 F8 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
