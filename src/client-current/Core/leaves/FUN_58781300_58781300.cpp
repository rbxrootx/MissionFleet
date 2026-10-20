// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781300 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_58781300_58781300() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 09: jmp 0x5878131d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x58781342
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 37 D0 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x37
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        and ecx, 3fffffh
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x58781340
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x58781344
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB D2: jmp 0x58781314
        __asm _emit 0xeb
        __asm _emit 0xd2
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
