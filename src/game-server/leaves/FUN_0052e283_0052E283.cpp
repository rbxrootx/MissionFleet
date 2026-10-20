// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E283 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0052e283_0052E283() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 B4 71 01 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 11: jne 0x52e2ac
        __asm _emit 0x75
        __asm _emit 0x11
        push 45h
        push 5ca224h
        ; Exact mapped bytes E8 59 67 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52e2ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x52e292
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        add edx, 2ch
        push edx
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x52e2c8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 18 FF FF FF: call 0x52e1e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
