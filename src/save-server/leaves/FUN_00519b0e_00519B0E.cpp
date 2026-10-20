// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519B0E .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_00519b0e_00519B0E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 9E 86 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 22 05 00 00: call 0x51a057
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7E 14: jle 0x519b51
        __asm _emit 0x7e
        __asm _emit 0x14
        push 142h
        push 67598ch
        ; Exact mapped bytes E8 F4 F1 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519b51
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x519b35
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 14: jle 0x519b73
        __asm _emit 0x7e
        __asm _emit 0x14
        push 143h
        push 67598ch
        ; Exact mapped bytes E8 D2 F1 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519b73
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x519b57
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A1 88 01 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x519bc2
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        and ecx, 18h
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x519bbb
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B5 07 00 00: call 0x51a36b
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 07: jmp 0x519bc2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 8
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
