// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419B71 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_00419b71_00419B71() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 24h]
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x419b94
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ecx]
        push 0
        push dword ptr [esp + 0ch]
        push -2
        push dword ptr [esi + 28h]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x419b94
        __asm _emit 0x74
        __asm _emit 0x05
        push 1
        pop eax
        ; Exact mapped bytes EB 16: jmp 0x419baa
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [esi + 1ch]
        push 0
        push dword ptr [esp + 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push -2
        mov eax, dword ptr [ecx]
        push dword ptr [esi + 28h]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
