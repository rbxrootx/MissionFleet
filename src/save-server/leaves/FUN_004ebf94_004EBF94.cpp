// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EBF94 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_004ebf94_004EBF94() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 02: jne 0x4ebfa3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 63: jmp 0x4ec006
        __asm _emit 0xeb
        __asm _emit 0x63
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 88 B9 68 00: call dword ptr [0x68b988]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 8000h
        ; Exact mapped bytes 75 14: jne 0x4ebfc8
        __asm _emit 0x75
        __asm _emit 0x14
        push 9ch
        push 675a74h
        ; Exact mapped bytes E8 7D CD 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ebfc8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4ebfa3
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 88 B9 68 00: call dword ptr [0x68b988]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffh
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4ebffc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB E4: jmp 0x4ebfe0
        __asm _emit 0xeb
        __asm _emit 0xe4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 00 BA 68 00: call dword ptr [0x68ba00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
