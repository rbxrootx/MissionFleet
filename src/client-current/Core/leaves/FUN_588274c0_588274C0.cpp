// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588274C0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_588274c0_588274C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 08: je 0x588274e0
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 74 10: je 0x588274ee
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes EB 1C: jmp 0x588274fc
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 2
        xor eax, eax
        ; Exact mapped bytes EB 14: jmp 0x58827502
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 3
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x58827502
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        mov esp, ebp
        pop ebp
        ret
    }
}
