// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C37C0 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_587c37c0_587C37C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x587c3865
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10h], edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A 01 00 00: call 0x587c3960
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 74 26: je 0x587c383a
        __asm _emit 0x74
        __asm _emit 0x26
        push -1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        push edx
        ; Exact mapped bytes FF 15 28 41 89 58: call dword ptr [0x58894128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp - 4]
        add eax, 14h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 587c3870h
        push 0
        push 0
        ; Exact mapped bytes E8 1A 47 09 00: call 0x58857f6f
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], eax
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x587c3867
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
