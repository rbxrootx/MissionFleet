// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585070A0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_585070a0_585070A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 20: je 0x585070d1
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 04 F8 FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F0 07 00 00: call 0x585078c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
