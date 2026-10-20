// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E8560 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_585e8560_585E8560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 20f34h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10678h]
        and eax, 0fffff0ffh
        or eax, 100h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10678h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 E4 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD 3B EA FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x3b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        push 800100f2h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 43 24 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x43
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
