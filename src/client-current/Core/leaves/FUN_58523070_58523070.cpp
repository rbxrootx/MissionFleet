// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58523070 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_58523070_58523070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0F 06 00 00: call 0x58523690
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 10h
        ; Exact mapped bytes 76 09: jbe 0x5852308f
        __asm _emit 0x76
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 96h
        ; Exact mapped bytes EB 07: jmp 0x58523096
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 64h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x585230ab
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x585230b2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BC 03 00 00: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
