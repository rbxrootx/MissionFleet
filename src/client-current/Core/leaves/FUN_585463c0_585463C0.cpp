// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585463C0 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_585463c0_585463C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 300h], 0
        ; Exact mapped bytes 75 04: jne 0x585463da
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7C: jmp 0x58546456
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0b0h]
        ; Exact mapped bytes E8 D8 A7 27 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa7
        __asm _emit 0x27
        __asm _emit 0x00
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b0h]
        ; Exact mapped bytes E8 F8 32 FE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        sub eax, 1
        cmp esi, eax
        ; Exact mapped bytes 7D 55: jge 0x58546454
        __asm _emit 0x7d
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        ; Exact mapped bytes E8 E3 AD 27 00: call 0x587c11f0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xad
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58546420
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 15: jge 0x5854643b
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        ; Exact mapped bytes E8 B8 AD 27 00: call 0x587c11f0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xad
        __asm _emit 0x27
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x58546417
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D 32 00 00: call 0x585496e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 B1 FF FF: call 0x58541630
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x58546456
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x58546456
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        mov esp, ebp
    }
}
