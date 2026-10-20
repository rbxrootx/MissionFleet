// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587683A0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_587683a0_587683A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10c0h], 0
        ; Exact mapped bytes 74 20: je 0x587683d5
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5e7ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC 62 D5 FF: call 0x584be680
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x62
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
