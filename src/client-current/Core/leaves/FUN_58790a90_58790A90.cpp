// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58790A90 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_58790a90_58790A90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 32 5E FF FF: call 0x587868e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 02: je 0x58790abd
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 43: jmp 0x58790b00
        __asm _emit 0xeb
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 104h]
        ; Exact mapped bytes 75 35: jne 0x58790b00
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D 64 FF FF: call 0x58786f20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 3E CF FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x3e
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 11: jne 0x58790af2
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        ; Exact mapped bytes EB 10: jmp 0x58790b02
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
