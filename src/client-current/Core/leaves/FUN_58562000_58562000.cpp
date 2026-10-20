// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58562000 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_58562000_58562000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 44h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 63 A4 F2 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xa4
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 7E 2B: jle 0x5856204f
        __asm _emit 0x7e
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 44h]
        xor edx, 55555555h
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        ; Exact mapped bytes F2 0F 59 05 00 95 8A 58: mulsd xmm0, qword ptr [0x588a9500]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x95
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        xor ecx, 55555555h
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 7C 33: jl 0x5856208b
        __asm _emit 0x7c
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 8]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 34h]
        cdq
        mov ecx, 64h
        idiv ecx
        xor eax, 55555555h
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 54h], edx
        ; Exact mapped bytes EB 35: jmp 0x585620c0
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 8]
        xor eax, 55555555h
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [ecx + 34h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        xor edx, 55555555h
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 4ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 48 F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x48
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6ch], eax
        ; Exact mapped bytes 75 31: jne 0x58562104
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 34h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 87h
        ; Exact mapped bytes 7D 08: jge 0x585620ed
        __asm _emit 0x7d
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 07: jmp 0x585620f4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 87h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD CD 11 00: call 0x5867ef00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xcd
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
