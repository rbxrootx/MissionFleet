// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FE6B0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_004fe6b0_004FE6B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x4fe6f9
        __asm _emit 0x74
        __asm _emit 0x38
        push 4ed84ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 4]
        push edx
        push 4
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 78 A2 FA FF: call 0x4a8950
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa2
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x4fe6f1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        sub edx, 4
        push edx
        ; Exact mapped bytes E8 1B ED FE FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        sub eax, 4
        ; Exact mapped bytes EB 21: jmp 0x4fe71a
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B F1 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4fe717
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 F5 EC FE FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
