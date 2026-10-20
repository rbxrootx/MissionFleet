// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EEA40 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_584eea40_584EEA40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 3B: je 0x584eea8d
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 A5 84 F9 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 54 28 00 00: call 0x584f12e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
