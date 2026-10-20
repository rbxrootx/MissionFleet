// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C1400 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_587c1400_587C1400() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 75 14: jne 0x587c1427
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ecx + 84h], eax
        ; Exact mapped bytes EB 29: jmp 0x587c1450
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 AB 35 CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x35
        __asm _emit 0xcc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x587c1450
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 99 35 CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x35
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
