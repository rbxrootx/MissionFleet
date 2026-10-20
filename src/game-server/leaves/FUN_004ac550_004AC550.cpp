// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AC550 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_004ac550_004AC550() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0ffffffffh
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x4ac582
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c264h
        push 0
        push 3ah
        push 58c258h
        push 2
        ; Exact mapped bytes E8 B7 45 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ac582
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4ac55e
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x4ac5a1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], 0
        ; Exact mapped bytes EB 27: jmp 0x4ac5c8
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A6 BD 00 00: call 0x4b8350
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 2A 00 00 00: call 0x4ac5e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FB BD 00 00: call 0x4b83c0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
