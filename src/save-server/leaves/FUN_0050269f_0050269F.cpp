// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050269F .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_0050269f_0050269F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 64h]
        and ah, 0f0h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 30 CD FF FF: call 0x4ff3fc
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], ecx
        mov edx, dword ptr [ebp - 4]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 19: je 0x5026f8
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x5026ee
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0A: jmp 0x5026f8
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B7 98 02 00: call 0x52bfaf
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
