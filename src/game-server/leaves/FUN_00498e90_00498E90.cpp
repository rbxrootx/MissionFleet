// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00498E90 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_00498e90_00498E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 17: je 0x498eb9
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 74 17: je 0x498ed9
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        push eax
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 1E 45 05 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 06 00 00 00: call 0x498f10
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
