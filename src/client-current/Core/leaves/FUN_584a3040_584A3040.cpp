// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3040 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_584a3040_584A3040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AF 01 00 00: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 B1 F2 FF FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 99 4E FE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 13 E4 FF FF: call 0x584a1490
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 A3 4E FE FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
