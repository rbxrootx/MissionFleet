// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501CC0 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_58501cc0_58501CC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 62 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 D3 55 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x55
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov cl, byte ptr [ebp - 2]
        mov byte ptr [ebp - 1], cl
        mov edx, dword ptr [ebp - 0ch]
        push edx
        movzx eax, byte ptr [ebp - 1]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 46 F3 FF FF: call 0x58501040
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3D 0C 00 00: call 0x58502940
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 31 0E 00 00: call 0x58502b40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
