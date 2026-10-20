// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4160 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_587c4160_587C4160() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes 7E 12: jle 0x587c418d
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 74h]
        sub edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 80h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 2E: je 0x587c41d9
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes E8 DA C4 CD FF: call 0x584a0690
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc4
        __asm _emit 0xcd
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 1C: je 0x587c41d9
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 2
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
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
