// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5060 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_587c5060_587C5060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 33: je 0x587c50a5
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x587c5094
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587c509b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 50h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
