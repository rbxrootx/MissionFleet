// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2FE0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_584a2fe0_584A2FE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0F 02 00 00: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 11 F3 FF FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 4E FE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 13 E4 FF FF: call 0x584a1430
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 03 4F FE FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
