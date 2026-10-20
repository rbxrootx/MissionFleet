// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD4A5 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_004cd4a5_004CD4A5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 86 5F FD FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4cd4d4
        __asm _emit 0x75
        __asm _emit 0x14
        push 242h
        push 6714ach
        ; Exact mapped bytes E8 71 B8 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd4d4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4cd4b1
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 A7 C1 F7 FF: call 0x449690
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x4cd4fe
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0ffffffffh
        ; Exact mapped bytes EB 0B: jmp 0x4cd509
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
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
