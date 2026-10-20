// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C0CC0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_587c0cc0_587C0CC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 2E: je 0x587c0cfe
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes E8 B5 F9 CD FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf9
        __asm _emit 0xcd
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 1C: je 0x587c0cfe
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 30h]
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        mov esp, ebp
        pop ebp
        ret
    }
}
