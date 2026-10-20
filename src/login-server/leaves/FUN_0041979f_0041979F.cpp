// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041979F .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_0041979f_0041979F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4F: je 0x4197f9
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [ecx + 4ch]
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x4197f9
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [eax]
        lea edx, [ebp - 8]
        push edx
        push 440418h
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 36: jl 0x4197f9
        __asm _emit 0x7c
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 8]
        and dword ptr [ebp - 4], 0
        lea edx, [ebp - 4]
        mov ecx, dword ptr [eax]
        push edx
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x4197f0
        __asm _emit 0x7c
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        push dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
