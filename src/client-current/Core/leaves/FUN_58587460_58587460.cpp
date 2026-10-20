// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58587460 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_58587460_58587460() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0bch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 FB FF FF: call 0x58586fe0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        mov dword ptr [ebp - 8], eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 80 F1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x80
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0bch]
        cmp eax, dword ptr [edx + 0c0h]
        ; Exact mapped bytes 74 10: je 0x585874bc
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB DC: jmp 0x58587498
        __asm _emit 0xeb
        __asm _emit 0xdc
        movzx ecx, byte ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 80 F1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 40000000h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
