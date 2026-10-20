// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F4720 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_585f4720_585F4720() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 104h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4B 18 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x18
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585f4758
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 C9 FF FF: call 0x585f1130
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 5F: jge 0x585f47cb
        __asm _emit 0x7d
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 108h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 CA FF FF: call 0x585f11d0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8A AC EA FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xac
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 108h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 18h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C8 17 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x17
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 84: jmp 0x585f474f
        __asm _emit 0xeb
        __asm _emit 0x84
        ; Exact mapped bytes EB 09: jmp 0x585f47d6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 400h
        ; Exact mapped bytes 7D 25: jge 0x585f4804
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 108h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8F 17 E9 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x17
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C9: jmp 0x585f47cd
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
